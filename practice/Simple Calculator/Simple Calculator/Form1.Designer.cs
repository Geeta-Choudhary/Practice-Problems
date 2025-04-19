namespace Simple_Calculator
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.textBoxDisplay = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button9 = new System.Windows.Forms.Button();
            this.button0 = new System.Windows.Forms.Button();
            this.buttonAdd = new System.Windows.Forms.Button();
            this.buttonSub = new System.Windows.Forms.Button();
            this.buttonmul = new System.Windows.Forms.Button();
            this.buttondiv = new System.Windows.Forms.Button();
            this.buttonDot = new System.Windows.Forms.Button();
            this.buttonEqual = new System.Windows.Forms.Button();
            this.buttonClear = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBoxDisplay
            // 
            this.textBoxDisplay.Location = new System.Drawing.Point(92, 36);
            this.textBoxDisplay.Multiline = true;
            this.textBoxDisplay.Name = "textBoxDisplay";
            this.textBoxDisplay.Size = new System.Drawing.Size(306, 49);
            this.textBoxDisplay.TabIndex = 0;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(150, 93);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(59, 52);
            this.button1.TabIndex = 1;
            this.button1.Text = "1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Button_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(215, 91);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(59, 54);
            this.button2.TabIndex = 2;
            this.button2.Text = "2";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.Button_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(85, 151);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(59, 54);
            this.button3.TabIndex = 3;
            this.button3.Text = "3";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.Button_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(153, 151);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(56, 54);
            this.button4.TabIndex = 4;
            this.button4.Text = "4";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.Button_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(215, 150);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(53, 55);
            this.button5.TabIndex = 5;
            this.button5.Text = "5";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.Button_Click);
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(85, 224);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(59, 53);
            this.button6.TabIndex = 6;
            this.button6.Text = "6";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.Button_Click);
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(150, 226);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(54, 51);
            this.button7.TabIndex = 7;
            this.button7.Text = "7";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.Button_Click);
            // 
            // button8
            // 
            this.button8.Location = new System.Drawing.Point(215, 226);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(56, 51);
            this.button8.TabIndex = 8;
            this.button8.Text = "8";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.Button_Click);
            // 
            // button9
            // 
            this.button9.Location = new System.Drawing.Point(85, 283);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(59, 51);
            this.button9.TabIndex = 9;
            this.button9.Text = "9";
            this.button9.UseVisualStyleBackColor = true;
            this.button9.Click += new System.EventHandler(this.Button_Click);
            // 
            // button0
            // 
            this.button0.Location = new System.Drawing.Point(92, 91);
            this.button0.Name = "button0";
            this.button0.Size = new System.Drawing.Size(52, 54);
            this.button0.TabIndex = 10;
            this.button0.Text = "0";
            this.button0.UseVisualStyleBackColor = true;
            this.button0.Click += new System.EventHandler(this.Button_Click);
            // 
            // buttonAdd
            // 
            this.buttonAdd.Location = new System.Drawing.Point(284, 97);
            this.buttonAdd.Name = "buttonAdd";
            this.buttonAdd.Size = new System.Drawing.Size(65, 42);
            this.buttonAdd.TabIndex = 11;
            this.buttonAdd.Text = "+";
            this.buttonAdd.UseVisualStyleBackColor = true;
            this.buttonAdd.Click += new System.EventHandler(this.Operator_Click);
            // 
            // buttonSub
            // 
            this.buttonSub.Location = new System.Drawing.Point(280, 156);
            this.buttonSub.Name = "buttonSub";
            this.buttonSub.Size = new System.Drawing.Size(65, 49);
            this.buttonSub.TabIndex = 12;
            this.buttonSub.Text = "-";
            this.buttonSub.UseVisualStyleBackColor = true;
            this.buttonSub.Click += new System.EventHandler(this.Operator_Click);
            // 
            // buttonmul
            // 
            this.buttonmul.Location = new System.Drawing.Point(284, 226);
            this.buttonmul.Name = "buttonmul";
            this.buttonmul.Size = new System.Drawing.Size(56, 51);
            this.buttonmul.TabIndex = 13;
            this.buttonmul.Text = "*";
            this.buttonmul.UseVisualStyleBackColor = true;
            this.buttonmul.Click += new System.EventHandler(this.Operator_Click);
            // 
            // buttondiv
            // 
            this.buttondiv.Location = new System.Drawing.Point(286, 282);
            this.buttondiv.Name = "buttondiv";
            this.buttondiv.Size = new System.Drawing.Size(59, 52);
            this.buttondiv.TabIndex = 14;
            this.buttondiv.Text = "/";
            this.buttondiv.UseVisualStyleBackColor = true;
            this.buttondiv.Click += new System.EventHandler(this.Operator_Click);
            // 
            // buttonDot
            // 
            this.buttonDot.Location = new System.Drawing.Point(148, 282);
            this.buttonDot.Name = "buttonDot";
            this.buttonDot.Size = new System.Drawing.Size(56, 52);
            this.buttonDot.TabIndex = 15;
            this.buttonDot.Text = ".";
            this.buttonDot.UseVisualStyleBackColor = true;
            this.buttonDot.Click += new System.EventHandler(this.Button_Click);
            // 
            // buttonEqual
            // 
            this.buttonEqual.Location = new System.Drawing.Point(215, 280);
            this.buttonEqual.Name = "buttonEqual";
            this.buttonEqual.Size = new System.Drawing.Size(65, 54);
            this.buttonEqual.TabIndex = 16;
            this.buttonEqual.Text = "=";
            this.buttonEqual.UseVisualStyleBackColor = true;
            this.buttonEqual.Click += new System.EventHandler(this.Equal_Click);
            // 
            // buttonClear
            // 
            this.buttonClear.Location = new System.Drawing.Point(355, 94);
            this.buttonClear.Name = "buttonClear";
            this.buttonClear.Size = new System.Drawing.Size(43, 240);
            this.buttonClear.TabIndex = 17;
            this.buttonClear.Text = "C";
            this.buttonClear.UseVisualStyleBackColor = true;
            this.buttonClear.Click += new System.EventHandler(this.Clear_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonClear);
            this.Controls.Add(this.buttonEqual);
            this.Controls.Add(this.buttonDot);
            this.Controls.Add(this.buttondiv);
            this.Controls.Add(this.buttonmul);
            this.Controls.Add(this.buttonSub);
            this.Controls.Add(this.buttonAdd);
            this.Controls.Add(this.button0);
            this.Controls.Add(this.button9);
            this.Controls.Add(this.button8);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.textBoxDisplay);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBoxDisplay;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.Button button0;
        private System.Windows.Forms.Button buttonAdd;
        private System.Windows.Forms.Button buttonSub;
        private System.Windows.Forms.Button buttonmul;
        private System.Windows.Forms.Button buttondiv;
        private System.Windows.Forms.Button buttonDot;
        private System.Windows.Forms.Button buttonEqual;
        private System.Windows.Forms.Button buttonClear;
    }
}

