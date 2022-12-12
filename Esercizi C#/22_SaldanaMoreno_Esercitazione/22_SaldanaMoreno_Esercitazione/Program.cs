using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    Costruire il Main con la possibilità di scegliere tra le seguenti azioni (creare un menu testuale):

    1) Stampa dell’elenco dei venditori
    2) Stampa dell’elenco dei meccanici
    3) Stampa di un certo ordine
    4) Stampa dei dati del responsabile venditori
    5) Stampa dei dati del capo officina
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class Program
    {
        static void Main(string[] args)
        {
            int scelta = -1;
            string menu = "\t MENU \n" +
                    " 1) Stampa dell’elenco dei venditori\n" +
                    " 2) Stampa dell’elenco dei meccanici\n" +
                    " 3) Stampa di un certo ordine\n" +
                    " 4) Stampa dei dati del responsabile venditori\n" +
                    " 5) Stampa dei dati del capo officina\n" +
                    " 0) Esci\n" +
                    " Scelta: ";

            // Venditori
            var v1 = new Venditore("Max", "Verstappen", 1200, "Auto");
            var v2 = new Venditore("Daniel", "Ricciardo", 1500, "Auto");
            var v3 = new Venditore("Jakob", "Ingebrigtsen", 1100, "Scarpe");
            var v4 = new Venditore("Filip", "Ingebrigtsen", 1700, "Scarpe");
            var v5 = new Venditore("Eliud", "Kipchoge", 2500, "Scarpe");

            // Meccanici
            var m1 = new Meccanico("Lewis", "Hamilton", 1500, "Carrozzeria");
            var m2 = new Meccanico("Filippo", "Tortu", 1700, "Meccanica");
            var m3 = new Meccanico("Italo", "Quazzola", 1500, "Carrozzeria");
            var m4 = new Meccanico("Dario", "Dester", 1700, "Meccanica");
            var m5 = new Meccanico("Alessandro", "Sion", 1900, "Meccanica");

            // Responsabile Venditori
            var rVenditori1 = new ResponsabileVenditori( "Franco", "Paggi", 2500, "Scarpe", new List<Venditore> { v1, v2, v3 });
            var rVenditori2 = new ResponsabileVenditori( "Franca", "Maria", 2700, "Auto", new List<Venditore> { v4, v5 });

            // Prodotti
            var p1 = new Prodotto(1, "Prodotto 1", "Descrzione 1", 9.99);
            var p2 = new Prodotto(2, "Prodotto 2", "Descrzione 2", 10.99);
            var p3 = new Prodotto(3, "Prodotto 3", "Descrzione 3", 11.99);
            var p4 = new Prodotto(4, "Prodotto 4", "Descrzione 4", 12.99);
            var p5 = new Prodotto(5, "Prodotto 5", "Descrzione 5", 13.99);
            
            // Capo Officina
            var cOfficina1 = new CapoOfficina("Rino", "Castiglione", 2500, "Carrozzeria", new List<Ordine>
            {
                new Ordine (1, new DateTime(2008, 5, 1), new List<QuantitaProdotto> { new QuantitaProdotto (p1, 4)}, v1),
                new Ordine (2, new DateTime(2018, 5, 1), new List<QuantitaProdotto> { new QuantitaProdotto (p2, 3)}, v2),
                new Ordine (3, new DateTime(2018, 6, 1), new List<QuantitaProdotto> { new QuantitaProdotto (p3, 2)}, v3),
                
            });

            ProgramBiz programBiz = new ProgramBiz(new List<Persona> { m1, m2, m3, m4, m5, cOfficina1, rVenditori1, rVenditori2 });
            
            do
            {
                Console.WriteLine(menu);
                scelta = int.Parse(Console.ReadLine());
                switch (scelta)
                {
                    case 1:
                        {
                            Console.WriteLine("Elenco Venditori");
                            Console.WriteLine(string.Join("\n", programBiz.StampaVenditori()));
                            break;
                        }
                    
                    case 2:
                        {
                            Console.WriteLine("Elenco dei meccanici");
                            Console.WriteLine(string.Join("\n", programBiz.StampaMeccanici()));
                            break;
                        }


                    case 3:
                        {
                            Console.WriteLine("Inserire che ordine vuole stampare [0-2]");
                            int ordine = int.Parse(Console.ReadLine());
                            Console.WriteLine(programBiz.StampaXOrdine(ordine));
                            break;
                        }


                    case 4:
                        {
                            Console.WriteLine("Stampa dei dati del responsabile venditori");
                            programBiz.StampaResponsabileVenditori().ForEach(rVenditori => Console.WriteLine(rVenditori.ToString()));
                            break;
                        }

                    case 5:
                        {
                            Console.WriteLine("Stampa del capo officina");
                            programBiz.StampaCapoOfficina().ForEach(cOfficina => Console.WriteLine(cOfficina.DettaglioCapoOfficina()));
                            break;
                        }

                    case 0:
                        Console.WriteLine("Grazie per aver usato questo programma!");
                        break;

                    default:
                        Console.WriteLine("Valore inserito non valido");
                        break;
                }
            } while (scelta != 0);
        }
    }
}
