using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class Libro
    {
        public string Isbn { get; set; }
        public string Titolo { get; set; }
        public Autore[] Autori { get; set; }
        public Editore Editore { get; set; }
        public double Prezzo { get; set; }
        public int Pagine { get; set; }
        public int AnnoPubblicazione { get; set; }

        public string StampaAutori()
        {
            string txt = "";
            foreach (Autore a in Autori)
            {
                txt += (txt.Length == 0 ? ", " : ", ") + a.Nominativo();
            }
            return txt;
        }

        public override string ToString()
        {
            return $"{{{nameof(Isbn)}={Isbn}, " +
                $"{nameof(Titolo)}={Titolo}, " +
                $"{nameof(Autore)}={Autori}, " +
                $"{nameof(Editore)}={Editore}, " +
                $"{nameof(Prezzo)}={Prezzo.ToString()}, " +
                $"{nameof(Pagine)}={Pagine.ToString()}, " +
                $"{nameof(AnnoPubblicazione)}={AnnoPubblicazione.ToString()}}}";
        }
        public string StampaDettaglio()
        {
            return $"{nameof(Isbn)}={Isbn}" +
                $"\n{nameof(Titolo)}={Titolo}" +
                $"\n{nameof(Autore)}={StampaAutori()}" +
                $"\n{nameof(Editore)}={Editore}" +
                $"\n{nameof(Prezzo)}={Prezzo.ToString()} euro" +
                $"\n{nameof(Pagine)}={Pagine.ToString()}" +
                $"\n{nameof(AnnoPubblicazione)}={AnnoPubblicazione.ToString()}";
        }
    }
}
