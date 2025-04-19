using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HospitalOPD
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
            string contact = textBoxContact.Text.Trim();
            string address = textBoxAddress.Text.Trim();
            int age = (int)numericUpDownAge.Value;
            string gender = radioButtonMale.Checked ? "Male" :
                            radioButtonFemale.Checked ? "Female" :
                            radioButtonOther.Checked ? "Other" : "";

            string department = comboBoxDepartment.SelectedItem?.ToString();
            DateTime appointmentDate = dateTimePickerAppointment.Value.Date;

            // Validations
            if (string.IsNullOrEmpty(name))
                labelMessage.Text = "Please enter patient's name.";
            else if (string.IsNullOrEmpty(gender))
                labelMessage.Text = "Please select gender.";
            else if (string.IsNullOrEmpty(contact))
                labelMessage.Text = "Please enter contact number.";
            else if (string.IsNullOrEmpty(department))
                labelMessage.Text = "Please select a department.";
            else if (appointmentDate < DateTime.Today)
                labelMessage.Text = "Appointment date cannot be in the past.";
            else
                labelMessage.Text = $"Registration successful!\n" +
                                    $"Name: {name}, Age: {age}, Gender: {gender}\n" +
                                    $"Contact: {contact}\nDepartment: {department}\n" +
                                    $"Appointment: {appointmentDate.ToShortDateString()}\nAddress: {address}";


        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            textBoxName.Clear();
            textBoxContact.Clear();
            textBoxAddress.Clear();

            radioButtonMale.Checked = false;
            radioButtonFemale.Checked = false;
            radioButtonOther.Checked = false;

            numericUpDownAge.Value = 1;
            comboBoxDepartment.SelectedIndex = -1;
            dateTimePickerAppointment.Value = DateTime.Today;

            labelMessage.Text = "";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string[] category ={"General", "Pediatrics", "ENT", "Orthopedics", "Dermatology"};
            comboBoxDepartment.Items.AddRange(category);

            numericUpDownAge.Minimum = 1;
            numericUpDownAge.Maximum = 120;

            dateTimePickerAppointment.MinDate = DateTime.Today;
            labelMessage.Text = string.Empty;

        }
    }
}
