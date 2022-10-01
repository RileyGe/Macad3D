using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Occt;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media.Imaging;

namespace Macad.Core.Auxiliary
{
    [SerializeType]
    public class TextLabel : InteractiveEntity, ITransformable
    {
        private Pnt _position = Pnt.Origin;
        [SerializeMember]
        public Pnt Position { 
            get { return _position; }
            set { 
                if(!_position.IsEqual(value, double.Epsilon))
                {
                    SaveUndo();
                    _position = value;
                    RaisePropertyChanged();
                    RaiseVisualChanged();
                }                
            }
        }
        Quaternion _rotation = Quaternion.Identity;
        [SerializeMember]
        public Quaternion Rotation { 
            get { return _rotation; }
            set
            {
                if (!_rotation.IsEqual(value))
                {
                    SaveUndo();
                    _rotation = value;
                    RaisePropertyChanged();
                    RaiseVisualChanged();
                }
            }
        }
        private string _text = string.Empty;
        [SerializeMember]
        public string Text { 
            get { return _text; }
            set { 
                if(_text != value)
                {
                    SaveUndo();
                    _text = value;
                    Invalidate();
                    RaisePropertyChanged();
                }                
            }
        }
        public Ax3 GetCoordinateSystem()
        {
            return Rotation.ToAx3(Position);
        }
    }
}
