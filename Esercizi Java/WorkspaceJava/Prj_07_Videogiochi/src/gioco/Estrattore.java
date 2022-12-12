package gioco;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.NumberFormat;
import java.util.Scanner;

public class Estrattore {

    public static Gioco[] estraiFile() {

        Gioco[] giochi = null;

        // 1. Leggi file riga per riga
        File f = new File("Giochi.txt");
        try {

            Scanner sc = new Scanner(f);

            int i = extracted(f);
            giochi = new Gioco[i];

            i = 0;
            while (sc.hasNextLine()) {

                // 2. Per ogni riga splitto la riga in 2 parti
                String riga = sc.nextLine();
                String[] pezzi = riga.split(";");

                // 3. Assegno la prima stringa al nome, la seconda al genere
                String nome = pezzi[0];
                String genere = pezzi[1];

                // 4. Creo un prezzo random
                double prezzo = Math.random() * 100;

                // 5. Costruisco l'oggetto di tipo gioco
                Gioco g = new Gioco(nome, genere, prezzo);
                System.out.println(g);

                // 6. Metto l'oggetto nell'aray di giochi
                giochi[i++] = g;
            }

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        // 7. Ritorno l'array di giochi
        return giochi;

    }

    private static int extracted(File f) {

        int i = 0;
        try {

            Scanner sc = new Scanner(f);

            while (sc.hasNextLine()) {

                sc.nextLine();
                i++;
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        return i;

    }

}
