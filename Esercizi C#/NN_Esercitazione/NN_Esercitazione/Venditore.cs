using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NN_Esercitazione
{
    class Venditore:Persona
    {
        public Settore Settore { get; set; }
        public override double Tredicesima() 
        {
            return Stipendio + 91 * Stipendio / 100;
        }
        public string Nominativo()
        {
            return $"{Nome} {Cognome}";
        }
        public Object Clone()
        {
            return this.MemberwiseClone();
        }

        public override string ToString()
        {
            return base.ToString() + $", Settore={Settore}";
        }
    }
}
