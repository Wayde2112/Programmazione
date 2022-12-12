using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Array_List
{
    class Program
    {
        static void Main(string[] args)
        {
            ArrayList lista1 = new ArrayList();

            Console.WriteLine("Capacità: " + lista1.Capacity);
            Console.WriteLine("Dimensione: " + lista1.Count);

            // Aggiungo un elemento alla lista
            lista1.Add(12);
            lista1.Add(11.75);
            lista1.Add(false);
            lista1.Add('s');

            Console.WriteLine("Capacità: " + lista1.Capacity);
            Console.WriteLine("Dimensione: " + lista1.Count);
            Console.ReadKey();

            foreach (Object obj in lista1)
                Console.WriteLine(obj);

            Console.WriteLine();
            Console.WriteLine();

            // Aggiungo un elemento in una determinata posizione
            lista1.Insert(2, "ciao");
            
            foreach (Object obj in lista1)
                Console.WriteLine(obj);

            Console.WriteLine("Cosa vuoi cercare?");
            int n = int.Parse(Console.ReadLine());

            if (lista1.Contains(n))
                Console.WriteLine("Elemento trovato");
            else
                Console.WriteLine("Elemento non trovato");

            Console.WriteLine();
            Console.WriteLine();

            int pos = lista1.IndexOf(n);
            
            if (pos != -1)
                Console.WriteLine($"Elemento trovato in posizione: {pos}");
            else
                Console.WriteLine("Elemento non trovato");

            Console.ReadKey();
        }
    }
}
