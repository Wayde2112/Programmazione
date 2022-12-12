using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
    4) ResponsabileVenditori eredita da Venditore con
    proprietà: Venditori che serve a contenere i venditori di cui è responsabile
    metodi: AggiungiVenditore(Venditore venditore) che aggiunge in coda alla lista un venditore, 
            RestituisciVenditore(int index) che mi restituisce il venditore alla posizione index, 
            CancellaVenditore(int index) che mi cancella il venditore alla posizione index, 
            Tredicesima che restituisce il doppio dello stipendio più un bonus del 15% della tariffa giornaliera per ogni venditore di cui è responsabile, 
            ToString
*/

namespace _22_SaldanaMoreno_Esercitazione
{
    class ResponsabileVenditori : Venditore
    {
        public List<Venditore> Venditori { get; set; }
        
        public ResponsabileVenditori(string nome, string cognome, double stipendio, string settore) : base(nome, cognome, stipendio, settore)
        {
            Venditori = new List<Venditore>();
        }
        public ResponsabileVenditori(string nome, string cognome, double stipendio, string settore, List<Venditore> venditori) : base(nome, cognome, stipendio, settore)
        {
            Venditori = venditori;
        }
        public void AggiungiVenditore(Venditore venditore)
        {
            Venditori.Add(venditore);
        }
        public Venditore RestituisciVenditore(int index)
        {
            return Venditori.ElementAt(index);
        }
        public void CancellaVenditore(int index)
        {
            Venditori.Remove(RestituisciVenditore(index));
        }
        public override double Tredicesima()
        {
            double tredicesima = 0;
            Venditori.ForEach(venditore => tredicesima += venditore.TariffaGiornaliera() * 0.15);
            return tredicesima + Stipendio * 2;
        }

        public override string ToString()
        {
            return base.ToString() +
                $"\nTredicesima = {Tredicesima()}" +
                $"\nResponsabile dei venditori: \n{{\n{string.Join("\n\n", Venditori)}\n}}\n";
        }
    }
}
