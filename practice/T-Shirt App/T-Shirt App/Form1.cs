using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace T_Shirt_App
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonCalculate_Click(object sender, EventArgs e)
        {
            try
            {
                // Get Quantity
                int quantity = int.Parse(textBoxQuantity.Text);

                // Determine Price based on size
                double pricePerShirt = 0;

                if (radioButtonSmall.Checked)
                {
                    pricePerShirt = 125;
                }
                else if (radioButtonMedium.Checked)
                {
                    pricePerShirt = 175;
                }
                else if (radioButtonLarge.Checked)
                {
                    pricePerShirt = 250;
                }
                else
                {
                    MessageBox.Show("Please select a T-shirt size.");
                    return;
                }

                // Calculate base price
                double total = pricePerShirt * quantity;

                // Apply promocode if applicable
                string promoCode = textBoxPromoCode.Text.Trim().ToUpper();
                if (promoCode == "TRUEBLUE")
                {
                    total -= total * 0.10; // 10% discount
                }

                // Apply 9% GST
                double gstAmount = total * 0.09;
                double finalPrice = total + gstAmount;

                // Display final price
                labelFinalPrice.Text = $"Final Price: ₹ {finalPrice}";
            }
            catch (FormatException)
            {
                MessageBox.Show("Please enter a valid quantity.");
            }
        }
    }
}
