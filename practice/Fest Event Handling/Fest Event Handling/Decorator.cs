using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fest_Event_Handling
{
    public class Decorator
    {
        public string DecorationBill { get; private set; }

        public void OnCollegeFest(int visitors)
        {
            int total = 10000 + (visitors * 10);
            DecorationBill = $"Decoration Bill: ₹{total}";
        }
    }
}
