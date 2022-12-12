using System;
using System.Collections.Generic;

namespace NN_Esercitazione
{
    class Ordine
    {
        public int IdOrdine { get; set; }
        public DateTime Data { get; set; }
        public List<ProdottoScelto> ElencoProdotti { get; set; }
        public Venditore Venditore { get; set; }

        public Ordine()
        {
            Data = DateTime.Now;
        }

        public int NoProdotti()
        {
            return ElencoProdotti.Count;
        }
        public double Totale()
        {
            double t = 0;

            foreach (var p in ElencoProdotti)
            {
                t += p.SubTotale();
            }
            return t;
        }
        public string StampaElencoProdotti()
        {
            string msg = "";
            foreach (var ps in ElencoProdotti)
            {
                msg += "\n" + ps.StampaPerScontrino();
            }
            return msg;
        }
        public string Scontrino()
        {
            return $"Id Ordine:  {IdOrdine} " +
                $"Data: {Data}" +
                $"\nVenditore: {Venditore.Nominativo()}" +
                $"\n\n" +
                $"Elenco Prodotti\n{StampaElencoProdotti()}" +
                $"\n\nTotale: {Totale()} euro";
        }

        public override string ToString()
        {
            return $"{{{nameof(IdOrdine)}={IdOrdine.ToString()}, {nameof(Data)}={Data.ToString()}, {nameof(ElencoProdotti)}={ElencoProdotti}, {nameof(Venditore)}={Venditore}}}";
        }
    }
}