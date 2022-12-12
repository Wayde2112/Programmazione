package Personal;

import java.io.*;

public class ciao {
    public static void main(String[] args) throws IOException {
        System.out.println("Ciao");
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader buffer = new BufferedReader(input);
        System.out.println("hai appena scritto: " + buffer.readLine());
    }

}