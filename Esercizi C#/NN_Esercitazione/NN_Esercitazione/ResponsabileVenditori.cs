using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    class ResponsabileVenditori:Venditore
    {
        public List<Venditore> Venditori { get; set; }
        public void AggiungiVenditore(Venditore venditore)
        {
            Venditori.Add(venditore);
        }
        public Venditore RestituisciVenditore(int index)
        {
            return Venditori[index];
        }
        public void CancellaVenditore(int index)
        {
            Venditori.RemoveAt(index);
        }

        public override double Tredicesima()
        {
            double t = 2 * Stipendio;
            int giorni = 24;

            foreach (var v in Venditori)
            {
                t += 15 * (v.Stipendio / giorni) / 100;
            }
            return t;
        }
        public string StampaElencoVenditori()
        {
            return string.Join("\n", Venditori);
        }
        public override string ToString()
        {
            return base.ToString() + $"\n\nElenco Venditori\n" + StampaElencoVenditori();
        }
    }
}
