namespace GUIProdotto
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
            this.lblTitolo = new System.Windows.Forms.Label();
            this.textBoxCodice = new System.Windows.Forms.TextBox();
            this.textBoxNome = new System.Windows.Forms.TextBox();
            this.textBoxDescrizione = new System.Windows.Forms.TextBox();
            this.textBoxPrezzo = new System.Windows.Forms.TextBox();
            this.textBoxGiacenza = new System.Windows.Forms.TextBox();
            this.codice = new System.Windows.Forms.Label();
            this.nome = new System.Windows.Forms.Label();
            this.descrizione = new System.Windows.Forms.Label();
            this.Prezzo = new System.Windows.Forms.Label();
            this.Giacenza = new System.Windows.Forms.Label();
            this.cancel = new System.Windows.Forms.Button();
            this.send = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.check = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lblTitolo
            // 
            this.lblTitolo.AutoSize = true;
            this.lblTitolo.Location = new System.Drawing.Point(247, 24);
            this.lblTitolo.Name = "lblTitolo";
            this.lblTitolo.Size = new System.Drawing.Size(54, 15);
            this.lblTitolo.TabIndex = 0;
            this.lblTitolo.Text = "Prodotto";
            // 
            // textBoxCodice
            // 
            this.textBoxCodice.Location = new System.Drawing.Point(177, 70);
            this.textBoxCodice.Name = "textBoxCodice";
            this.textBoxCodice.Size = new System.Drawing.Size(100, 23);
            this.textBoxCodice.TabIndex = 1;
            // 
            // textBoxNome
            // 
            this.textBoxNome.Location = new System.Drawing.Point(177, 114);
            this.textBoxNome.Name = "textBoxNome";
            this.textBoxNome.Size = new System.Drawing.Size(246, 23);
            this.textBoxNome.TabIndex = 2;
            // 
            // textBoxDescrizione
            // 
            this.textBoxDescrizione.Location = new System.Drawing.Point(177, 159);
            this.textBoxDescrizione.Multiline = true;
            this.textBoxDescrizione.Name = "textBoxDescrizione";
            this.textBoxDescrizione.Size = new System.Drawing.Size(246, 50);
            this.textBoxDescrizione.TabIndex = 3;
            // 
            // textBoxPrezzo
            // 
            this.textBoxPrezzo.Location = new System.Drawing.Point(177, 229);
            this.textBoxPrezzo.Name = "textBoxPrezzo";
            this.textBoxPrezzo.Size = new System.Drawing.Size(246, 23);
            this.textBoxPrezzo.TabIndex = 4;
            // 
            // textBoxGiacenza
            // 
            this.textBoxGiacenza.Location = new System.Drawing.Point(177, 269);
            this.textBoxGiacenza.Name = "textBoxGiacenza";
            this.textBoxGiacenza.Size = new System.Drawing.Size(246, 23);
            this.textBoxGiacenza.TabIndex = 5;
            // 
            // codice
            // 
            this.codice.AutoSize = true;
            this.codice.Location = new System.Drawing.Point(83, 73);
            this.codice.Name = "codice";
            this.codice.Size = new System.Drawing.Size(44, 15);
            this.codice.TabIndex = 6;
            this.codice.Text = "Codice";
            // 
            // nome
            // 
            this.nome.AutoSize = true;
            this.nome.Location = new System.Drawing.Point(83, 117);
            this.nome.Name = "nome";
            this.nome.Size = new System.Drawing.Size(40, 15);
            this.nome.TabIndex = 7;
            this.nome.Text = "Nome";
            // 
            // descrizione
            // 
            this.descrizione.AutoSize = true;
            this.descrizione.Location = new System.Drawing.Point(83, 162);
            this.descrizione.Name = "descrizione";
            this.descrizione.Size = new System.Drawing.Size(67, 15);
            this.descrizione.TabIndex = 8;
            this.descrizione.Text = "Descrizione";
            // 
            // Prezzo
            // 
            this.Prezzo.AutoSize = true;
            this.Prezzo.Location = new System.Drawing.Point(83, 232);
            this.Prezzo.Name = "Prezzo";
            this.Prezzo.Size = new System.Drawing.Size(41, 15);
            this.Prezzo.TabIndex = 9;
            this.Prezzo.Text = "Prezzo";
            // 
            // Giacenza
            // 
            this.Giacenza.AutoSize = true;
            this.Giacenza.Location = new System.Drawing.Point(83, 272);
            this.Giacenza.Name = "Giacenza";
            this.Giacenza.Size = new System.Drawing.Size(54, 15);
            this.Giacenza.TabIndex = 10;
            this.Giacenza.Text = "Giacenza";
            // 
            // cancel
            // 
            this.cancel.Location = new System.Drawing.Point(187, 340);
            this.cancel.Name = "cancel";
            this.cancel.Size = new System.Drawing.Size(75, 23);
            this.cancel.TabIndex = 11;
            this.cancel.Text = "Annulla";
            this.cancel.UseVisualStyleBackColor = true;
            this.cancel.Click += new System.EventHandler(this.cancel_Click);
            // 
            // send
            // 
            this.send.Location = new System.Drawing.Point(307, 340);
            this.send.Name = "send";
            this.send.Size = new System.Drawing.Size(75, 23);
            this.send.TabIndex = 12;
            this.send.Text = "Invia";
            this.send.UseVisualStyleBackColor = true;
            this.send.Click += new System.EventHandler(this.send_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(224, 421);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(0, 15);
            this.label1.TabIndex = 13;
            // 
            // check
            // 
            this.check.Location = new System.Drawing.Point(424, 340);
            this.check.Name = "check";
            this.check.Size = new System.Drawing.Size(75, 23);
            this.check.TabIndex = 14;
            this.check.Text = "Verifica";
            this.check.UseVisualStyleBackColor = true;
            this.check.Click += new System.EventHandler(this.check_Click);
            // 
            // Finestra
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(589, 629);
            this.Controls.Add(this.check);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.send);
            this.Controls.Add(this.cancel);
            this.Controls.Add(this.Giacenza);
            this.Controls.Add(this.Prezzo);
            this.Controls.Add(this.descrizione);
            this.Controls.Add(this.nome);
            this.Controls.Add(this.codice);
            this.Controls.Add(this.textBoxGiacenza);
            this.Controls.Add(this.textBoxPrezzo);
            this.Controls.Add(this.textBoxDescrizione);
            this.Controls.Add(this.textBoxNome);
            this.Controls.Add(this.textBoxCodice);
            this.Controls.Add(this.lblTitolo);
            this.Name = "Finestra";
            this.Text = "Gestione Prodotto";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Label lblTitolo;
        private TextBox textBoxCodice;
        private TextBox textBoxNome;
        private TextBox textBoxDescrizione;
        private TextBox textBoxPrezzo;
        private TextBox textBoxGiacenza;
        private Label codice;
        private Label nome;
        private Label descrizione;
        private Label Prezzo;
        private Label Giacenza;
        private Button cancel;
        private Button send;
        private Label label1;
        private Button check;
    }
}