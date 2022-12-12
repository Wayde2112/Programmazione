using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseMessaggio
{
    enum Priorita
    {
        NORMALE, BASSA, ALTA
    }
    class Email
    {
        public Email(string a, string dA, string oggetto, string messaggio)
        {
            A = a;
            DA = dA;
            Oggetto = oggetto;
            Messaggio = messaggio;
        }

        public string A { get; set; }
        public string DA { get; set; }
        public string CC { get; set; }
        public string CCN { get; set; }
        public string Oggetto { get; set; }
        public string Messaggio { get; set; }
        public Priorita Priorita { get; set; }


    }
}
