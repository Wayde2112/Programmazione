using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuadratoNSommaDispari
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n, somma = 0, nDispari;
            string msg = "";

            do
            {
                Console.Write("Digita un numero: ");
                n = int.Parse(Console.ReadLine());

                if (n <= 0) 
                    Console.WriteLine("Numero inserito non valido");

            } while (n <= 0);


            for(int i = 0; i < Math.Abs(n); i++)
            {
                nDispari = 2 * i + 1;
                somma += nDispari;
                msg += (i != 0 ? "+" : "") + nDispari;
            }

            Console.WriteLine($"{somma} = {msg}");
            Console.ReadLine();


        }
    }
}
