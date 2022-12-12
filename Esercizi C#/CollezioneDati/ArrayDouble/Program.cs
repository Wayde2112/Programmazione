using System;

namespace ArrayDouble
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] numeri = {2, -12, 78, Math.Sqrt(6), Math.Sin(10)};

            for (int i = 0; i < numeri.Length; i++)
            {
                Console.WriteLine($"{i}: {numeri[i]}");
            }
        }
    }
}
