namespace GUIFinestra
{
    partial class Finestra
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtInserimento = new System.Windows.Forms.Label();
            this.txtTesto = new System.Windows.Forms.TextBox();
            this.bpnInvia = new System.Windows.Forms.Button();
            this.titolo = new System.Windows.Forms.Label();
            this.lblrisultato = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtInserimento
            // 
            this.txtInserimento.AutoSize = true;
            this.txtInserimento.Location = new System.Drawing.Point(140, 130);
            this.txtInserimento.Name = "txtInserimento";
            this.txtInserimento.Size = new System.Drawing.Size(100, 15);
            this.txtInserimento.TabIndex = 0;
            this.txtInserimento.Text = "Inserisci una frase";
            this.txtInserimento.Click += new System.EventHandler(this.bpnInvia_Click);
            // 
            // txtTesto
            // 
            this.txtTesto.Location = new System.Drawing.Point(255, 127);
            this.txtTesto.Name = "txtTesto";
            this.txtTesto.Size = new System.Drawing.Size(206, 23);
            this.txtTesto.TabIndex = 1;
            // 
            // bpnInvia
            // 
            this.bpnInvia.Location = new System.Drawing.Point(488, 127);
            this.bpnInvia.Name = "bpnInvia";
            this.bpnInvia.Size = new System.Drawing.Size(75, 23);
            this.bpnInvia.TabIndex = 2;
            this.bpnInvia.Text = "Invia";
            this.bpnInvia.UseVisualStyleBackColor = true;
            this.bpnInvia.Click += new System.EventHandler(this.bpnInvia_Click);
            // 
            // titolo
            // 
            this.titolo.AutoSize = true;
            this.titolo.Font = new System.Drawing.Font("Monaco", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.titolo.Location = new System.Drawing.Point(315, 61);
            this.titolo.Name = "titolo";
            this.titolo.Size = new System.Drawing.Size(96, 26);
            this.titolo.TabIndex = 3;
            this.titolo.Text = "Titolo";
            // 
            // lblrisultato
            // 
            this.lblrisultato.AutoSize = true;
            this.lblrisultato.Location = new System.Drawing.Point(344, 234);
            this.lblrisultato.Name = "lblrisultato";
            this.lblrisultato.Size = new System.Drawing.Size(0, 15);
            this.lblrisultato.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblrisultato);
            this.Controls.Add(this.titolo);
            this.Controls.Add(this.bpnInvia);
            this.Controls.Add(this.txtTesto);
            this.Controls.Add(this.txtInserimento);
            this.Name = "Form1";
            this.Text = "La mia finestra";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Label txtInserimento;
        private TextBox txtTesto;
        private Button bpnInvia;
        private Label titolo;
        private Label lblrisultato;
    }
}