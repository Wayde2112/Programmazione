using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Liste
{
    class Program
    {
        static void Main(string[] args)
        {
            // Uso delle liste

            var lista = new List<int>();

            Random r = new Random();

            for (int i = 0; i < 500; i++)
                lista.Add(r.Next(1, 100));
            
            
            // Cerca un numero dato in input (73)

            Console.WriteLine("Quale numero vuoi cercare?");
            int n;
            try
            {
                n = int.Parse(Console.ReadLine());
            }
            catch (FormatException ex)
            {
                Console.WriteLine("Si è verificato un errore");
                Console.WriteLine("Messaggio " + ex.Message);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Si è verificato un errore generico");
            }
            Console.ReadKey();

        }
    }
}
