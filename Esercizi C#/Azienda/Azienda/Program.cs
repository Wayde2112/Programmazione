using System;

namespace Azienda
{
    class Program
    {
        static void Main(string[] args)
        {
            //creo una serie di oggetti per costruire l'elenco dei dipendneti dell'azienda

            var a1 = new Amministrativo
            {
                Nome = "Pino",
                Cognome = "Delillo",
                PagaOraria = 25.25,
                OreLavorate = 180,
                Mansione = Mansione.DIRETTORE
            };

            var a2 = new Amministrativo
            {
                Nome = "Lina",
                Cognome = "Delillo",
                PagaOraria = 20.25,
                OreLavorate = 150,
                Mansione = Mansione.CONTABILE
            };

            var a3 = new Amministrativo
            {
                Nome = "Tina",
                Cognome = "Melillo",
                PagaOraria = 20.25,
                OreLavorate = 120,
                Mansione = Mansione.RISORSE_UMANE
            };

            var o1 = new Operaio
            {
                Nome = "Tino",
                Cognome = "Melilli",
                PagaOraria = 19.25,
                OreLavorate = 220,
                Settore = Settore.INSTALLATORE
            };

            var o2 = new Operaio
            {
                Nome = "Mino",
                Cognome = "Melolla",
                PagaOraria = 23.25,
                OreLavorate = 200,
                Settore = Settore.MANUTENTORE
            };

            var os1 = new OperaioSpecializzato
            {
                Nome = "Rino",
                Cognome = "Metilli",
                PagaOraria = 19.25,
                OreLavorate = 180,
                Settore = Settore.INSTALLATORE,
                NumeroMissioni=2,
                IndennitaMissione=500
            };

            var os2 = new OperaioSpecializzato
            {
                Nome = "Dino",
                Cognome = "Malolle",
                PagaOraria = 21.25,
                OreLavorate = 140,
                Settore = Settore.MANUTENTORE,
                NumeroMissioni = 3,
                IndennitaMissione = 400
            };

            //elenco dei dipendneti
            Dipendente[] elenco = {a1,a2,a3,o1,o2,os1,os2};

            Console.WriteLine("Elenco dipendenti");
            foreach(Dipendente d in elenco)
                Console.WriteLine(d);
           
            Console.WriteLine();
           
            Console.WriteLine("Elenco Amministrativi");
            foreach (Dipendente d in elenco)
                if(d is Amministrativo)
                    Console.WriteLine(d);

            Console.WriteLine();

            Console.WriteLine("Elenco Operai");
            foreach (Dipendente d in elenco)
                if (d is Operaio)
                    Console.WriteLine(d);

            Console.WriteLine();

            Console.WriteLine("Elenco Operai Specializzati");
            foreach (Dipendente d in elenco)
                if (d is OperaioSpecializzato)
                    Console.WriteLine(d);

            Console.WriteLine();

            Console.WriteLine("Elenco Operai esclusi quelli specializzati");
            foreach (Dipendente d in elenco)
                if (d is Operaio && d is not OperaioSpecializzato)
                    Console.WriteLine(d);
        }
    }
}
