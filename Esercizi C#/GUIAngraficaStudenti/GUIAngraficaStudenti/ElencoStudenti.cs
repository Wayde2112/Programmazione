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
    public partial class ElencoStudenti : Form
    {
        public ElencoStudenti()
        {
            InitializeComponent();

            var dal = new DAL();
            txtElenco.Text = string.Join("\n", dal.Elenco());
            l_ElementiTrovati.Text = "Elementi trovati: " + dal.Elenco().Count;
        }

    }
}
