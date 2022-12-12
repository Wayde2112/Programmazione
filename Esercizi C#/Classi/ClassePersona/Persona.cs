using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassePersona
{
    enum Sesso
    {
        F, M, ALTRO
    }
    class Persona
    {
        // Proprietà
        public string Nome { get; set; }
        public string Cognome { get; set; }
        public Data DataNascita { get; set; }
        public string LuogoNascita { get; set; }
        public Sesso Sesso { get; set; }

        // Overloading
        public Persona() { }
        public Persona(string nome, string cognome)
        {
            Nome = nome;
            Cognome = cognome;
        }
        public Persona(string nome, string cognome, Data dataNascita, string luogoNascita)
        {
            Nome = nome;
            Cognome = cognome;
            DataNascita = dataNascita;
            LuogoNascita = luogoNascita;
        }
        public Persona(string nome, string cognome, Data dataNascita, string luogoNascita, Sesso sesso)
        {
            Nome = nome;
            Cognome = cognome;
            DataNascita = dataNascita;
            LuogoNascita = luogoNascita;
            Sesso = sesso;
        }

        // Metodi
        public int CalcolaEta()
        {
            if (DataNascita == null)
                return -1;

            Data oggi = new Data();
            oggi.Giorno = 25;
            oggi.Mese = 2;
            oggi.Anno = 2022;

            int e = oggi.Anno - DataNascita.Anno;

            if (oggi.Mese < DataNascita.Mese || (oggi.Mese == DataNascita.Mese && oggi.Giorno < DataNascita.Giorno))
                e--;

            return e;
        }

        public override string ToString()
        {
            return "Nome: " + Nome
                + "\nCognome: " + Cognome
                + (DataNascita != null ?"\nData di nascita: " + DataNascita.FormatLineare() : "")
                + "\nLuogo di nascita: " + LuogoNascita
                + "\nSesso: " + Sesso
                + (DataNascita != null ? "\nEta': " + CalcolaEta() : "")
                + "\n";
        }
    }
}
