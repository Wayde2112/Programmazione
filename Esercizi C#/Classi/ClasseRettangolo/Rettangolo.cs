using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseRettangolo
{
    class Rettangolo
    {
        // Proprietà
        public double Base { get; set; }
        public double Altezza { get; set; }

        // Costruttori

        // Metodi
        public double Perimetro()
        {
            return 2 * (Base + Altezza);
        }

        public double Area()
        {
            return Base * Altezza;
        }

        public double Diagonale()
        {
            return Math.Sqrt(Math.Pow(Base, 2) + Math.Pow(Altezza, 2));
        }

        public string Stampa(string separatore)
        {
            return $"Dati del rettangolo: " +
                $"Base: {Base}" +
                $"{separatore}Altezza: {Altezza}" +
                $"{separatore}Perimetro: {Perimetro()}" +
                $"{separatore}Area: {Area()}" +
                $"{separatore}Diagonale: {Diagonale():#.##}";
        }

        public string StampaLineare()
        {
            return Stampa(", ");
        }
        
        public string StampaDettaglio()
        {
            return Stampa("\n");
        }

        public override string ToString()
        {
            return StampaLineare();
        }
    }
}
