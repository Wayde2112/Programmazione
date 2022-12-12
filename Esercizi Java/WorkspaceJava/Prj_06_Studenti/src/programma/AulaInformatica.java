package programma;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class AulaInformatica {

    public static void main(String[] args) {

        Studente[] elencoStudenti = leggiFile();
        Registro r = new Registro(elencoStudenti);

        int presenti = r.faiAppello();

    }

    private static Studente[] leggiFile() {

        Studente[] studenti = new Studente[30];
        File f = new File("Files/studenti.txt");

        // Gestisce l'eccezzione fnf
        try {
            // Crea uno scanner e collega il file
            Scanner sc = new Scanner(f);
            int i = 0;

            // Scorre il file finche' ci sono righe
            while (sc.hasNextLine()) {

                // Legge la singola riga
                String riga = sc.nextLine();
                // Spezza la riga in 2
                String[] paroleDellaRiga = riga.split(", ");
                // Memorizza in nome la prima parte
                String nome = paroleDellaRiga[0];
                // Memorizza in cognome la seconda parte
                String cognome = paroleDellaRiga[1];
                // Attribuisce una matricola
                int nMatricola = i;

                Studente s = new Studente(nMatricola, nome, cognome);

                // Add Studente alla collzione
                studenti[i] = s;
                i++;

                System.out.println(s.stampa());
            }

        } catch (FileNotFoundException e) {
            System.err.println("Mi dispiace, non ho trovato il file");
        }
        return studenti;
    }
}
