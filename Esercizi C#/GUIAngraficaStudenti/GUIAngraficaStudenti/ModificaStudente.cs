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
    public partial class ModificaStudente : Form
    {
        private DAL dal;
        private Studente studente;
        public ModificaStudente()
        {
            InitializeComponent();
            dal = new DAL();
        }

        private void btnCerca_Click(object sender, EventArgs e)
        {
            // Accesso al DB

            // Recuperare lo studente per matricola
            int matricola = Convert.ToInt32(txtCercaMatricola.Text);
            studente = dal.Dettaglio(matricola);

            // Riempire il form
            if (studente is null)
                MessageBox.Show("Dati non trovati");
            else
            {
                txtMatricola.Text = studente.Matricola.ToString();
                txtNome.Text = studente.Nome;
                txtCognome.Text = studente.Cognome;
                txtEmail.Text = studente.Email;
                txtClasse.Text = studente.Classe;
            }


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

            if (dal.Modifica(s))
            {
                MessageBox.Show("Operazione eseguita con successo");
                PulisciForm();
            }
            
            else
                MessageBox.Show("Operazione fallita");
        }
        private void PulisciForm()
        {
            txtMatricola.Text = string.Empty;
            studente = null;
            txtNome.Text = string.Empty;
            txtCognome.Text = string.Empty;
            txtEmail.Text = string.Empty;
            txtClasse.Text = string.Empty;
        }

        private void btnCancella_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Elimare tutto?", "Messaggio", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes) ;
                PulisciForm();
        }
    }
}
