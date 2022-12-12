using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    2) Venditore che eredita da Persona con
    proprietà: Settore che descrive il tipo di settore vendite a cui fa capo es Auto o Moto
    metodi: Tredicesima() che restituisce il 91% in più dello stipendio, 
            Clone, 
            ToString
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class Venditore : Persona, ICloneable
    {
        public string Settore { get; set; }
        
        public Venditore(string nome, string cognome, double stipendio, string settore) : base(nome, cognome, stipendio)
        {
            Settore = settore;
        }
        public override double Tredicesima()
        {
            return Stipendio * 1.91;
        }
        public object Clone()
        {
            return this.MemberwiseClone();
        } 
        public double TariffaGiornaliera()
        {
            return Stipendio / 20;
        }
        public override string ToString()
        {
            return base.ToString() + $"\nSettore = {Settore}";
                

        }

    }
}
