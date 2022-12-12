using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GestioneFileTesto
{
    class Program
    {
        static void Main(string[] args)
        {
            // Leggere e scrivere su file di testo

            string path = @"C:\files\testo.txt";

            // Scrittura su file di testo
            StreamWriter sw = new StreamWriter(path, true);

            string testo = DateTime.Now.ToString();

            sw.WriteLine(testo);

            sw.Flush();
            sw.Close();

            Console.WriteLine("Operazione eseguita con successo");

            // Lettura da file di testo
            StreamReader sr = new StreamReader(path);

            string testo2 = "";
            while (!sr.EndOfStream)
                testo2 += (testo2.Length!=0 ? "\n" : "") + sr.ReadLine();

            sr.Close();

            Console.WriteLine("Testo recuperato: \n" + testo2);

            Console.ReadKey();
        }
    }
}
