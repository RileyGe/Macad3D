﻿using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction.Panels
{
    /// <summary>
    /// MVVM中模型类
    /// </summary>
    public class ViewportPanelModel : BaseObject, IHudManager
    {
        #region Properties

        public WorkspaceController WorkspaceController
        {
            get { return _WorkspaceController; }
            private set
            {
                if (_WorkspaceController != value)
                {
                    _WorkspaceController = value;
                    if (_WorkspaceController != null)
                    {
                        _WorkspaceController.HudManager = this;
                    }
                    else
                    {
                        HudElements.Clear();
                    }
                    _WorkspaceController = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ViewportController ViewportController
        {
            get { return _ViewportController; }
            private set
            {
                _ViewportController = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ObservableCollection<HudElement> HudElements { get; } = new();

        //--------------------------------------------------------------------------------------------------

        public Cursor Cursor
        {
            get { return _Cursor; }
            set
            {
                _Cursor = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public string HintMessage
        {
            get { return _HintMessage; }
            set
            {
                _HintMessage = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------
        public string ErrorMessage
        {
            get { return _ErrorMessage; }
            private set
            {
                if (_ErrorMessage != value)
                {
                    _ErrorMessage = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        WorkspaceController _WorkspaceController;
        ViewportController _ViewportController;
        Cursor _Cursor;
        string _HintMessage;
        object _HintMessageOwner;
        string _ErrorMessage;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Property handler

        internal ViewportPanelModel()
        {
            Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
            InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
            WorkspaceController = InteractiveContext.Current.WorkspaceController;
            ViewportController = InteractiveContext.Current.ViewportController;
        }

        //--------------------------------------------------------------------------------------------------

        ~ViewportPanelModel()
        {
            Entity.ErrorStateChanged -= _Entity_ErrorStateChanged;
            InteractiveContext.Current.PropertyChanged -= Context_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

        void Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
            {
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
                }
                WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
                }
            }
            else if (e.PropertyName == nameof(InteractiveContext.ViewportController))
            {
                ViewportController = (sender as InteractiveContext)?.ViewportController;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Control Callbacks
        
        public bool KeyDown(KeyEventArgs keyEventArgs)
        {
            var elements = HudElements.ToArray();
            foreach (var hudElement in elements )
            {
                hudElement.SimulatedKeyDown(keyEventArgs);
                if (keyEventArgs.Handled)
                    return true;
            }

            // Forward to workspace
            if (!(InteractiveContext.Current?.WorkspaceController is null))
            {
                if (InteractiveContext.Current.ShortcutHandler.KeyPressed(ShortcutScope.Workspace, keyEventArgs.Key, Keyboard.Modifiers)
                    || InteractiveContext.Current.WorkspaceController.KeyPressed(keyEventArgs.Key))
                {
                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IHudManager

        public T CreateElement<T>(object owner, BaseObject instance = null) where T : HudElement
        {
            var element = HudElement.CreateElement<T>(owner, instance, WorkspaceController);
            HudElements.Add(element);
            return element;
        }

        //--------------------------------------------------------------------------------------------------

        public void SetCursor(Cursor cursor)
        {
            Cursor = cursor;
        }

        //--------------------------------------------------------------------------------------------------

        public void SetHintMessage(object owner, string message)
        {
            if (message == null && owner != null)
            {
                if (owner != _HintMessageOwner)
                    return;
            }

            HintMessage = message;
            _HintMessageOwner = owner;
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveElement(HudElement element)
        {
            if (HudElements.Contains(element))
                HudElements.Remove(element);
        }

        //--------------------------------------------------------------------------------------------------
        
        public void RemoveElements(Func<HudElement, bool> predicate)
        {
            var toRemove = HudElements.Where(predicate).ToArray();
            foreach (var element in toRemove)
            {
                HudElements.Remove(element);
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion
        
        #region Error Message

        void _Selection_SelectionChanged(SelectionManager selectionManager)
        {
            _UpdateErrorMessage();
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Entity_ErrorStateChanged(Entity entity)
        {
            if (InteractiveContext.Current.WorkspaceController?.Selection.SelectedEntities.Contains(entity) ?? false)
            {
                _UpdateErrorMessage();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateErrorMessage()
        {
            var entities = InteractiveContext.Current.WorkspaceController?.Selection.SelectedEntities;
            if (entities?.Count == 1)
            {
                var shape = (entities[0] as Body)?.Shape;
                if (shape != null && shape.HasErrors)
                {
                    var messageList = InteractiveContext.Current.MessageHandler.GetEntityMessages(shape);
                    if (messageList != null && messageList.Count != 0)
                    {
                        ErrorMessage = $"Error: {messageList[0].Text}{(messageList[0].Text.EndsWith(".")?"":".")} See log for details.";
                    }
                    else
                    {
                        ErrorMessage = "Error: Shape making failed for unknown reason. See log for details.";
                    }
                    return;
                }
            }
            else
            {
                if (entities.Any(ent => (ent as Body)?.Shape?.HasErrors ?? false))
                {
                    ErrorMessage = "Error: One or more of the selected bodies have errors. See log for details.";
                    return;
                }
            }

            ErrorMessage = "";
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion
    }

}