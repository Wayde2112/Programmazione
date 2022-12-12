using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    abstract class Persona
    {

        public string Nome { get; set; }
        public string Cognome { get; set; }
        public double Stipendio { get; set; }
        public abstract double Tredicesima();

        public override string ToString()
        {
            return $"Nome={Nome}, Cognome={Cognome}, Stipendio={Stipendio.ToString()} euro, Tredicesima={Tredicesima()} euro";
        }
    }
}
