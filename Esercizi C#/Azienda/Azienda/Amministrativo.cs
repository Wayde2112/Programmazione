using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Azienda
{
    class Amministrativo:Dipendente
    {
        public Mansione Mansione { get; set; }

        public override double Stipendio()
        {
            var bonus = 0;
            switch (Mansione)
            {
                case Mansione.DIRETTORE: bonus = 300;break;
                case Mansione.CONTABILE: bonus = 50; break;
                case Mansione.RISORSE_UMANE: bonus = 150; break;
            }

            return PagaOraria*OreLavorate+bonus;
        }

        public override string ToString()
        {
            return $"{{Stipendio={Stipendio()}, {nameof(Mansione)}={Mansione.ToString()}, {nameof(Nome)}={Nome}, {nameof(Cognome)}={Cognome}, {nameof(PagaOraria)}={PagaOraria.ToString()}, {nameof(OreLavorate)}={OreLavorate.ToString()}}}";
        }
    }
}
