using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Interaction.Visual
{
    public sealed class VisualText : VisualObject
    {
        private readonly TextLabel textLabel;
        static VisualText()
        {
            Layer.PresentationChanged += _OnPresentationChanged;
            Layer.InteractivityChanged += _OnInteractivityChanged;
            VisualObjectManager.IsolatedEntitiesChanged += _VisualObjectManager_IsolatedEntitiesChanged;
        }
        public VisualText(WorkspaceController workspaceController, TextLabel entity)
            : base(workspaceController, entity)
        {
            textLabel = entity;
            Update();
        }
        AIS_TextLabel _AisObject;
        static void _OnPresentationChanged(Layer layer)
        {
            var workspaceController = InteractiveContext.Current?.WorkspaceController;
            if (workspaceController == null)
                return;

            foreach (var visualText in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualText>())
            {
                var aisShape = visualText._AisObject;
                if (aisShape == null)
                    continue;

                aisShape.SetColor(layer?.Color.ToQuantityColor() ?? Colors.Auxillary);
                workspaceController.Workspace.AisContext.RecomputePrsOnly(aisShape, false, true);
            }
        }
        static void _OnInteractivityChanged(Layer layer)
        {
            var workspaceController = InteractiveContext.Current?.WorkspaceController;
            if (workspaceController == null)
                return;

            foreach (var visualText in workspaceController.VisualObjects.Where(entity => entity.Layer == layer).OfType<VisualText>())
            {
                visualText._UpdateInteractivityStatus();
            }
        }
        static void _VisualObjectManager_IsolatedEntitiesChanged(VisualObjectManager visualObjectManager)
        {
            foreach (var visualText in visualObjectManager.GetAll().OfType<VisualText>())
            {
                visualText._UpdateInteractivityStatus();
            }
        }

        void _UpdateInteractivityStatus()
        {
            if (_AisObject == null)
                return;

            var layer = Entity?.Layer;
            if (layer == null)
                return;

            bool isVisible = layer.IsVisible;
            if (WorkspaceController.VisualObjects.EntityIsolationEnabled)
            {
                isVisible &= WorkspaceController.VisualObjects.GetIsolatedEntities().Contains(Entity);
            }

            if (isVisible)
            {
                if (AisContext.IsDisplayed(_AisObject))
                {
                    AisContext.Update(_AisObject, false);
                }
                else
                {
                    AisContext.Display(_AisObject, false);
                }

                if (WorkspaceController.Selection.SelectedEntities.Contains(Entity) && !AisContext.IsSelected(_AisObject))
                {
                    AisContext.AddOrRemoveSelected(_AisObject, false);
                }
            }
            else
            {
                if (AisContext.IsDisplayed(_AisObject))
                {
                    AisContext.Erase(_AisObject, false);
                }
            }

            RaiseAisObjectChanged();
        }

        void _EnsureAisObject()
        {
            if (_AisObject != null)
                return;

            if (textLabel == null)
                return;

            _AisObject = new();
            _UpdatePresentation();

            //_AisObject.SetOwner(new AISX_Guid(_AisObject.));
            _UpdateInteractivityStatus();
        }

        void _UpdatePresentation()
        {
            if (_AisObject == null)
                return;
            //aisObject.setpl
            _AisObject.SetPosition(textLabel.Position);
            //aisObject.SetTransparency(0.8);
            //TCollection_ExtendedString text = new(textLabel.Text);
            _AisObject.SetText(new TCollection_ExtendedString(textLabel.Text));
            _AisObject.SetFont("Arial");
            _AisObject.SetHeight(20);
            //aisObject.SetColor(Quantity_Color.ColorFromName())
            //_AisObject.SetPlane(new Pln(_DatumPlane.GetCoordinateSystem()));
            //_AisObject.SetSize(_DatumPlane.SizeX, _DatumPlane.SizeY);
            //_AisObject.SetColor(_DatumPlane.Layer?.Color.ToQuantityColor() ?? Colors.Auxillary);
            //_AisObject.SetTransparency(_Transparency);

            //if (!_DatumPlane.ImageFilePath.IsNullOrEmpty())
            //{
            //    _Texture = ImageCache.LoadCachedImage(_DatumPlane.ImageFilePath, false);
            //    if (_Texture != null)
            //    {
            //        _AisObject.SetTexture(_Texture);
            //    }
            //}
            //else
            //{
            //    _Texture = null;
            //}
        }

        public override AIS_InteractiveObject AisObject
        {
            get {
                _EnsureAisObject();
                return _AisObject; 
            }
        }

        public override void Remove()
        {
            if (_AisObject != null)
            {
                AisContext.Erase(_AisObject, false);
                _AisObject = null;
            }
        }
        public override void Update()
        {
            if (_AisObject is null)
            {
                _EnsureAisObject();
            }
            else
            {
                _UpdatePresentation();
                AisContext.Redisplay(_AisObject, true);
            }
        }
        [AutoRegister]
        internal static void Register()
        {
            VisualObjectManager.Register<TextLabel>(Create);
        }

        public static VisualText Create(WorkspaceController workspaceController, InteractiveEntity entity)
        {
            if (entity is TextLabel label)
            {
                return new VisualText(workspaceController, label);
            }

            return null;
        }

    }
}
