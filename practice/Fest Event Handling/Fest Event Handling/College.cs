using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fest_Event_Handling
{
    public delegate void FestEventHandler(int visitors);
    public class College
    {
        public event FestEventHandler CollegeFest;

        public void OrganizeFest(int visitors)
        {
            CollegeFest?.Invoke(visitors);
        }
    }
}
