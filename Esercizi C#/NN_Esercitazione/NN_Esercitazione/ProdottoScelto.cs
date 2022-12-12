using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    class ProdottoScelto
    {
        public Prodotto Prodotto { get; set; }
        public int Quantita { get; set; }
        public double SubTotale()
        {
            return Prodotto.Prezzo * Quantita;
        }
        public string StampaPerScontrino()
        {
            return $"{Prodotto.Codice} - {Prodotto.Denominazione} Prezzo: {Prodotto.Prezzo}, " +
                $"Quantità: {Quantita}, SubTotale: {SubTotale():#.##} euro";
        }
        public override string ToString()
        {
            return Prodotto + $", Quantità: {Quantita}";
        }
    }
}
