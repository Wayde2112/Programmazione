package recursor;

public class Anagramma {

	public static void main(String[] args) {
		
		String s = "piola";
		
		anagramma("", s);

	}

	private static void anagramma(String parola, String resto) {
		
		if (resto.length() == 0)
			System.out.println(parola);
		
		for (int i = 0; i < resto.length(); i++) {
			String nuovaParola = parola + resto.charAt(i);
			String nuovoResto = resto.substring(0, i) + resto.substring(i + 1);
			anagramma(nuovaParola, nuovoResto);
		}
		
	}

}
