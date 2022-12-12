using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AccessoDatabase
{
    class Program
    {
        static void Main(string[] args)
        {
            
            DAL dal = new DAL();

            string menu = "\nScegli una delle seguenti operazioni:\n" +
                          "1) Visualizza elenco\n" +
                          "2) Visualizza un dettaglio\n" +
                          "3) Inserisci nuovo\n" +
                          "4) Modifica elemento\n" +
                          "5) Elimina elemento\n" +
                          "0) Esci\n";

            int scelta = -1;

            do
            {
                Console.WriteLine(menu);
                Console.WriteLine("\nScelta: ");
                scelta = int.Parse(Console.ReadLine());

                switch (scelta)
                {
                    // 1) Visualizza elenco
                    case 1:
                        Console.WriteLine("Elenco Ripartizione:\n" +string.Join("\n", dal.Elenco()));
                        break;

                    // 2) Visualizza un dettaglio
                    case 2:
                        int id;
                        Console.WriteLine("Inserisci l'id: ");
                        id = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("Elenco Ripartizione:\n" + dal.Dettaglio(id));
                        break;

                    // 3) Inserisci nuovo
                    case 3:
                        Console.WriteLine("Aggiungi ripartizione geografica\n");

                        Console.WriteLine("Inserisci l'id: ");
                        id = Convert.ToInt32(Console.ReadLine());

                        Console.WriteLine("Inserisci la denominazione: ");
                        string denominazione = Console.ReadLine();

                        if (dal.NuovaRipartizioneGeografica(id, denominazione))
                            Console.WriteLine("Operazione eseguita con successo");
                        else
                            Console.WriteLine("Operazione fallita");

                        break;

                    // 4) Modifica elemento
                    case 4:
                        Console.WriteLine("Modifica ripartizione geografica\n");

                        Console.WriteLine("Inserisci l'id: ");
                        id = Convert.ToInt32(Console.ReadLine());

                        Console.WriteLine("Inserisci la denominazione: ");
                        denominazione = Console.ReadLine();

                        if (dal.ModificaRipartizioneGeografica(id, denominazione))
                            Console.WriteLine("Operazione eseguita con successo");
                        else
                            Console.WriteLine("Operazione fallita");

                        break;

                    // 5) Elimina elemento
                    case 5:
                        Console.WriteLine("Elimina ripartizione geografica\n");

                        Console.WriteLine("Inserisci l'id: ");
                        id = Convert.ToInt32(Console.ReadLine());

                        if (dal.EliminaRipartizioneGeografica(id))
                            Console.WriteLine("Operazione eseguita con successo");
                        else
                            Console.WriteLine("Operazione fallita");

                        break;

                    // 0) Esci
                    case 0:
                        Console.WriteLine("Grazie per aver usato il programma!");
                        break;

                    default:
                        break;
                }

            } while (scelta != 0);
        }
    }
}
