using System;

namespace ClassePunto
{
    class Program
    {
        static void Main(string[] args)
        {
            var p = new Punto(3.44, 2.35);
            var q = new Punto("Q", 1.22, -3.45);
            var r = new Punto();

            Console.WriteLine(p);
            Console.WriteLine(q);
            Console.WriteLine(r);

            Console.WriteLine(p.Distanza());
            Console.WriteLine("OP: " + p.Distanza());
            Console.WriteLine("PQ: " + p.Distanza(q));
            Console.WriteLine("QP: " + q.Distanza(p));
        }
    }

}
