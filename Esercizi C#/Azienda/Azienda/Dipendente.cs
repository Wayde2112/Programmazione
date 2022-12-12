using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Azienda
{
    abstract class Dipendente
    {
        //nome, cognome, pagaOraria, OreLavorate
        public string Nome { get; set; }
        public string Cognome { get; set; }
        public double PagaOraria { get; set; }
        public int OreLavorate { get; set; }

        //metodo per calcolare lo stipendio
        public abstract double Stipendio();

        public override string ToString()
        {
            return $"{{{nameof(Nome)}={Nome}, {nameof(Cognome)}={Cognome}, {nameof(PagaOraria)}={PagaOraria.ToString()}, {nameof(OreLavorate)}={OreLavorate.ToString()}}}";
        }
    }
}
