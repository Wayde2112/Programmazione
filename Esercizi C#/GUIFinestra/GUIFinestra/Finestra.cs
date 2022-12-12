namespace GUIFinestra
{
    public partial class Finestra : Form
    {
        public Finestra()
        {
            InitializeComponent();
        }

        private void bpnInvia_Click(object sender, EventArgs e)
        {
            string testo = "Hai inserito la seguente frase: " + txtTesto.Text;

            MessageBox.Show(testo, "Messaggio", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Information);

            lblrisultato.Text = testo;
        }
    }
}