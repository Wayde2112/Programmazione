using System;
using System.Collections.Generic;
using System.Text;

namespace Magazzino
{
    class ProdottiBiz
    {
        public List<Prodotto> Elenco { get; set; }

        public ProdottiBiz()
        {
            Elenco = new List<Prodotto>();
        }

        public ProdottiBiz(List<Prodotto> elenco)
        {
            Elenco = elenco;
        }

        public Prodotto PrezzoMax() {
                        
            int pos = 0;
            for (int i = 1; i < Elenco.Count; i++)
                if (Elenco[i].Prezzo > Elenco[pos].Prezzo)
                    pos = i;

            return Elenco[pos];        
        }

        public Prodotto RicercaPerCodice(int codice) {

            foreach (var p in Elenco)
                if (p.Codice == codice)
                    return p;
            return null; //prodotto non trovato
        }

        public double ValoreMagazzino() {

            double somma = 0;
            foreach (var p in Elenco)
                somma += p.Prezzo * p.Giacenza;
            return somma;        
        }

        public List<Prodotto> ProdottiInScorta() {

            var lista = new List<Prodotto>();

            foreach (var p in Elenco)
                if (p.IsInScorta())
                    lista.Add(p);
            return lista;
        }
        public List<Prodotto> ProdottiEsauriti()
        {
            var lista = new List<Prodotto>();

            //var => type inference 
            // var i = 12; var => int
            foreach (var p in Elenco)
                if (p.IsEsaurito())
                    lista.Add(p);
            return lista;
        }

        public override string ToString()
        {
            //se nella lista ho p1,p2,p3
            //p1+"\n"+p2+"\n"+p3 

            return string.Join("\n",Elenco);
        }
    }
}
