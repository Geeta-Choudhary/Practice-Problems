using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Simple_Calculator
{
    public partial class Form1 : Form
    {
        string expression = string.Empty; // Stores the full expression like "2+3*4"

        public Form1()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            expression += btn.Text;
            textBoxDisplay.Text = expression;
        }

        private void Operator_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;

            // Prevent two operators in a row
            if (expression.Length > 0 && "+-*/".Contains(expression[expression.Length-1].ToString()))
                return;

            expression += btn.Text;
            textBoxDisplay.Text = expression;
        }

        private void Equal_Click(object sender, EventArgs e)
        {
            try
            {
                if (expression.Contains("/0"))
                {
                    textBoxDisplay.Text = "Error:Cannot Divide by Zero";
                    expression = string.Empty;
                    return;
                }

                var result = new DataTable().Compute(expression, null);
                textBoxDisplay.Text = result.ToString();
                expression = result.ToString(); // For chaining
            }
            catch
            {
                textBoxDisplay.Text = "Invalid Expression";
                expression = string.Empty;
            }
        }

        private void Clear_Click(object sender, EventArgs e)
        {
            expression = string.Empty;
            textBoxDisplay.Text = "";
        }
    }
}
