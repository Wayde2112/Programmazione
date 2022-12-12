using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Eccezioni
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Inserisci un numero intero positivo");
            try
            {
                
                int n = int.Parse(Console.ReadLine());
                var np = new NumeroPositivo(n);
                Console.WriteLine(np);
            }
            catch (MyException e)
            {
                Console.WriteLine(e.Message);
            }
            catch (FormatException e)
            {
                Console.WriteLine(e.Message);
            }
            

            Console.ReadKey();
        }
    }
}
