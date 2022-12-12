using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseQuadrato
{
    class Quadrato
    {
        /*
         * Attributo (Rappresenta un elemento che consente 
         * la configurazione dell'oggetto) o Campo
        */
        public double _lato;

        // Metodi

        public double GetLato()
        {
            return _lato;
        }

        public void SetLato(double lato)
        {
            if (lato < 0)
                Console.WriteLine("Dato non valido");
            else
                _lato = lato;
        }

        public double Perimetro()
        {
            return _lato * 4;
        }
        
        public double Area()
        {
            return _lato * _lato;
        }

        public double Diagonale()
        {
            return _lato * Math.Sqrt(2);
        }

    }
}
