using System;

namespace ClassePersona
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * Creare una classe Persona che ha come proprietà
             * Nome, Cognome, dataNascita, luogoNascita, sesso
             * Inoltre si ha la possibiltà di creare gli oggetti
             * nei seguenti modi:
             * - senza passaggio di paramatri
             * - con nome e cognome
             * - con nome e cognome, data nascita e luogo nascita
             * - con tutti i parametri
             * Si richiede altresì la possibiltà di ottenere l'età
             * della persona.
             * Infine è necessario far restituire la configurazione dell'oggetto in stampa.
            */

            var pino = new Persona();

            var gina = new Persona("Gina", "De Lillo");

            Data dataNascitaLino = new Data();
            dataNascitaLino.Giorno = 26;
            dataNascitaLino.Mese = 2;
            dataNascitaLino.Anno = 2000;
            var lino = new Persona("Lino", "Postino", dataNascitaLino, "Torino");

            Data dataNascitaTina = new Data();
            dataNascitaTina.Giorno = 26;
            dataNascitaTina.Mese = 3;
            dataNascitaTina.Anno = 2001;
            var tina = new Persona("Tina", "Albina", dataNascitaTina, "Genova", Sesso.F);

            Console.WriteLine(pino);
            Console.WriteLine(gina);
            Console.WriteLine(lino);
            Console.WriteLine(tina);
        }
    }
}