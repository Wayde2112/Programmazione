using System;

namespace ArrayInteri
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numeri = new int[5];

            numeri[0] = 2;
            numeri[1] = -12;
            numeri[2] = 4;
            numeri[3] = 5;
            numeri[4] = 64;

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine($"{i}: {numeri[i]}");
            }
        }
    }
}
