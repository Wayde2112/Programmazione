using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AccessoDatabase
{
    class RipartizioneGeografica
    {
        public int Id { get; set; }
        public string Denominazione { get; set; }

        public override string ToString()
        {
            return $"{{{nameof(Id)}={Id.ToString()}, {nameof(Denominazione)}={Denominazione}}}";
        }
    }
}
