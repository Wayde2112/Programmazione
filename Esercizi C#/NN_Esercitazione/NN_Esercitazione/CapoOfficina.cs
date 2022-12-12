using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    class CapoOfficina:Meccanico
    {
        public List<Ordine> Ordini { get; set; }
        public void AggiungiOrdine(Ordine ordine, int index)
        {
            Ordini.Insert(index, ordine);
        }
        public int NoOrdini()
        {
            return Ordini.Count;
        }
        public override double Tredicesima()
        {
            double t = 2 * Stipendio;

            foreach (var o in Ordini)
            {
                t += 5 * o.Totale() / 100;
            }

            return t;
        }
        public string StampaElencoOrdini()
        {
            return string.Join("\n", Ordini);
        }
        public override string ToString()
        {
            return base.ToString() + $"\n\nElenco Ordini\n" + StampaElencoOrdini();
        }
    }
}
