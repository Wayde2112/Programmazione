package gioco;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

public class DemoGioco {

    public static void main(String[] args) {

        // Gioco g1 = new Gioco("Pokemon UltraSole", "rpf", 49.99);
        // Gioco g2 = new Gioco("Super Mario galaxy 2", "platform", 59.99);
        //
        // System.out.println(g1.prezzo);
        // System.out.println(g2);

        Gioco[] giochi = Estrattore.estraiFile();

        try {
            PrintStream output = new PrintStream(new File("proprieta.txt"));

            output.println(("qualcosa"));

            output.close();

        } catch (FileNotFoundException e) {

            e.printStackTrace();
        }

        for (Gioco gioco : giochi) {
            System.out.println(gioco);
        }
    }

}
