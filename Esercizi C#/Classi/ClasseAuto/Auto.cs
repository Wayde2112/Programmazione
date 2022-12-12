using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClasseAuto
{
    enum Alimentazione
    {
        BENZINA, DIESEL, GPL, METANO
    }
    class Auto
    {
        // Proprietà
        public string Marca { get; set; }
        public string Modello { get; set; }
        public int Cilindrata { get; set; }
        public Alimentazione Alimentazione { get; set; }
        public string Colore { get; set; }
        public int Velocita { get; set; }

        // Metodi
        public int Menu()
        {
            int scelta = -1;
            Console.WriteLine("\t\tMenu' azioni auto");
            Console.WriteLine("1) Accelerare");
            Console.WriteLine("2) Frenare");
            Console.WriteLine("0) Esci");
            Console.WriteLine("\t\tScelta: ");
            scelta = Convert.ToInt32(Console.ReadLine());

            return scelta;
        }
        public int CalcolaVelocitaMax()
        {
            int vMax = Cilindrata / 10;
            switch (Alimentazione)
            {
                case Alimentazione.BENZINA: vMax += 30;
                    break;
                case Alimentazione.DIESEL: vMax += 20;
                    break;
                case Alimentazione.GPL: vMax += 10;
                    break;
                case Alimentazione.METANO: vMax += -30;
                    break;
                default:
                    break;
            }
            return vMax;
        }

        /* 
            Accelera v + 10km/h
            Frena v - 5km/h
            se è ferma non frena
            non può superare la sua velocità massima
            se arriva ai 110km/h deve rallentare "Rallenta! Stai andando troppo forte!
            la velocità attuale è di 50km/h
            la velocità non può essere negativa
            uso di menu testuale
        */

        public void Accelera()
        {
            if (Velocita + 10 > CalcolaVelocitaMax())
                Velocita += 10;
            else 
                Velocita = CalcolaVelocitaMax();
        }
        public void Frena()
        {
            if (Velocita - 5 < 0)
                Velocita -= 5;
            else 
                Velocita = 0;
        }
        public string Messaggio()
        {
            return (Velocita >= 110 ? "Rallenta! Stai andando troppo forte!" : "");
        }

        public override string ToString()
        {
            return "Marca: " + Marca
                + "\nModello: " + Modello
                + "\nCilindrata: " + Cilindrata
                + "\nAlimentazione: " + Alimentazione
                + "\nColore: " + Colore
                + "\nVelocita Massima: " + CalcolaVelocitaMax();
        }


    }
}
