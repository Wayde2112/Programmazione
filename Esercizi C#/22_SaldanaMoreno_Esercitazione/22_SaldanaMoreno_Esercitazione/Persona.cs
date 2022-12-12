using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    1) Persona è una classe astratta con
    proprietà: Nome, Cognome, Stipendio
    metodi: Tredicesima():double, 
            ToString 
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    abstract class Persona
    {
        public string Nome { get; set; }
        public string Cognome { get; set; }
        public double Stipendio { get; set; }
        public Persona(string nome, string cognome, double stipendio)
        {
            Nome = nome;
            Cognome = cognome;
            Stipendio = stipendio;
        }
        public abstract double Tredicesima();

        public override string ToString()
        {
            return $"Nome = {Nome}\n" +
                $"Cognome = {Cognome}\n" +
                $"Stipendio ={Stipendio.ToString()}";
        }
    }
}
