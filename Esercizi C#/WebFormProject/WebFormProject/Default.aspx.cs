using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebFormProject
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            lblTitolo.Text = "Titolo da codice";
        }

        protected void send_Click(object sender, EventArgs e)
        {
            string testo = "Hai inserito la frase: " + lbltesto.Text;
            lblRisultato.Text = testo;
        }
    }
}