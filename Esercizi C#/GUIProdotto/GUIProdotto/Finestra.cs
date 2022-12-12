namespace GUIProdotto
{
    public partial class Finestra : Form
    {
        private Prodotto prodotto;
        public Finestra()
        {
            InitializeComponent();
            prodotto = new Prodotto();
        }
        void CancellaDati()
        {
            textBoxCodice.Text = "";
            textBoxNome.Text = string.Empty;
            textBoxDescrizione.Text = string.Empty;
            textBoxPrezzo.Text = string.Empty;
            textBoxGiacenza.Text = string.Empty;

            prodotto.Codice = -1; // Svuoto l'oggetto assegnango codice = -1
        }

        private void send_Click(object sender, EventArgs e)
        {
            try
            {
                int codice = Convert.ToInt32(textBoxCodice.Text);
                if (codice <= 0)
                    throw new Exception("Il codice del prodoto deve essere strettamente positivo");

                string nome = textBoxNome.Text;
                string descrizione = textBoxDescrizione.Text;
                double prezzo = Convert.ToDouble(textBoxPrezzo.Text);
                int giacenza = Convert.ToInt32(textBoxGiacenza.Text);

                // Inizializza il prodotto
                prodotto.Codice = codice;
                prodotto.Nome = nome;
                prodotto.Descrizione = descrizione;
                prodotto.Prezzo = prezzo;
                prodotto.Giacenza = giacenza;
                
                MessageBox.Show(prodotto.ToString(), "Messaggio");
                //CancellaDati();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Si è generato un errore: \n" + ex.Message, "Messaggio");

            }


        }

        private void cancel_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Sei sicuro di voler cancellare i dati inseriti?", "Messaggio", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
                CancellaDati();
        }

        private void check_Click(object sender, EventArgs e)
        {
            string testo;
            if (prodotto.Codice == 0)
                return;
            if (prodotto.Codice == null)
                return;

            // Verificare la giacenza del prodotto caricato
            testo = "Prodotto disponibile";
            if (prodotto.IsInScorta())
                testo = "Prodotto in scorta";
            else if (prodotto.IsEsaurito())
                testo = "Prodotto esaurito";

            MessageBox.Show(testo, "Messaggio", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}