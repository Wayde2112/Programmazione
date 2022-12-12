package model;

public class Studente {

    static int contatore = 1;

    int nMatricola;
    String nome;
    String cognome;

    public Studente(String nomeStudente, String cognomeStudente) {

        nome = nomeStudente;
        cognome = cognomeStudente;

        nMatricola = contatore++;
    }

    String presentaStudente() {

        String temp = nMatricola + ") "
                + nome.toUpperCase() + " "
                + cognome.toUpperCase();

        return temp;

    }
}
