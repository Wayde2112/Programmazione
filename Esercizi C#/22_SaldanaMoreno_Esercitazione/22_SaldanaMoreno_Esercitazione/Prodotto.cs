using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    6) Prodotto che contiene come
    proprietà: Codice, Prodotto, Descrizione, Prezzo
    metodi: ToString
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class Prodotto
    {
        public int Codice { get; set; }
        public string NomeProdotto { get; set; }
        public string Descrizione { get; set; }
        public double Prezzo { get; set; }
        
        public Prodotto(int codice, string nomeProdotto, string descrizione, double prezzo)
        {
            Codice = codice;
            NomeProdotto = nomeProdotto;
            Descrizione = descrizione;
            Prezzo = prezzo;
        }
        

        public override string ToString()
        {
            return $"{{{nameof(Codice)}={Codice.ToString()}," +
                $" {nameof(NomeProdotto)}={NomeProdotto}, " +
                $"{nameof(Descrizione)}={Descrizione}, " +
                $"{nameof(Prezzo)}={Prezzo.ToString()}}}";
        }
    }
}
