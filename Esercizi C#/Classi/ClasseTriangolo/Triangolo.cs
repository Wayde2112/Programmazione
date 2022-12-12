using ClassePunto;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseTriangolo
{
    class Triangolo
    {
        // Proprietà
        public double Lato1 { get; set; }
        public double Lato2 { get; set; }
        public double Lato3 { get; set; }
        public Triangolo() { }
        public Triangolo(Punto punto1, Punto punto2, Punto punto3) {
            Lato1 = punto1.Distanza(punto2);
            Lato2 = punto2.Distanza(punto3);
            Lato3 = punto3.Distanza(punto1);

        }
        // Metodi
        public bool IsCostruibile()
        {
            return Lato1 + Lato2 > Lato3 && Lato2 + Lato3 > Lato1 && Lato3 + Lato1 > Lato2;
        }
        public double Perimetro()
        {
            return Lato1 + Lato2 + Lato3;
        }

        public double Area()
        {
            // Formula di Erone
            double sp = Perimetro() / 2;
            return Math.Sqrt(sp * (sp - Lato1) * (sp - Lato2) * (sp - Lato3));
        }

        public string Tipo()
        {
            if (Lato1 == Lato2 && Lato1 == Lato3)
                return "Equilatero";
            else if (Lato1 == Lato2 || Lato3 == Lato1 || Lato3 == Lato2)
                return "Isoscele";
            return "Scaleno";
        }

        public override string ToString()
        {
            if (!IsCostruibile())
                return "Triangolo non costruibile";

            return $"\n" +
                $"Lato1: {Lato1}" +
                $"\nLato2: {Lato2}" +
                $"\nLato3: {Lato3}" +
                $"\nPerimetro: {Perimetro()}" +
                $"\nArea: {Area():#.##}" +
                $"\nTipo: {Tipo()}";
        }
    }
}
