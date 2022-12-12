using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Linq_ToObject
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("LinQ to Object");

            // Creare una lista di clienti
            var elenco = new List<Cliente>
            {
                new Cliente{ CodiceFiscale = "VRDFBA76A01L219J", Nome = "Fabio", Cognome = "Verdi"},
                new Cliente{ CodiceFiscale = "BNCMRA80A15L219M", Nome = "Mario", Cognome = "Bianchi"},
                new Cliente{ CodiceFiscale = "MNNLRA91G52L219G", Nome = "Laura", Cognome = "Manno"}
            };

            /*
                1) Stampare elenco codici fiscali
                2)
            */

        }
    }
}
