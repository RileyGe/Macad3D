﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual
{
    /// <summary>
    /// 用于管理InteractiveEntity与显示类之间的对应关系
    /// 通过Register方法进行注册
    /// </summary>
    public sealed class VisualObjectManager : BaseObject, IDisposable
    {
        #region Members

        WorkspaceController _WorkspaceController;

        public delegate VisualObject CreateVisualObjectDelegate(WorkspaceController workspaceController, InteractiveEntity entity);
        static readonly Dictionary<Type, CreateVisualObjectDelegate> _RegisteredVisualTypes = new();

        readonly Dictionary<TopoDS_Shape, InteractiveEntity> _BRepToInteractiveDictionary = new();
        readonly Dictionary<InteractiveEntity, VisualObject> _InteractiveToVisualDictionary = new();
        readonly Dictionary<Guid, InteractiveEntity> _GuidToInteractiveDictionary = new();
        readonly List<InteractiveEntity> _InvalidatedInteractiveEntities = new();
        readonly List<InteractiveEntity> _IsolatedEntities = new();

        //--------------------------------------------------------------------------------------------------

        #endregion
        
        #region Registration

        public static void Register<TEntity>(CreateVisualObjectDelegate createDelegate) where TEntity : InteractiveEntity 
        {
            var typeEntity = typeof(TEntity);
            Debug.Assert(!_RegisteredVisualTypes.ContainsKey(typeEntity), "Entity type has already registered a visual object type.");
            _RegisteredVisualTypes.Add(typeEntity, createDelegate);
        }

        //--------------------------------------------------------------------------------------------------
        
        public static VisualObject CreateVisualObject(WorkspaceController workspaceController, InteractiveEntity entity)
        {
            if (!_RegisteredVisualTypes.TryGetValue(entity.GetType(), out CreateVisualObjectDelegate createDelegate))
            {
                Messages.Error($"Could not found a visualization for entity type {entity.GetType().Name}.");
                return null;
            }

            try
            {
                var instance = createDelegate(workspaceController, entity);
                return instance;
            }
            catch (Exception e)
            {
                Messages.Error($"Could not create visualization for type {entity.GetType().Name}: {e.Message}");
            }

            return VisualShape.Create(workspaceController, entity); // at the end, try with default VisualObject
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public VisualObjectManager(WorkspaceController workspaceController)
        {
            _WorkspaceController = workspaceController;

            Entity.EntityRemoved += _Entity_EntityRemoved;
            InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;
            Entity.EntityRemoved -= _Entity_EntityRemoved;
            
            _BRepToInteractiveDictionary.Clear();
            _InteractiveToVisualDictionary.Clear();
            _GuidToInteractiveDictionary.Clear();
            _InvalidatedInteractiveEntities.Clear();
            _IsolatedEntities.Clear();

            _WorkspaceController = null;
        }

        //--------------------------------------------------------------------------------------------------

        internal void InitEntities()
        {
            foreach (var entity in InteractiveContext.Current.Document)
            {
                entity.RaiseVisualChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #region Isolation

        public delegate void VisualShapeManagerEventHandler(VisualObjectManager visualObjectManager);

        public static event VisualShapeManagerEventHandler IsolatedEntitiesChanged;

        //--------------------------------------------------------------------------------------------------

        public bool EntityIsolationEnabled
        {
            get { return _IsolatedEntities.Count != 0; }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetIsolatedEntities(IEnumerable<InteractiveEntity> entitiesToIsolate)
        {
            _IsolatedEntities.Clear();
            if (entitiesToIsolate != null)
            {
                _IsolatedEntities.AddRange(entitiesToIsolate);
            }

            IsolatedEntitiesChanged?.Invoke(this);
            RaisePropertyChanged(nameof(EntityIsolationEnabled));
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<InteractiveEntity> GetIsolatedEntities()
        {
            if (_IsolatedEntities.Count == 0)
                return null;

            return _IsolatedEntities;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public VisualObject Get(InteractiveEntity obj, bool forceCreation=false)
        {
            if (obj == null)
                return null;

            if (_InteractiveToVisualDictionary.ContainsKey(obj))
                return _InteractiveToVisualDictionary[obj];

            if(forceCreation)
                return Add(obj);

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<VisualObject> GetAll()
        {
            return _InteractiveToVisualDictionary.Select(kvp => kvp.Value);
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<VisualObject> Where(Func<InteractiveEntity, bool> selector)
        {
            return _InteractiveToVisualDictionary.Where(kvp => selector(kvp.Key)).Select(kvp => kvp.Value);
        }

        //--------------------------------------------------------------------------------------------------

        public VisualObject Add(InteractiveEntity entity)
        {
            foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
            {
                _BRepToInteractiveDictionary.Remove(item.Key);
            }

            var ocShape = entity.GetTransformedBRep();
            if (ocShape != null)
            {
                _BRepToInteractiveDictionary.Add(ocShape, entity);
            }

            var visualObject = Get(entity);
            if (visualObject != null)
            {
                visualObject.Update();
            }
            else
            {
                visualObject = CreateVisualObject(_WorkspaceController, entity);
                if (visualObject != null)
                {
                    _InteractiveToVisualDictionary.Add(entity, visualObject);
                    _GuidToInteractiveDictionary.Add(entity.Guid, entity);
                }
            }

            return visualObject;
        }

        //--------------------------------------------------------------------------------------------------

        public void UpdateInvalidatedEntities()
        {
            var entitiesToUpdate = _InvalidatedInteractiveEntities.ToArray();
            foreach (var entity in entitiesToUpdate)
            {
                Update(entity);
                _InvalidatedInteractiveEntities.Remove(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void Update(InteractiveEntity entity)
        {
            if (!entity.IsVisible)
            {
                Remove(entity);
                return;
            }

            var visualObject = Get(entity);
            if (visualObject == null)
            {
                Add(entity);
                return;
            }

            var ocShape = entity.GetTransformedBRep();
            if (ocShape != null)
            {
                foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
                {
                    _BRepToInteractiveDictionary.Remove(item.Key);
                }

                _BRepToInteractiveDictionary.Add(ocShape, entity);
            }

            visualObject.Update();
        }

        //--------------------------------------------------------------------------------------------------

        public void Remove(InteractiveEntity entity)
        {
            var visualShape = Get(entity);
            if (visualShape != null)
            {
                visualShape.Remove();
                _InteractiveToVisualDictionary.Remove(entity);
                _GuidToInteractiveDictionary.Remove(entity.Guid);
            }

            foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
            {
                _BRepToInteractiveDictionary.Remove(item.Key);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public InteractiveEntity GetVisibleEntity(AIS_InteractiveObject aisInteractiveObject)
        {
            var owner = aisInteractiveObject.GetOwner();
            if (AISX_Guid.TryGetGuid(owner, out var guid)
                && _GuidToInteractiveDictionary.TryGetValue(guid, out var entity))
            {
                return entity;
            }
            if (aisInteractiveObject.Type() == AIS_KindOfInteractive.AIS_KOI_Shape)
            {
                var brep = (aisInteractiveObject as AIS_Shape)?.Shape();
                return GetVisibleEntity(brep);
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public InteractiveEntity GetVisibleEntity(TopoDS_Shape brep)
        {
            if (_BRepToInteractiveDictionary.TryGetValue(brep, out var value))
            {
                return value;
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<InteractiveEntity> GetVisibleEntities()
        {
            return _InteractiveToVisualDictionary.Keys;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Shape> GetVisibleBReps()
        {
            return _BRepToInteractiveDictionary.Keys;
        }

        //--------------------------------------------------------------------------------------------------

        void _Entity_EntityRemoved(Entity entity)
        {
            if (!(entity is InteractiveEntity interactiveEntity))
                return;

            _InvalidatedInteractiveEntities.Remove(interactiveEntity);

            // Remove visual
            Remove(interactiveEntity);
        }

        //--------------------------------------------------------------------------------------------------
        
        void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
        {
            if(!_InvalidatedInteractiveEntities.Contains(entity))
                _InvalidatedInteractiveEntities.Add(entity);

            _WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

    }
}