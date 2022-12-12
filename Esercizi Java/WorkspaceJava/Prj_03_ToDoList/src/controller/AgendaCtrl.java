package controller;

import model.Agenda;
import model.ToDo;

public class AgendaCtrl {

    public Agenda agenda = new Agenda();

    public void addToDo(String descrizione, int posizione) {

        ToDo t = new ToDo();
        t.descrizione = descrizione;
        t.fatto = false;

        agenda.coseDaFare[posizione] = t;

    }

    public String printToDo() {

        String risultato = "";

        for (ToDo t : agenda.coseDaFare) {

            if (t != null) {
                risultato += t.stampa();
                risultato += "\n";
            }
        }
        return risultato;
    }
}
