using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fest_Event_Handling
{
   public class Caterer
    {
        public string CateringBill { get; private set; }

        public void OnCollegeFest(int visitors)
        {
            int total = visitors * 200;
            CateringBill = $"Catering Bill: ₹{total}";
        }
    }
}
