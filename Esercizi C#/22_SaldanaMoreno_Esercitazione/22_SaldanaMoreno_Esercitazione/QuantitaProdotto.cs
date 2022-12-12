using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _22_SaldanaMoreno_Esercitazione
{
    class QuantitaProdotto 
    {
        public Prodotto Prodotto { get; set; }
        public int Quantita { get; set; }

        public QuantitaProdotto(Prodotto prodotto, int quantita)
        {
            Prodotto = prodotto;
            Quantita = quantita;
        }
        public double Prezzo()
        {
            return Prodotto.Prezzo * Quantita;
        }
        public string StampaProdotto()
        {
            return $"Codice = {Prodotto.Codice}" +
                $"Nome = {Prodotto.NomeProdotto}" +
                $"Quantità = {Quantita}" +
                $"Prezzo Unitario = {Prodotto.Prezzo}" +
                $"Prezzo Totale = {Prezzo()}";
        }
    }
}
