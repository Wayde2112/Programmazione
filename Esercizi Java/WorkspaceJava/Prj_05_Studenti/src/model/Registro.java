package model;

public class Registro {

    public static void main(String[] args) {

        /*
         * Studente s1 = new Studente();
         * s1.nMatricola = 1;
         * s1.nome = "Alex";
         * s1.cognome = "Aimino";
         */

        Studente s1 = new Studente("Alex", "Aimino");
        System.out.println(s1.presentaStudente());

        Studente s2 = new Studente("Alberto", "Alineri");
        System.out.println(s2.presentaStudente());
    }

}
