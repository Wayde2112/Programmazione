using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magazzino
{
    class MyLibrary
    {
        public static List<Prodotto> LeggiFileTesto (string path) 
        { 
            var lista = new List<Prodotto>();

            StreamReader sr = new StreamReader(path);

            while (!sr.EndOfStream)
            {
                string linea = sr.ReadLine();
                string[] parole = linea.Split(';');
                Prodotto p = new Prodotto();
                p.Codice = int.Parse(parole[0]);
                p.Nome = parole[1];
                p.Descrizione = parole[2];
                p.Prezzo = double.Parse(parole[3]);
                p.Giacenza = int.Parse(parole[4]);

                lista.Add(p);
            }

            return lista;
        }

        public static bool ScriviFileTesto (string path, List<Prodotto> lista)
        {
            try
            {

                StreamWriter sw = new StreamWriter(path);

                // Costruisco la stringa da salvare 
                string txt = "";
                foreach (var p in lista)
                    txt += (txt.Length != 0 ? "\n" : "") + p.ExportCSV();

                // string txt = string.Join("\n", lista);

                sw.Flush();
                sw.Close();

                return true;

            }
            catch (Exception e)
            {
                //e.StackTrace;
            }
            return false;
        }
    }
}
