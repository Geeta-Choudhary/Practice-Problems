using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace railform
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonSubmit_Click(object sender, EventArgs e)
        {

            string name = textBoxName.Text.Trim();
            string from = comboBoxFrom.SelectedItem?.ToString();
            string to = comboBoxTo.SelectedItem?.ToString();
            string travelClass = comboBoxClass.SelectedItem?.ToString();
            DateTime departureDate = dateTimePickerDeparture.Value.Date;
            int passengers = (int)numericUpDownNoOfPassengers.Value;

            if (string.IsNullOrEmpty(name))
                labelMessage.Text = "Please enter a name.";
            else if (from == to)
                labelMessage.Text = "From and To stations cannot be the same.";
            else if (departureDate < DateTime.Today)
                labelMessage.Text = "Booking for previous dates is not allowed.";
            else
                labelMessage.Text = $"Booking successful!\n" +
                                    $"Name: {name}, \n" + 
                                    $"From: {from}, To: {to}\n" +
                                    $" Date: {departureDate.ToShortDateString()}, \n" +
                                    $"Class: {travelClass}\n" +
                                     $" Passengers: {passengers}";
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            textBoxName.Clear();
            comboBoxFrom.SelectedIndex = 0;
            comboBoxTo.SelectedIndex = 1;
            dateTimePickerDeparture.Value = DateTime.Now;
            comboBoxClass.SelectedIndex = 0;
            numericUpDownNoOfPassengers.Value = 1;
            labelMessage.Text = "";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] cities = { "Pune", "Mumbai", "Nagpur", "Delhi" };
            comboBoxFrom.Items.AddRange(cities);
            comboBoxTo.Items.AddRange(cities);

            string[] classes = { "General", "Sleeper", "AC", "First Class" };
            comboBoxClass.Items.AddRange(classes );

            comboBoxFrom.SelectedIndex = 0;
            comboBoxTo.SelectedIndex = 1;
            comboBoxClass.SelectedIndex = 0;

            numericUpDownNoOfPassengers.Minimum = 1;
            numericUpDownNoOfPassengers.Maximum = 10;
            dateTimePickerDeparture.MinDate = DateTime.Today;

        }
    }
}
