package interfaccia;

import java.io.InputStream;
import java.util.Scanner;

import controller.AgendaCtrl;
import model.Agenda;
import model.ToDo;

public class TrovaToDoList {
    public static void main(String[] args) {

        AgendaCtrl agendaRossa = new AgendaCtrl();

        boolean gira = true;

        while (gira) {

            // 1. Mostrare un menu di scelta
            menu();

            // 2. Leggere la scelta utente
            String scelta = chiediUnaStringa("Scegli tra le opzioni proposte");

            switch (scelta) {

                case "a":
                    // A. Aggiungere un nuovo ToDo all'elenco
                    String descrizione = chiediUnaStringa("Aggiungi la descrizione del ToDo");
                    int pos = chiediUnIntero("Inserisci un numero intero per la posizione della nota");
                    agendaRossa.addToDo(descrizione, 0);
                    break;

                case "b":
                    // B. Modificare un ToDo dell'elenco
                    System.out.println("Mi dispiace ma non posso farlo");
                    break;

                case "c":
                    // C. Stampare l'elenco
                    System.out.println(agendaRossa.printToDo());
                    break;

                case "d":
                    // D. Uscire dal programma
                    System.out.println("Arrivederci");
                    gira = false;
                    break;

                default:
                    break;
            }

        }

        System.out.println("Grazie per aver utilizzato il nostro programma");

    }

    // Funzione per chiedere la posizione di inserimento
    private static int chiediUnIntero(String domanda) {
        int pos = 0;

        System.out.println(domanda);
        Scanner sc = new Scanner(System.in);
        pos = sc.nextInt();

        return pos;
    }

    // Menù
    private static void menu() {

        System.out.println("----------------------");
        System.out.println("A) Per aggiungere un nuovo ToDo");
        System.out.println("B) Per modificare un ToDo");
        System.out.println("C) Per stampare la lista dei ToDo");
        System.out.println("D) Per uscire dal programma");
        System.out.println("----------------------");

    }

    // Funzione per chiedere la stringa
    private static String chiediUnaStringa(String domanda) {

        System.out.println(domanda);

        Scanner sc = new Scanner(System.in);
        String descrizione = sc.nextLine();

        return descrizione;
    }
}
