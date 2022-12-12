using System;
using System.Collections.Generic;

namespace Magazzino
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Gestione di un Magazzino");

            //elenco di prodotti
            var lista = new List<Prodotto> {
             new Prodotto{Codice=1,Nome="Prodotto 1",Descrizione="Descrizione Prodotto 1", Prezzo=15.25, Giacenza=100 }
             , new Prodotto{Codice=2,Nome="Prodotto 2",Descrizione="Descrizione Prodotto 2", Prezzo=10.25, Giacenza=10 }
             , new Prodotto{Codice=3,Nome="Prodotto 3",Descrizione="Descrizione Prodotto 3", Prezzo=7.15, Giacenza=7 }
             , new Prodotto{Codice=4,Nome="Prodotto 4",Descrizione="Descrizione Prodotto 4", Prezzo=8.25, Giacenza=1 }
             , new Prodotto{Codice=5,Nome="Prodotto 5",Descrizione="Descrizione Prodotto 5", Prezzo=152.25, Giacenza=0 }
            };

            var prodottiBiz = new ProdottiBiz(lista);

            string menu = "\nScegli tra le seguenti operazioni" +
                "\n1 - visualizzare il prodotto con prezzo maggiore" +
                "\n2 - cerca prodotto per codice" +
                "\n3 - valore del magazzino" +
                "\n4 - elenco prodotti in scorta" +
                "\n5 - elenco prodotti esauriti" +
                "\n0 - esci"
                ;

            int scelta = -1;

            while(scelta!=0) {

                Console.WriteLine(menu);
                Console.Write("\nscelta: ");
                scelta = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine();

                switch (scelta) {
                    case 1: Console.WriteLine(prodottiBiz.PrezzoMax()); break;
                    case 2: Console.Write("Inserisci il codice del prodotto: ");
                        Prodotto p = prodottiBiz.RicercaPerCodice(Convert.ToInt32(Console.ReadLine()));
                        if(p!=null)
                            Console.WriteLine(p);
                        else
                            Console.WriteLine("Prodotto non trovato");
                        break;
                    case 3: Console.WriteLine("Valore magazzino: "+prodottiBiz.ValoreMagazzino()+" euro");break;
                    case 4:
                        Console.WriteLine(string.Join("\n", prodottiBiz.ProdottiInScorta()));                        
                        break;
                    case 5:
                        Console.WriteLine(string.Join("\n", prodottiBiz.ProdottiEsauriti()));
                        break;
                    case 0: break;
                    default: Console.WriteLine("Valore inserito non valido");
                        break;
                }            
            }

            Console.WriteLine("\n\nProgramma terminato!");

        }
    }
}
