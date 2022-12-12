using System;

namespace ClasseRettangolo
{
    class Program
    {
        static void Main(string[] args)
        {
            Rettangolo r = new();
            Console.Write("Inserisci la lunghezza della base: ");
            r.Base = double.Parse(Console.ReadLine());
            Console.Write("Inserisci la lunghezza dell'altezza: ");
            r.Altezza = double.Parse(Console.ReadLine());

            Console.WriteLine(r.StampaDettaglio());
            Console.WriteLine(r.StampaLineare());
            Console.WriteLine(r.Stampa("\n"));
            Console.WriteLine();
            Console.WriteLine(r);
            Console.WriteLine(r.ToString());


        }
    }
}
