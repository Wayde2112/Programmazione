using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseCerchio
{
    class Cerchio
    {
        private readonly double raggio;

        public Cerchio(double raggio)
        {
            this.raggio = raggio;
        }

        public double Diametro()
        {
            return raggio * 2;
        }

        public double Area()
        {
            return Math.PI * raggio * raggio;
        }

        public double Circonferenza()
        {
            return 2 * Math.PI * raggio;
        }

        public string StampaDettaglio()
        {
            string msg = $"Dati del cerchio: " +
                $"\nRaggio: {raggio}" +
                $"\nDiametro: {Diametro()}" +
                $"\nArea: {Area()}" +
                $"\nCirconferenza: {Circonferenza()}";
            return msg;
        }
        public string StampaLineare()
        {
            string msg = $"Dati del cerchio: " +
                $" Raggio: {raggio}," +
                $" Diametro: {Diametro()}," +
                $" Area: {Area()}," +
                $" Circonferenza: {Circonferenza()}";
            return msg;
        }

    }
}
