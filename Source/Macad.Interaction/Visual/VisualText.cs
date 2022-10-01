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
        public VisualText(WorkspaceController workspaceController, TextLabel entity)
            : base(workspaceController, entity)
        {
            textLabel = entity;
            Update();
        }
        AIS_TextLabel aisObject;
        void _EnsureAisObject()
        {
            if (aisObject != null)
                return;

            if (textLabel == null)
                return;

            aisObject = new();
            _UpdatePresentation();

            //aisObject.SetOwner(new AISX_Guid(_DatumPlane.Guid));
            //_UpdateInteractivityStatus();
        }

        void _UpdatePresentation()
        {
            if (aisObject == null)
                return;
            //aisObject.setpl
            aisObject.SetPosition(textLabel.Position);
            //aisObject.SetTransparency(0.8);
            TCollection_ExtendedString text = new(textLabel.Text);
            aisObject.SetText(text);
            aisObject.SetFont("Arial");
            aisObject.SetHeight(20);
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
                return aisObject; 
            }
        }

        public override void Remove()
        {
            if (aisObject != null)
            {
                AisContext.Erase(aisObject, false);
                aisObject = null;
            }
        }
        public override void Update()
        {
            if (aisObject is null)
            {
                _EnsureAisObject();
            }
            else
            {
                _UpdatePresentation();
                AisContext.Redisplay(aisObject, true);
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
