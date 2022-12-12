using System;
using System.Collections.Generic;
using System.Text;

namespace GUIProdotto
{
    class Prodotto
    {
        public int Codice { get; set; }
        public string Nome { get; set; }
        public string Descrizione { get; set; }
        public double Prezzo { get; set; }
        public int Giacenza { get; set; }

        public bool IsInScorta() {
            return Giacenza >= 1 && Giacenza <= 9;
        }

        public bool IsEsaurito()
        {
            return Giacenza == 0;
        }

        public override string ToString() => $"Codice: {Codice}" +
            $", Nome: {Nome}" +
            $", Descrizione: {Descrizione}" +
            $", Prezzo: {Prezzo}" +
            $", Giacenza: {Giacenza}"
            ;


    }
}
