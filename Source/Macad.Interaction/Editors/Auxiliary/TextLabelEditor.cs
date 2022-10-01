using Macad.Core.Auxiliary;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Interaction.Editors.Auxiliary
{
    public sealed class TextLabelEditor : Editor<TextLabel>
    {
        public override void Start()
        {
            // throw new NotImplementedException();
            // do nothing
        }

        public override void Stop()
        {
            // throw new NotImplementedException();
            // do nothing
        }
        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<TextLabelEditor>();
        }
    }
}
