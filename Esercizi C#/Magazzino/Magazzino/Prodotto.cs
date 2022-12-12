using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Magazzino
{
    class Prodotto
    {
        public int Codice { get; set; }
        public string Nome { get; set; }
        public string Descrizione { get; set; }
        public double Prezzo { get; set; }
        public int Giacenza { get; set; }

        public bool IsProdottoInScorta()
        {
            return Giacenza > 0 && Giacenza < 10;
        }

        public void ProdottoInScorta(List<Prodotto> lista)
        {
            
            foreach (var p in lista)
                if (p.IsProdottoInScorta())
                    Console.WriteLine(p);
            
        }

        public bool IsProdottoEsaurito()
        {
            return Giacenza == 0;
        }

        public void ProdottoEsaurito(List<Prodotto> lista)
        {
            foreach (var p in lista)
                if (p.IsProdottoEsaurito())
                    Console.WriteLine(p);
        }
        public string ExportCSV()
        {
            return Codice + ";"
                + Nome + ";"
                + Descrizione
                + ";" + Prezzo
                + ";" + Giacenza;
        }

        public void PrezzoMaggiore(List<Prodotto> lista)
        {
            foreach (var p in lista)
                if (p.Prezzo > p.Prezzo)
                    Console.WriteLine(p);
        }

        public override string ToString()
        {
            return $"{{{nameof(Codice)}={Codice.ToString()}, {nameof(Nome)}={Nome}, {nameof(Descrizione)}={Descrizione}, {nameof(Prezzo)}={Prezzo.ToString()}, {nameof(Giacenza)}={Giacenza.ToString()}}}";
        }
    }
}
