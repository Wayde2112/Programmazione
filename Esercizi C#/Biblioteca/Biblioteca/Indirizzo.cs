using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class Indirizzo
    {
        public string Via { get; set; }
        public string Cap { get; set; }
        public string Citta { get; set; }
        public string Provincia { get; set; }

        public override string ToString()
        {
            // Via dei 1000, 101 - 10100 - Torno (TO)

            return $"{Via}, " +
                $"{Cap}, " +
                $"{Citta}, " +
                $"({Provincia.ToUpper()})";
        }
    }
}
