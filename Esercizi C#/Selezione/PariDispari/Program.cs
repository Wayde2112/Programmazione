using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PariDispari
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n;

            Console.Write("Digita un numero: ");
            n = int.Parse(Console.ReadLine());

            if (n % 2 == 0) Console.WriteLine($"{n} è pari");
            else Console.WriteLine($"{n} è dispari");

            Console.Read();
        }
    }
}
