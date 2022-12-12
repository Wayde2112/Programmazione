using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Azienda
{
    class OperaioSpecializzato:Operaio
    {
        public int NumeroMissioni { get; set; }
        public double IndennitaMissione { get; set; }

        public override double Stipendio()
        {
            return base.Stipendio() + NumeroMissioni*IndennitaMissione;
        }

        public override string ToString()
        {
            return $"{{Stipendio={Stipendio()}, {nameof(NumeroMissioni)}={NumeroMissioni.ToString()}, {nameof(IndennitaMissione)}={IndennitaMissione.ToString()}, {nameof(Settore)}={Settore.ToString()}, {nameof(Nome)}={Nome}, {nameof(Cognome)}={Cognome}, {nameof(PagaOraria)}={PagaOraria.ToString()}, {nameof(OreLavorate)}={OreLavorate.ToString()}}}";
        }
    }
}
