using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Fest_Event_Handling
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (!int.TryParse(textBoxVisitors.Text, out int visitors) || visitors < 0)
            {
                MessageBox.Show("Please enter a valid number of visitors.");
                return;
            }

            College college = new College();
            Caterer caterer = new Caterer();
            Decorator decorator = new Decorator();

            college.CollegeFest +=  caterer.OnCollegeFest;
            college.CollegeFest += decorator.OnCollegeFest;

            college.OrganizeFest(visitors);

            textBoxOutput.Text = $"{caterer.CateringBill}\r\n{decorator.DecorationBill}";
        }
    }
}
