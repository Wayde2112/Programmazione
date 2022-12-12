using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class Autore
    {
        public string Nome { get; set; }
        public string Cognome { get; set; }
        public DateTime DataNascita { get; set; }
        public string LuogoNascita { get; set; }
        public DateTime ? DataMorte { get; set; } // Dato nullable
        public string LuogoMorte { get; set; }

        public bool isVivente()
        {
            return DataMorte == null;
        }

        public string Nominativo()
        {
            // Antonio Ginostra => A. Ginostra

            return Nome.Substring(0, 1).ToUpper() + ". "
                + Cognome.Substring(0, 1).ToUpper() + Cognome.Substring(1).ToLower();
        }

        public override string ToString()
        {
            return $"{{{nameof(Nome)}={Nome}, " +
                $"{nameof(Cognome)}={Cognome}, " +
                $"{nameof(DataNascita)}={DataNascita.ToString()}, " +
                $"{nameof(LuogoNascita)}={LuogoNascita}, " +
                $"{nameof(DataMorte)}={DataMorte.ToString()}, " +
                $"{nameof(LuogoMorte)}={LuogoMorte}}}";
        }


    }
}
