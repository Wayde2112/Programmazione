using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseProdotto
{
    class Prodotto
    {
        // Proprietà
        public int Codice { get; set; }
        public string Nome { get; set; }
        public string Descrizione { get; set; }
        public float Prezzo { get; set; }
        public int Giacenza{ get; set; }

        // Metodi
        public string DisponibiltaProdotto()
        {
            if (Giacenza == 0)
                return "Non Disponibile";
            else 
                return "Disponibile";
        }
        public override string ToString()
        {
            return "Codice: " + Codice
                + "\nNome: " + Nome
                + "\nDescrizione: " + Descrizione
                + "\nPrezzo: " + Prezzo
                + "\nGiacenza: " + Giacenza
                + "\nDisponibilita': " + DisponibiltaProdotto()
                ;
        }

    }
}
