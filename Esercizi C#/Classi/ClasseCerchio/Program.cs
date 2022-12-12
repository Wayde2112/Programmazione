using System;

namespace ClasseCerchio
{
    class Program
    {
        static void Main(string[] args)
        {
            Cerchio c = new(1.25);
            Console.WriteLine(c.StampaDettaglio());
            Console.WriteLine(c.StampaLineare());
        }
    }
}
