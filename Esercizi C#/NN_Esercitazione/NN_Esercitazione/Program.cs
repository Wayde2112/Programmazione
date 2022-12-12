using System;
using System.Collections.Generic;

namespace NN_Esercitazione
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Venditore> elencoVenditori = new List<Venditore>
            {
                new Venditore { Nome="Pino", Cognome="Balistro", Stipendio=1234, Settore=Settore.Auto},
                new Venditore { Nome="Dario", Cognome="Balestro", Stipendio=1100, Settore=Settore.Moto}
            };
            Console.WriteLine("Stampa elenco dei venditori");
            Console.WriteLine(string.Join("\n", elencoVenditori));
            
            List<Meccanico> elencoMeccanici = new List<Meccanico>
            {
                new Meccanico { Nome="Francesco", Cognome="Chiaro", Stipendio=1534, Tipologia=Tipologia.Meccanica},
                new Meccanico { Nome="Dario", Cognome="Ciriaco", Stipendio=1100, Tipologia=Tipologia.Carrozzeria}
            };
            Console.WriteLine("\n\nStampa elenco dei meccanici");
            Console.WriteLine(string.Join("\n", elencoMeccanici));

            var p1 = new Prodotto { Codice = 1, Denominazione = "Prodotto 1", Descrizione = "Descrizione prodotto 1", Prezzo = 12.15 };
            var p2 = new Prodotto { Codice = 2, Denominazione = "Prodotto 2", Descrizione = "Descrizione prodotto 2", Prezzo = 12.15 };
            var p3 = new Prodotto { Codice = 3, Denominazione = "Prodotto 3", Descrizione = "Descrizione prodotto 3", Prezzo = 12.15 };
            var p4 = new Prodotto { Codice = 4, Denominazione = "Prodotto 4", Descrizione = "Descrizione prodotto 4", Prezzo = 12.15 };
            var p5 = new Prodotto { Codice = 5, Denominazione = "Prodotto 5", Descrizione = "Descrizione prodotto 5", Prezzo = 12.15 };

            var ps1 = new ProdottoScelto { Prodotto = p1, Quantita = 2 };
            var ps2 = new ProdottoScelto { Prodotto = p2, Quantita = 12 };
            var ps3 = new ProdottoScelto { Prodotto = p3, Quantita = 23 };
            var ps4 = new ProdottoScelto { Prodotto = p4, Quantita = 23};
            var ps5 = new ProdottoScelto { Prodotto = p5, Quantita = 4 };
            var ps6 = new ProdottoScelto { Prodotto = p3, Quantita = 20 };
            var ps7 = new ProdottoScelto { Prodotto = p2, Quantita = 4 };

            List<Ordine> elencoOrdine = new List<Ordine>
            {
                new Ordine { IdOrdine = 1, Data = new DateTime(2022, 6, 7, 12, 4, 56), Venditore = elencoVenditori[0], ElencoProdotti = new List<ProdottoScelto> { ps1, ps2, ps5, ps7 } },
                new Ordine { IdOrdine = 2, Venditore = elencoVenditori[1], ElencoProdotti = new List<ProdottoScelto> { ps2, ps3, ps4, ps6 } }
            };

            Console.WriteLine("\n\nStampa di un certo ordine");
            Console.WriteLine($"\nStampa scontrino Ordine n. 1\n\n {elencoOrdine[1].Scontrino()}");

            var rv = new ResponsabileVenditori { Cognome = "Guidi", Nome = "Piero", Stipendio = 1975.25, Settore = Settore.Auto, Venditori = elencoVenditori };
            Console.WriteLine("\n\nStampa Responsabile Venditore");
            Console.WriteLine($"\n {rv}");

            var co = new CapoOfficina { Cognome = "Guidi", Nome = "Piero", Stipendio = 1975.25, Tipologia = Tipologia.Meccanica, Ordini = elencoOrdine };
            Console.WriteLine("\n\nStampa Capo Officina");
            Console.WriteLine($"\n {co}");
        }
    }
}
