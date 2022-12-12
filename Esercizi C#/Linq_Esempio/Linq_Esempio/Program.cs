using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Linq_Esempio
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Esempio di LinQ");

            string[] nomi = {
                                "Pietro", "Mario", "Giulia", "Francesca", "Laura",
                                "Piero", "Antonio", "Vito", "antonella", "Giada",
                                "Rossella", "Simone", "Saverio", "Rosa", "Michela",
                                "Andrea", "Mattia", "Ilaria", "Alex", "Vanessa"
            };

            Console.WriteLine("Elenco completo");
            var query = from tutti in nomi select tutti;
            Console.WriteLine(string.Join(", ", query));

            Console.WriteLine("\nElenco nomi inizianti per A");
            var query2 = from iniziaA in nomi
                             //where iniziaA.StartsWith("A")
                         where iniziaA.Substring(0,1).ToUpper().Equals("A")
                         select iniziaA;
            Console.WriteLine(string.Join(", ", query2));

            Console.WriteLine("\nElenco dei nomi ordinato crescentemente");
            var query3 = from ordinaAsc in nomi 
                         orderby ordinaAsc 
                         select ordinaAsc;
            Console.WriteLine(string.Join(", ", query3));

            Console.WriteLine("\nElenco nomi con lunghezza 7 (ordine decrescente)");
            var query4 = from lunghezza7 in nomi
                         where lunghezza7.Length == 7
                         orderby lunghezza7 descending
                         select lunghezza7;
            Console.WriteLine(string.Join(", ", query4));

            /*
                Esercizio: Costruire un aray di numeri interi
                    1) Visualizzare il max
                    2) Visualizzare il min
                    3) Quanti sono i numeri
                    4) Somma dei numeri
                    5) Somma dei numeri positivi
                    6) Stampare i numeri dispari
                    7) Stampre i numeri multipli di 3
            */
            var numeri = new[] { 12, -1, 34, 27, 56, 98, 11, 9, 45, 34, 76, 89 };

            // Stampa di tutti i numeri
            Console.WriteLine("Elenco di numeri interi: \n" + string.Join(", ", numeri));

            Console.WriteLine("\nFunzioni lambda");

            // 1) Visualizzare il max
            Console.WriteLine("Max: " + numeri.Max());

            // 2) Visualizzare il min
            Console.WriteLine("Max: " + numeri.Min());

            // 3) Quanti sono i numeri
            Console.WriteLine("Numero di elementi presenti: "+numeri.Count());

            // 4) Somma dei numeri
            Console.WriteLine("Somma dei numeri: " + numeri.Sum());

            // 5) Somma dei numeri positivi
            var query5 = from nPositivi in numeri
                         where nPositivi > 0
                         select nPositivi;
            Console.WriteLine("Somma dei numeri positivi: " + query5.Sum());

            // 6) Stampare i numeri dispari
            var query6 = from nDispari in numeri
                         where nDispari % 2 == 1
                         select nDispari;
            Console.WriteLine("Stampare i numeri dispari: " +string.Join(", ", query6));

            // 7) Stampare i numeri dispari
            var query7 = from nDispari in numeri
                         where nDispari % 3 == 0
                         select nDispari;
            Console.WriteLine("Stampre i numeri multipli di 3: " + query7.Count());

            Console.ReadLine();
        }
    }
}
