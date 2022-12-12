using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _22_SaldanaMoreno_Esercitazione
{
    class ProgramBiz
    {
        public List<Persona> Persone { get; set; }
        public ProgramBiz()
        {
            Persone = new List<Persona>();
        }
        public ProgramBiz(List<Persona> persone)
        {
            Persone = persone;
        }

        // Task 1)
        public List<Persona> StampaVenditori()
        {
            List<Persona> listaVenditori = new List<Persona>();
            Persone.ForEach(persona =>
            {
                if (persona is ResponsabileVenditori)
                {
                    listaVenditori.Add(persona);
                }
            });
            return listaVenditori;
        }

        // Task 2)
        public List<Meccanico> StampaMeccanici()
        {
            List<Meccanico> meccanici = new List<Meccanico>();
            Persone.ForEach(persona =>
            {
                if (persona is Meccanico)
                    meccanici.Add((Meccanico)persona);
            });
            return meccanici;
        }

        // Task 3)
        public Ordine StampaXOrdine(int codice)
        {
            Ordine ordine = null;
            Persone.ForEach(persona =>
            {
                if (persona is CapoOfficina)
                {
                    CapoOfficina cOfficina = (CapoOfficina)persona;
                    if (cOfficina.CercaOrdine(codice) != null)
                        ordine = cOfficina.CercaOrdine(codice);
                }
            });
            return ordine;
        }

        // Task 4)
        public List<ResponsabileVenditori> StampaResponsabileVenditori()
        {
            List<ResponsabileVenditori> rVenditori = new List<ResponsabileVenditori>();
            Persone.ForEach(persona => {
                if (persona is ResponsabileVenditori)
                    rVenditori.Add((ResponsabileVenditori)persona);
            });
            return rVenditori;
        }

        // Task 5)
        public List<CapoOfficina> StampaCapoOfficina()
        {
            List<CapoOfficina> cOfficina = new List<CapoOfficina>();
            Persone.ForEach(persona => {
                if (persona is CapoOfficina)
                    cOfficina.Add((CapoOfficina)persona);
            });
            return cOfficina;
        }
    }
}
