using ClassePunto;
using System;

namespace ClasseTriangolo
{
    class Program
    {
        static void Main(string[] args)
        {
            var t = new Triangolo();
            Console.Write("Lato 1: ");
            t.Lato1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Lato 2: ");
            t.Lato2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Lato 3: ");
            t.Lato3 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine(t);

            var p1 = new Punto(2, 3);
            var p2 = new Punto(-2, 3);
            var p3 = new Punto(-2, -3);

            var t1 = new Triangolo(p1, p2, p3);
            // var t1 = new Triangolo(new Punto(2,3), new Punto(-2, 3), new Punto(-2, -3));

            Console.WriteLine($"\n\nTriangolo costruito con i seguenti punti: {p1} {p2} {p3}\n{t1}");

        }

    }
}
