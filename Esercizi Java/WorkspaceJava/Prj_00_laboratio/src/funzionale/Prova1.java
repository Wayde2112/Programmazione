package funzionale;

import java.util.Iterator;

public class Prova1 {

	public static void main(String[] args) {
		
		int i, j;
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 1 + i; j++) {
				System.out.print("* ");
			}
			System.out.println("\n");
		}

	}

}
