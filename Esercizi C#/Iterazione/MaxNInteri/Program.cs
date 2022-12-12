using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MaxNInteri
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n, nMax = int.MinValue;

            do
            {
                Console.Write("Quanti numeri vuoi digitare? ");
                n = Convert.ToInt32(Console.ReadLine());
                if (n <= 0) Console.WriteLine("Errore, digitare un numero positivo");
            } while (n <= 0);

            for(int i = 0; i < n; i++)
            {
                Console.Write("Inserisci un numero: ");
                nMax=Convert.ToInt32(Console.ReadLine());
                if (nMax < n) 
                    nMax = n;
            }

            Console.WriteLine($"Max: {nMax}");
            Console.ReadLine();
        }
    }
}
