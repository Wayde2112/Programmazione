﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Divisione2Interi
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a, b, qi, r;
            double qr;

            Console.Write("Inserisci il dividendo: ");
            a = int.Parse(Console.ReadLine());

            Console.Write("Inserisci il divisore: ");
            b = int.Parse(Console.ReadLine());

            qi = a / b;
            r = a % b;
            qr = (double)a / b;

            Console.WriteLine("Quoziente intero: {0}", qi);
            Console.WriteLine("Resto: {0}", r);
            Console.WriteLine("Quoziente reale: {0}", qr);
            Console.ReadLine();
        }
    }
}