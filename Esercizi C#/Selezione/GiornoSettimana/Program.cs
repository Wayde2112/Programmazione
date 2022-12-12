using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GiornoSettimana
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int g;

            Console.Write("Inserisci un numero intero [1,7]: ");
            g = int.Parse(Console.ReadLine());

            string msg;
            switch (g)
            {
                case 1: msg = "Lunedì"; break;
                case 2: msg = "Martedì"; break;
                case 3: msg = "Mercoledì"; break;
                case 4: msg = "Giovedì"; break;
                case 5: msg = "Venerdì"; break;
                case 6: msg = "Sabato"; break;
                case 7: msg = "Domenica"; break;
                default: msg = "Errore"; break;
            }

            Console.WriteLine(msg);
            Console.Read();
        }
    }
}
