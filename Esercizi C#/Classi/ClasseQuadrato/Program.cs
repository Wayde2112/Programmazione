using System;

namespace ClasseQuadrato
{
    class Program
    {
        static void Main(string[] args)
        {
            Quadrato q = new Quadrato();
            q.SetLato(1.25);

            Console.WriteLine($"Perimetro: {q.Perimetro()}");
            Console.WriteLine($"Area: {q.Area()}");
            Console.WriteLine($"Diagonale: {q.Diagonale()}");

            Quadrato q2 = new Quadrato();
            Console.WriteLine("Inserisci il lato del quadrato: ");
            q2.SetLato(double.Parse(Console.ReadLine()));

            Console.WriteLine($"Lato: {q2.GetLato}");
            Console.WriteLine($"Perimetro: {q2.Perimetro()}");
            Console.WriteLine($"Area: {q2.Area()}");
            Console.WriteLine($"Diagonale: {q2.Diagonale()}");
        }
    }
}
