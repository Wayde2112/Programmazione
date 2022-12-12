using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Threading.Tasks;

namespace GestioneFileOggetti
{
    class Program
    {
        static void Main(string[] args)
        {
            // Scrivere e leggere file di oggetti
            string path = @"C:\files\oggetti.dat";

            // Creazione oggetto da salvare
            var s1 = new Studente 
            { 
                Matricola = "12345678", 
                Nome = "Pino", 
                Cognome = "Delfino", 
                Corso = "Cloud Specialist" 
            };
            
            var s2 = new Studente 
            { 
                Matricola = "12345678", 
                Nome = "Pina", 
                Cognome = "Delfini", 
                Corso = "Cloud Specialist" 
            };

            var lista = new List<Studente>();
            lista.Add(s1);
            lista.Add(s2);

            // Scrittura su file di oggetti
            FileStream fs = new FileStream(path, FileMode.CreateNew, FileAccess.Write);

            // Operazioni di manipolazione dei dati
            BinaryFormatter bf = new BinaryFormatter();

            bf.Serialize(fs, lista);

            fs.Close();

            Console.WriteLine("Operazione eseguita corretamente!\n");

            // Lettura da file di oggetti
            FileStream file = new FileStream(path, FileMode.Open, FileAccess.Read);
            BinaryFormatter br = new BinaryFormatter();

            /*
            // Forma estesa
            Object obj = br.Deserialize(file);

            Studente st = null;
            if (obj is Studente)
                st = (Studente)obj;

            // Forma ridotta
            Studente st1 = (Studente)br.Deserialize(file);
            */

            var lista2 = (List<Studente>)br.Deserialize(file);

            fs.Close();

            Console.WriteLine("Elenco oggetti recuperati: ");
            foreach (var s in lista2)
                Console.WriteLine(s);

            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
