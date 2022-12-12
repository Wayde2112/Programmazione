using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuadratoConsole
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double l;

            Console.Write("Lunghezza lato: ");
            l = int.Parse(Console.ReadLine());

            double p = l * 4;
            double a = l * l;
            double d = l * Math.Sqrt(2);

            Console.WriteLine($"Perimetro {p}");
            Console.WriteLine($"Area {a}");
            Console.WriteLine($"Diagonale {d:#.##}");

            Console.Read();
        }
    }
}
