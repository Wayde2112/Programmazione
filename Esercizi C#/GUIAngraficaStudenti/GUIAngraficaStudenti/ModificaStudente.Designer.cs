namespace GUIAngraficaStudenti
{
    partial class ModificaStudente
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
            this.panel1 = new System.Windows.Forms.Panel();
            this.lblModificaStudente = new System.Windows.Forms.Label();
            this.lblCercaMatricola = new System.Windows.Forms.Label();
            this.txtCercaMatricola = new System.Windows.Forms.TextBox();
            this.btnCerca = new System.Windows.Forms.Button();
            this.btnCancella = new System.Windows.Forms.Button();
            this.btnSalva = new System.Windows.Forms.Button();
            this.lblClasse = new System.Windows.Forms.Label();
            this.txtClasse = new System.Windows.Forms.TextBox();
            this.lblCognome = new System.Windows.Forms.Label();
            this.txtCognome = new System.Windows.Forms.TextBox();
            this.lblEmail = new System.Windows.Forms.Label();
            this.txtEmail = new System.Windows.Forms.TextBox();
            this.lblNome = new System.Windows.Forms.Label();
            this.txtNome = new System.Windows.Forms.TextBox();
            this.lblMatricola = new System.Windows.Forms.Label();
            this.txtMatricola = new System.Windows.Forms.TextBox();
            this.panel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.btnCerca);
            this.panel1.Controls.Add(this.txtCercaMatricola);
            this.panel1.Controls.Add(this.lblCercaMatricola);
            this.panel1.Location = new System.Drawing.Point(64, 52);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(654, 105);
            this.panel1.TabIndex = 0;
            // 
            // lblModificaStudente
            // 
            this.lblModificaStudente.AutoSize = true;
            this.lblModificaStudente.Location = new System.Drawing.Point(353, 18);
            this.lblModificaStudente.Name = "lblModificaStudente";
            this.lblModificaStudente.Size = new System.Drawing.Size(104, 15);
            this.lblModificaStudente.TabIndex = 1;
            this.lblModificaStudente.Text = "Modifica Studente";
            // 
            // lblCercaMatricola
            // 
            this.lblCercaMatricola.AutoSize = true;
            this.lblCercaMatricola.Location = new System.Drawing.Point(40, 47);
            this.lblCercaMatricola.Name = "lblCercaMatricola";
            this.lblCercaMatricola.Size = new System.Drawing.Size(102, 15);
            this.lblCercaMatricola.TabIndex = 0;
            this.lblCercaMatricola.Text = "Inserisci Matricola";
            // 
            // txtCercaMatricola
            // 
            this.txtCercaMatricola.Location = new System.Drawing.Point(148, 43);
            this.txtCercaMatricola.Name = "txtCercaMatricola";
            this.txtCercaMatricola.Size = new System.Drawing.Size(100, 23);
            this.txtCercaMatricola.TabIndex = 1;
            // 
            // btnCerca
            // 
            this.btnCerca.Location = new System.Drawing.Point(289, 42);
            this.btnCerca.Name = "btnCerca";
            this.btnCerca.Size = new System.Drawing.Size(75, 23);
            this.btnCerca.TabIndex = 2;
            this.btnCerca.Text = "Cerca";
            this.btnCerca.UseVisualStyleBackColor = true;
            this.btnCerca.Click += new System.EventHandler(this.btnCerca_Click);
            // 
            // btnCancella
            // 
            this.btnCancella.Location = new System.Drawing.Point(258, 385);
            this.btnCancella.Name = "btnCancella";
            this.btnCancella.Size = new System.Drawing.Size(75, 23);
            this.btnCancella.TabIndex = 23;
            this.btnCancella.Text = "Cancella";
            this.btnCancella.UseVisualStyleBackColor = true;
            this.btnCancella.Click += new System.EventHandler(this.btnCancella_Click);
            // 
            // btnSalva
            // 
            this.btnSalva.Location = new System.Drawing.Point(129, 385);
            this.btnSalva.Name = "btnSalva";
            this.btnSalva.Size = new System.Drawing.Size(75, 23);
            this.btnSalva.TabIndex = 22;
            this.btnSalva.Text = "Salva";
            this.btnSalva.UseVisualStyleBackColor = true;
            this.btnSalva.Click += new System.EventHandler(this.btnSalva_Click);
            // 
            // lblClasse
            // 
            this.lblClasse.AutoSize = true;
            this.lblClasse.Location = new System.Drawing.Point(258, 309);
            this.lblClasse.Name = "lblClasse";
            this.lblClasse.Size = new System.Drawing.Size(40, 15);
            this.lblClasse.TabIndex = 21;
            this.lblClasse.Text = "Classe";
            // 
            // txtClasse
            // 
            this.txtClasse.Location = new System.Drawing.Point(258, 334);
            this.txtClasse.Name = "txtClasse";
            this.txtClasse.Size = new System.Drawing.Size(100, 23);
            this.txtClasse.TabIndex = 20;
            // 
            // lblCognome
            // 
            this.lblCognome.AutoSize = true;
            this.lblCognome.Location = new System.Drawing.Point(258, 243);
            this.lblCognome.Name = "lblCognome";
            this.lblCognome.Size = new System.Drawing.Size(60, 15);
            this.lblCognome.TabIndex = 19;
            this.lblCognome.Text = "Cognome";
            // 
            // txtCognome
            // 
            this.txtCognome.Location = new System.Drawing.Point(258, 268);
            this.txtCognome.Name = "txtCognome";
            this.txtCognome.Size = new System.Drawing.Size(100, 23);
            this.txtCognome.TabIndex = 18;
            // 
            // lblEmail
            // 
            this.lblEmail.AutoSize = true;
            this.lblEmail.Location = new System.Drawing.Point(104, 309);
            this.lblEmail.Name = "lblEmail";
            this.lblEmail.Size = new System.Drawing.Size(36, 15);
            this.lblEmail.TabIndex = 17;
            this.lblEmail.Text = "Email";
            // 
            // txtEmail
            // 
            this.txtEmail.Location = new System.Drawing.Point(104, 334);
            this.txtEmail.Name = "txtEmail";
            this.txtEmail.Size = new System.Drawing.Size(100, 23);
            this.txtEmail.TabIndex = 16;
            // 
            // lblNome
            // 
            this.lblNome.AutoSize = true;
            this.lblNome.Location = new System.Drawing.Point(104, 243);
            this.lblNome.Name = "lblNome";
            this.lblNome.Size = new System.Drawing.Size(40, 15);
            this.lblNome.TabIndex = 15;
            this.lblNome.Text = "Nome";
            // 
            // txtNome
            // 
            this.txtNome.Location = new System.Drawing.Point(104, 268);
            this.txtNome.Name = "txtNome";
            this.txtNome.Size = new System.Drawing.Size(100, 23);
            this.txtNome.TabIndex = 14;
            // 
            // lblMatricola
            // 
            this.lblMatricola.AutoSize = true;
            this.lblMatricola.Location = new System.Drawing.Point(104, 175);
            this.lblMatricola.Name = "lblMatricola";
            this.lblMatricola.Size = new System.Drawing.Size(57, 15);
            this.lblMatricola.TabIndex = 13;
            this.lblMatricola.Text = "Matricola";
            // 
            // txtMatricola
            // 
            this.txtMatricola.Location = new System.Drawing.Point(104, 200);
            this.txtMatricola.Name = "txtMatricola";
            this.txtMatricola.ReadOnly = true;
            this.txtMatricola.Size = new System.Drawing.Size(100, 23);
            this.txtMatricola.TabIndex = 12;
            // 
            // ModificaStudente
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnCancella);
            this.Controls.Add(this.btnSalva);
            this.Controls.Add(this.lblClasse);
            this.Controls.Add(this.txtClasse);
            this.Controls.Add(this.lblCognome);
            this.Controls.Add(this.txtCognome);
            this.Controls.Add(this.lblEmail);
            this.Controls.Add(this.txtEmail);
            this.Controls.Add(this.lblNome);
            this.Controls.Add(this.txtNome);
            this.Controls.Add(this.lblMatricola);
            this.Controls.Add(this.txtMatricola);
            this.Controls.Add(this.lblModificaStudente);
            this.Controls.Add(this.panel1);
            this.Name = "ModificaStudente";
            this.Text = "Modifica Studente";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button btnCerca;
        private System.Windows.Forms.TextBox txtCercaMatricola;
        private System.Windows.Forms.Label lblCercaMatricola;
        private System.Windows.Forms.Label lblModificaStudente;
        private System.Windows.Forms.Button btnCancella;
        private System.Windows.Forms.Button btnSalva;
        private System.Windows.Forms.Label lblClasse;
        private System.Windows.Forms.TextBox txtClasse;
        private System.Windows.Forms.Label lblCognome;
        private System.Windows.Forms.TextBox txtCognome;
        private System.Windows.Forms.Label lblEmail;
        private System.Windows.Forms.TextBox txtEmail;
        private System.Windows.Forms.Label lblNome;
        private System.Windows.Forms.TextBox txtNome;
        private System.Windows.Forms.Label lblMatricola;
        private System.Windows.Forms.TextBox txtMatricola;
    }
}