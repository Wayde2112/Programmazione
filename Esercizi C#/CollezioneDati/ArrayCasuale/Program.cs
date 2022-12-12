using System;

namespace ArrayInteri
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
                Riempire un array di numeri interi in modo casuale
                Cercare un elemento nell'array, recuperato di input
                Stampare il messaggio numero non trovato oppure numero trovato in posizione "?"
            */

            int[] numeri = new int[20];

            Random casuale = new Random();
            for (int i = 0; i < numeri.Length; i++)
                numeri[i] = casuale.Next(-100,100);

            Console.WriteLine("Inserisci il numero da cercare: ");
            int n = int.Parse(Console.ReadLine());

            int pos = -1;
            for (int i = 0; i < numeri.Length; i++)
                if (numeri[i] == n) 
                { 
                    pos = i; 
                    break; 
                }

            if (pos != -1)
                Console.WriteLine($"Numero trovato in posizione {pos}");
            else
                Console.WriteLine("Numero non trovato");

        }
    }
}
