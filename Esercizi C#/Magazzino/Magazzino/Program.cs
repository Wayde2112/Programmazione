using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magazzino
{
    class Program
    {
        static void Main(string[] args)
        {
            string path = @"C:\Users\ICTS21-23.096\Desktop\Programmazione\Esercizi C#\Magazzino\Magazzino\files\prodotti.txt";
            //string path = "files/prodotti.txt";

            var lista = MyLibrary.LeggiFileTesto(path);

            var p1 = new Prodotto();

            int scelta = -1;

            do
            {
                switch (Menu())
                {
                    case 1:
                    {
                            Console.WriteLine("Prodotto con prezzo maggiore");
                            foreach (var p in lista)
                                p.PrezzoMaggiore();

                            break;
                    }
                    case 2:
                    {
                            Console.WriteLine("Prodotto desiderato");
                            break;
                    }
                    case 3:
                    {
                            Console.WriteLine("Stabilire quanto è il valore del magazzino (valore = prezzo * quantità)");

                            break;
                    }
                    case 4:
                    {
                            Console.WriteLine("Elenco prodotti in scorta");
                            p1.ProdottoInScorta(lista);
                            break;
                    }
                    case 5:
                    {
                            Console.WriteLine("Elenco prodotti esauriti");
                            p1.ProdottoEsaurito(lista);
                            break;
                    }
                    case 0:
                    {
                            scelta = 0;
                            break;
                    }
                }

            } while (scelta != 0);

            /*
            Console.WriteLine("Elenco prodotti");
            foreach (var p in lista)
                Console.WriteLine(p);
            */
            
            
            

            Console.ReadKey();
        }

        static int Menu()
        {
            int scelta = -1;

            Console.WriteLine("\t\tMenu");
            Console.WriteLine("1) Visualizzare il prodotto con il prezzo maggiore");
            Console.WriteLine("2) Cercare il prodotto  di cui si conosce il codice");
            Console.WriteLine("3) Stabilire quanto è il valore del magazzino (valore = prezzo * quantità)");
            Console.WriteLine("4) Elencare i prodotti che sono in scorta (giacenza [1-9]");
            Console.WriteLine("5) Elencare i prodotti esauriti (giacenza = 0)");
            Console.WriteLine("0) Esci");

            Console.WriteLine("\t\tScelta: ");
            scelta = int.Parse(Console.ReadLine());

            return scelta;
        }
    }
}
