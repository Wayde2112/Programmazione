using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Somma2Interi
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a, b, somma;

            Console.Write("Inserisci il primo numero intero: ");
            string tmp = Console.ReadLine();
            a = int.Parse(tmp);

            Console.Write("Inserisci il secondo numero intero: ");
            tmp = Console.ReadLine();
            b = int.Parse(tmp);

            somma = a + b;

            Console.WriteLine("Somma: " +somma);
            Console.ReadLine();

            Console.WriteLine("{0}+{1}+{2}", a, b, somma);
            Console.ReadLine();
        }
    }
}
