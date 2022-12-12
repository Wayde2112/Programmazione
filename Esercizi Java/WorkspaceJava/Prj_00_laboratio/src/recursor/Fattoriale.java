package recursor;

public class Fattoriale {

	public static void main(String[] args) {
		
		int x = 0;
		
		System.out.printf("Il fattoriale di %d è: %d", x, fatt(x));

	}

	private static int fattoriale(int x) {
	
		int f = 1;
		int i;
		
		for (i = 1; i <= x; i++) {
			f = f * i;
		}
		
		return f;
	}
	
	private static int fatt(int x) {
		
		if (x == 0)
			return 1;
		else
			return x * fatt(x);
		
	}

}
