using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    class ProdottoSelezionato:Prodotto
    {
        public int Quantita { get; set; }
        public double SubTotale()
        {
            return Prezzo * Quantita;
        }
        public string StampaPerScontrino()
        {
            return $"{Codice} - {Denominazione} Prezzo: {Prezzo}, " +
                $"Quantità: {Quantita}, SubTotale: {SubTotale():#.##} euro";
        }
        public override string ToString()
        {
            return base.ToString() + $"Quantità: {Quantita}";
        }
    }
}
