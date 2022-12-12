using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassePunto
{
    class Punto
    {
        // Proprietà
        public string Etichetta { get; set; }
        public double X { get; set; }
        public double Y { get; set; }

        // Overloading (Più costruttori con parametri diversi)
        public Punto() { }
        public Punto(double x, double y)
        {
            X = x;
            Y = y;
        }
        public Punto(string etichetta, double x, double y)
        {
            Etichetta = etichetta;
            X = x;
            Y = y;
        }

        // Metodi
        public double Distanza()
        {
            Punto o = new Punto(0,0);
            return Distanza(o);
        }
        public double Distanza(Punto punto)
        {
            return Math.Sqrt(Math.Pow(this.X - punto.X,2)+Math.Pow(this.Y-punto.Y,2));
        }
        public override string ToString()
        {
            /*
             * Output:
             *  (,)
             *  (3.45,-1.22)
             *  P(3.45,-1.22)
            */
            return (!string.IsNullOrEmpty(Etichetta) ? "" : Etichetta)
                + "(" + X + "," + Y + ")";
        }
    }
}
