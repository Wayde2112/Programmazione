namespace GUIAngraficaStudenti
{
    partial class ElencoStudenti
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
            this.l_ElencoStudenti = new System.Windows.Forms.Label();
            this.txtElenco = new System.Windows.Forms.TextBox();
            this.l_ElementiTrovati = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // l_ElencoStudenti
            // 
            this.l_ElencoStudenti.AutoSize = true;
            this.l_ElencoStudenti.Location = new System.Drawing.Point(342, 42);
            this.l_ElencoStudenti.Name = "l_ElencoStudenti";
            this.l_ElencoStudenti.Size = new System.Drawing.Size(89, 15);
            this.l_ElencoStudenti.TabIndex = 0;
            this.l_ElencoStudenti.Text = "Elenco Studenti";
            // 
            // txtElenco
            // 
            this.txtElenco.Location = new System.Drawing.Point(110, 97);
            this.txtElenco.Multiline = true;
            this.txtElenco.Name = "txtElenco";
            this.txtElenco.Size = new System.Drawing.Size(554, 277);
            this.txtElenco.TabIndex = 1;
            // 
            // l_ElementiTrovati
            // 
            this.l_ElementiTrovati.AutoSize = true;
            this.l_ElementiTrovati.Location = new System.Drawing.Point(111, 68);
            this.l_ElementiTrovati.Name = "l_ElementiTrovati";
            this.l_ElementiTrovati.Size = new System.Drawing.Size(97, 15);
            this.l_ElementiTrovati.TabIndex = 2;
            this.l_ElementiTrovati.Text = "Elementi Trovati: ";
            // 
            // ElencoStudenti
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.l_ElementiTrovati);
            this.Controls.Add(this.txtElenco);
            this.Controls.Add(this.l_ElencoStudenti);
            this.Name = "ElencoStudenti";
            this.Text = "Elenco Studenti";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label l_ElencoStudenti;
        private System.Windows.Forms.TextBox txtElenco;
        private System.Windows.Forms.Label l_ElementiTrovati;
    }
}
