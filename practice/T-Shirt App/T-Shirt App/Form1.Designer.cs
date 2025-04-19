namespace T_Shirt_App
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
            this.textBoxQuantity = new System.Windows.Forms.TextBox();
            this.labelQuantity = new System.Windows.Forms.Label();
            this.radioButtonSmall = new System.Windows.Forms.RadioButton();
            this.radioButtonMedium = new System.Windows.Forms.RadioButton();
            this.radioButtonLarge = new System.Windows.Forms.RadioButton();
            this.labelSize = new System.Windows.Forms.Label();
            this.labelPromo = new System.Windows.Forms.Label();
            this.textBoxPromoCode = new System.Windows.Forms.TextBox();
            this.labelFinalPrice = new System.Windows.Forms.Label();
            this.buttonCalculate = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBoxQuantity
            // 
            this.textBoxQuantity.Location = new System.Drawing.Point(214, 44);
            this.textBoxQuantity.Name = "textBoxQuantity";
            this.textBoxQuantity.Size = new System.Drawing.Size(100, 26);
            this.textBoxQuantity.TabIndex = 0;
            // 
            // labelQuantity
            // 
            this.labelQuantity.AutoSize = true;
            this.labelQuantity.Location = new System.Drawing.Point(98, 47);
            this.labelQuantity.Name = "labelQuantity";
            this.labelQuantity.Size = new System.Drawing.Size(68, 20);
            this.labelQuantity.TabIndex = 1;
            this.labelQuantity.Text = "Quantity";
            // 
            // radioButtonSmall
            // 
            this.radioButtonSmall.AutoSize = true;
            this.radioButtonSmall.Location = new System.Drawing.Point(231, 91);
            this.radioButtonSmall.Name = "radioButtonSmall";
            this.radioButtonSmall.Size = new System.Drawing.Size(128, 24);
            this.radioButtonSmall.TabIndex = 2;
            this.radioButtonSmall.TabStop = true;
            this.radioButtonSmall.Text = "Small 125 Rs";
            this.radioButtonSmall.UseVisualStyleBackColor = true;
            // 
            // radioButtonMedium
            // 
            this.radioButtonMedium.AutoSize = true;
            this.radioButtonMedium.Location = new System.Drawing.Point(231, 121);
            this.radioButtonMedium.Name = "radioButtonMedium";
            this.radioButtonMedium.Size = new System.Drawing.Size(145, 24);
            this.radioButtonMedium.TabIndex = 3;
            this.radioButtonMedium.TabStop = true;
            this.radioButtonMedium.Text = "Medium 175 Rs";
            this.radioButtonMedium.UseVisualStyleBackColor = true;
            // 
            // radioButtonLarge
            // 
            this.radioButtonLarge.AutoSize = true;
            this.radioButtonLarge.Location = new System.Drawing.Point(231, 163);
            this.radioButtonLarge.Name = "radioButtonLarge";
            this.radioButtonLarge.Size = new System.Drawing.Size(130, 24);
            this.radioButtonLarge.TabIndex = 4;
            this.radioButtonLarge.TabStop = true;
            this.radioButtonLarge.Text = "Large 250 Rs";
            this.radioButtonLarge.UseVisualStyleBackColor = true;
            // 
            // labelSize
            // 
            this.labelSize.AutoSize = true;
            this.labelSize.Location = new System.Drawing.Point(98, 95);
            this.labelSize.Name = "labelSize";
            this.labelSize.Size = new System.Drawing.Size(89, 20);
            this.labelSize.TabIndex = 5;
            this.labelSize.Text = "Select Size";
            // 
            // labelPromo
            // 
            this.labelPromo.AutoSize = true;
            this.labelPromo.Location = new System.Drawing.Point(85, 199);
            this.labelPromo.Name = "labelPromo";
            this.labelPromo.Size = new System.Drawing.Size(132, 20);
            this.labelPromo.TabIndex = 6;
            this.labelPromo.Text = "Enter promocode";
            // 
            // textBoxPromoCode
            // 
            this.textBoxPromoCode.Location = new System.Drawing.Point(231, 199);
            this.textBoxPromoCode.Name = "textBoxPromoCode";
            this.textBoxPromoCode.Size = new System.Drawing.Size(100, 26);
            this.textBoxPromoCode.TabIndex = 7;
            // 
            // labelFinalPrice
            // 
            this.labelFinalPrice.AutoSize = true;
            this.labelFinalPrice.Location = new System.Drawing.Point(359, 284);
            this.labelFinalPrice.Name = "labelFinalPrice";
            this.labelFinalPrice.Size = new System.Drawing.Size(82, 20);
            this.labelFinalPrice.TabIndex = 8;
            this.labelFinalPrice.Text = "Final Price";
            // 
            // buttonCalculate
            // 
            this.buttonCalculate.Location = new System.Drawing.Point(195, 281);
            this.buttonCalculate.Name = "buttonCalculate";
            this.buttonCalculate.Size = new System.Drawing.Size(99, 56);
            this.buttonCalculate.TabIndex = 9;
            this.buttonCalculate.Text = "Calculate";
            this.buttonCalculate.UseVisualStyleBackColor = true;
            this.buttonCalculate.Click += new System.EventHandler(this.buttonCalculate_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.buttonCalculate);
            this.Controls.Add(this.labelFinalPrice);
            this.Controls.Add(this.textBoxPromoCode);
            this.Controls.Add(this.labelPromo);
            this.Controls.Add(this.labelSize);
            this.Controls.Add(this.radioButtonLarge);
            this.Controls.Add(this.radioButtonMedium);
            this.Controls.Add(this.radioButtonSmall);
            this.Controls.Add(this.labelQuantity);
            this.Controls.Add(this.textBoxQuantity);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBoxQuantity;
        private System.Windows.Forms.Label labelQuantity;
        private System.Windows.Forms.RadioButton radioButtonSmall;
        private System.Windows.Forms.RadioButton radioButtonMedium;
        private System.Windows.Forms.RadioButton radioButtonLarge;
        private System.Windows.Forms.Label labelSize;
        private System.Windows.Forms.Label labelPromo;
        private System.Windows.Forms.TextBox textBoxPromoCode;
        private System.Windows.Forms.Label labelFinalPrice;
        private System.Windows.Forms.Button buttonCalculate;
    }
}

