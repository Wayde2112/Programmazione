using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    5) CapoOfficina eredita da Meccanico con
    proprietà: Ordini lista di tipo Ordine.
    metodi: AggiungiOrdine(Ordine ordine, int index), 
    NoOrdini che restituisce il numero di ordini che sono stati inseriti; 
    Tredicesima che ridefinisce il metodo e restituisce il doppio dello stipendio 
    più il 5% dell’importo di ogni ordine da gestire, 
    ToString
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class CapoOfficina : Meccanico 
    {
        public List<Ordine> Ordini { get; set; }
        
        public CapoOfficina(string nome, string cognome, double stipendio, string tipologia) : base(nome, cognome, stipendio, tipologia)
        {
            Ordini = new List<Ordine>();
        }
        public CapoOfficina(string nome, string cognome, double stipendio, string tipologia, List<Ordine> ordini) : base(nome, cognome, stipendio, tipologia)
        {
            Ordini = ordini;
        }
        public void AggiungiOrdine(Ordine ordine, int index)
        {
            Ordini.Insert(index, ordine);
        }
        public int NoOrdini()
        {
            return Ordini.Count;
        }
        public override double Tredicesima()
        {
            double tredicesima = 0;
            Ordini.ForEach(ordine => tredicesima += (ordine.Totale()) * 0.05);
            return tredicesima + Stipendio * 2;
        }
        public Ordine CercaOrdine(int i)
        {
            return Ordini.Find(ordine => ordine.IdOrdine == i);
        }
        public string DettaglioCapoOfficina()
        {
            return $"Nome={Nome}\n" +
                $"Cognome={Cognome}\n" +
                $"Stipendio={Stipendio}\n" +
                $"Tredicesima={Tredicesima()}\n" +
                $"Ordini = \n{{\n{string.Join("\n\n", Ordini)}\n}}\n";
        }
        public override string ToString()
        {
            return base.ToString() +
                $"\nOrdini = \n{string.Join("\n\n", Ordini)}\n";
        }
    }
}
