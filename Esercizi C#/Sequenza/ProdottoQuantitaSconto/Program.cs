using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProdottoQuantitaSconto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double prezzo;
            int quantita, percentualeSconto;

            Console.Write("Prezzo: ");
            prezzo = double.Parse(Console.ReadLine());
            Console.Write("Quantita' di acquisto: ");
            quantita = int.Parse(Console.ReadLine());
            Console.Write("Percentuale di sconto: ");
            percentualeSconto = int.Parse(Console.ReadLine());

            Console.WriteLine();

            double totale = prezzo * quantita;
            Console.WriteLine("Totale: {0:#.##}", totale); //{0:C} per visualizzare la currency - {0:P} per visualizzare "%"
            double sconto = totale * percentualeSconto / 100;
            Console.WriteLine("Sconto effettuato: {0:#.##}", sconto);
            double totaleScontato = totale - sconto;
            Console.WriteLine("Prezzo scontato: {0:#.##}", totaleScontato);
            

            Console.WriteLine();

            // Altra soluzione
            string msg = "Risultati: "
                + "\nTotale: " + totale
                + "\nSconto effetutato: " + sconto
                + "\nTotale scontato: " + totaleScontato
                ;

            Console.WriteLine(msg);
            Console.Read();
            
        }
    }
}
