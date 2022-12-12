using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    7) Ordine (classe che impedisce l’ereditarietà) che contiene come
    proprietà: IdOrdine, la Data, ElencoProdotti: lista di Prodotto, Venditore di tipo Venditore
    metodi: NoProdotti che restituisce la quantità totale di prodotti ordinati, 
    Totale il costo complessivo, 
    ToString per stampare un risultato globale dell’ordine, 
    Scontrino è un metodo per stampare l’elenco dettagliato dell’ordine dove per ogni riga è presente 
    il codice prodotto, nome del prodotto, quantità ordinata, prezzo unitario, subtotale
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    sealed class Ordine
    {

        public int IdOrdine { get; set; }
        public DateTime Data { get; set; }
        public List<QuantitaProdotto> ElencoProdotti { get; set; }
        public Venditore Venditore { get; set; }

        public Ordine(int idOrdine, DateTime data, Venditore venditore)
        {
            IdOrdine = idOrdine;
            Data = data;
            ElencoProdotti = new List<QuantitaProdotto>();
            Venditore = venditore;
        }

        public Ordine(int idOrdine, DateTime data, List<QuantitaProdotto> elencoProdotti, Venditore venditore)
        {
            IdOrdine = idOrdine;
            Data = data;
            ElencoProdotti = elencoProdotti;
            Venditore = venditore;
        }

        public int NoProdotti()
        {
            int nProdotti = 0;
            ElencoProdotti.ForEach(p => nProdotti += p.Quantita);
            return 0;
        }
        public double Totale()
        {
            double totale = 0;
            ElencoProdotti.ForEach(p => totale += p.Prezzo());
            return totale;
        }

        public string Scontrino()
        {
            string scontrino = "";
            ElencoProdotti.ForEach(p =>
            {
                if (!ElencoProdotti.ElementAt(0).Equals(p))
                    scontrino += "\n";
                scontrino += p.StampaProdotto();
            });
            return scontrino;
        }

        public override string ToString()
        {
            string pString = "";
            ElencoProdotti.ForEach(prodotto =>
            {
                if (!ElencoProdotti.ElementAt(0).Equals(prodotto))
                    pString += "\n";
                pString += prodotto.StampaProdotto();
            });

            return $"{{\nCodice = {IdOrdine}}}" +
                $"\nData = {Data}" +
                $"\nProdotti = {pString}" +
                $"\nTotale = {Totale()}" +
                $"\nVenditore = {Venditore}}}";
        }
    }
}
