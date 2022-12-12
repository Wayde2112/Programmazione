using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassePersona
{
    class Data
    {
        // Proprietà
        public int Giorno { get; set; }
        public int Mese { get; set; }
        public int Anno { get; set; }

        // Metodi
        public string FormatLineare()
        {
            string msg = Giorno + "/" + Mese + "/" + Anno;
            return msg;
        }
        public string FormatLetterale()
        {
            string[] mesi = { "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre" };

            return Giorno + "/" + mesi[Mese - 1] + "/" + Anno;
        }

        public override string ToString()
        {
            return "Giorno: " + Giorno
                + "Mese: " + Mese
                + "Anno: " + Anno;
        }
    }
}
