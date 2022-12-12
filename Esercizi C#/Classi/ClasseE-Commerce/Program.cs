using System;

namespace ClasseProdotto
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * Creare un software per gestire i prodotti di un sito e-commerce
             * 
             * Di ogni prodotto si conosce il codice, il nome, la descrizione, 
             * il prezzo, la giacenza
             * 
             * Si richiede sapere se un dato prodotto è in scorta o esaurito.
             * 
             * Si richiede la stampa dell'istanza del prodotto
             * 
             * Il sito e-commerce vente 3 prodotti
            */

            var pane = new Prodotto
            {
                Codice = 1,
                Nome = "Pane",
                Descrizione = "Pane fresco appena preparato",
                Prezzo = 1.99F,
                Giacenza = 50
            };

            var latte = new Prodotto
            {
                Codice = 2,
                Nome = "Latte",
                Descrizione = "Latte fresco appena preparato",
                Prezzo = 2.99F,
                Giacenza = 20
            }; 
            
            var uova = new Prodotto
            {
                Codice = 3,
                Nome = "Uova",
                Descrizione = "Uova fresche appena preparato",
                Prezzo = 4.99F,
                Giacenza = 0
            };

            int scelta = -1;

            Console.WriteLine("Di che prodotto si desidera sapere la disponibilita'? [1-2-3]");
            scelta = Convert.ToInt32(Console.ReadLine());

            switch (scelta)
            {
                case 1: Console.WriteLine(pane);
                    break;
                case 2: Console.WriteLine(latte);
                    break;
                case 3: Console.WriteLine(uova);
                    break;
                default:
                    break;
            }

        }
    }
}
