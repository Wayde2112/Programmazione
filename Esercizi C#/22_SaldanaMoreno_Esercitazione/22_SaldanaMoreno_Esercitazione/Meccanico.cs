using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    3) Meccanico eredita da Persona con
    proprietà: Tipologia che descrive il tipo di settore a cui fa capo es Carrozzeria o Meccanica
    metodi: Tredicesima che restituisce il 93% in più dello stipendio, 
            Equals, 
            ToString 
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class Meccanico : Persona
    {
        public string Tipologia { get; set; }
        
        public Meccanico(string nome, string cognome, double stipendio, string tipologia) : base(nome, cognome, stipendio)
        {
            Tipologia = tipologia;
        }
        public override double Tredicesima()
        {
            return Stipendio * 1.93;
        }
        public override bool Equals(object obj)
        {
            return obj is Meccanico meccanico &&
                   Nome == meccanico.Nome &&
                   Cognome == meccanico.Cognome &&
                   Stipendio == meccanico.Stipendio &&
                   Tipologia == meccanico.Tipologia;
        }
        public override string ToString()
        {
            return base.ToString() + $"\nTipologia = {Tipologia}";
        }

    }
}
