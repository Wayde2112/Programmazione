using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Azienda
{
    class Operaio:Dipendente
    {
        public Settore Settore { get; set; }

        public override double Stipendio()
        {
            var bonus = 0;
            switch (Settore)
            {
                case Settore.INSTALLATORE:bonus = 180;break;
                case Settore.MANUTENTORE: bonus = 230; break;
            }

            return PagaOraria * OreLavorate + bonus;
        }

        public override string ToString()
        {
            return $"{{Stipendio={Stipendio()}, {nameof(Settore)}={Settore.ToString()}, {nameof(Nome)}={Nome}, {nameof(Cognome)}={Cognome}, {nameof(PagaOraria)}={PagaOraria.ToString()}, {nameof(OreLavorate)}={OreLavorate.ToString()}}}";
        }
    }
}
