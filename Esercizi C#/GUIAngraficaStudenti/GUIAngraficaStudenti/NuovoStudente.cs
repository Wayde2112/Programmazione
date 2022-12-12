using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GUIAngraficaStudenti
{
    public partial class NuovoStudente : Form
    {
        public NuovoStudente()
        {
            InitializeComponent();
        }

        private void btnSalva_Click(object sender, EventArgs e)
        {
            // Recupero i dati da interfaccia
            int matricola = Convert.ToInt32(txtMatricola.Text);
            string nome = txtNome.Text;
            string cognome = txtCognome.Text;
            string email = txtEmail.Text;
            string classe = txtClasse.Text;

            // Verifico che i dati siano coerenti

            // Salvo i dati sul DB
            var dal = new DAL();
            var s = new Studente()
            {
                Matricola = matricola,
                Nome = nome,
                Cognome = cognome,
                Email = email,
                Classe = classe
            };

            if (dal.Nuovo(s))
                MessageBox.Show("Operazione eseguita con successo");
            else
                MessageBox.Show("Operazione fallita");
        }

        private void btnCancella_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Elimare tutto?", "Messaggio", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes);
                PulisciForm();
        }
        private void PulisciForm()
        {
            txtMatricola.Text = string.Empty;
            txtNome.Text = string.Empty;
            txtCognome.Text = string.Empty;
            txtEmail.Text = string.Empty;
            txtClasse.Text = string.Empty;
        }
    }
}
