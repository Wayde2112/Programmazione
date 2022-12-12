using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca
{
    public class Editore
    {
        public string RagioneSociale { get; set; }
        public Indirizzo Indirizzo { get; set; }
        public string Email { get; set; }
        public string SitoWeb { get; set; }
        public string Telefono { get; set; }

        public override string ToString()
        {
            return $"{{{nameof(RagioneSociale)}={RagioneSociale}, " +
                $"{nameof(Indirizzo)}={Indirizzo}, " +
                $"{nameof(Email)}={Email}, " +
                $"{nameof(SitoWeb)}={SitoWeb}, " +
                $"{nameof(Telefono)}={Telefono}}}";
        }
    }
}
