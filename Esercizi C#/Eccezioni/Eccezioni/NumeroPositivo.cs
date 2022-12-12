using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Eccezioni
{
    class NumeroPositivo
    {
        public int Numero { get; }

        public NumeroPositivo(int numero)
        {
            if (numero < 0)
                throw new Exception("Operazione non consentita! Hai inserito un numero negativo");
            Numero = numero;
        }

        public override string ToString()
        {
            return $"Hai inserito il numero positivo {Numero}";
        }
    }
}
