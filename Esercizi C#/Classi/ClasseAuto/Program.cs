using System;

namespace ClasseAuto
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * Di un auto si conoscono la marca, il modello, la cilindrata, 
             * l'alimentazione e il colore
             * 
             * Si vuole calcolare la velocità max che si ottiene 
             * prendendo in considerazione la cilindrata e la si divide per 10
             * A questo calcolo bisogna aggiungere un bonus data dalla seguente tabella
             * 
             * Benzina => 30
             * Diesel => 20 
             * GPL => -10
             * Metano => -30
             * 
             * Implementare il metodo ToString
            */

            Auto bmw = new Auto
            {
                Marca = "BMW", 
                Modello = "X5", 
                Cilindrata = 2500, 
                Alimentazione = Alimentazione.DIESEL,
                Colore = "Bianco",
                Velocita = 50
            };

            Console.WriteLine(bmw);

            string menu = $"Scegli una delle seguenti azioni:" +
                $"\n1) Accelerare" +
                $"\n2) Frenare" +
                $"\n0) Esci";

            int scelta;
            do
            {
                scelta = -1;
                Console.WriteLine($"Velocità: {bmw.Velocita}");
                Console.WriteLine($"{bmw.Messaggio()}");

                Console.WriteLine(menu);
                Console.Write("\t\tScelta: ");
                scelta = Convert.ToInt32(Console.ReadLine());

                switch (scelta)
                {
                    case 0: Console.WriteLine("Programma terminato"); break;
                    case 1: bmw.Accelera(); break; 
                    case 2: bmw.Frena(); break;
                    default: Console.WriteLine("Valore inserito non valido"); break;
                }

            } while (true);
        }

        
    }
}