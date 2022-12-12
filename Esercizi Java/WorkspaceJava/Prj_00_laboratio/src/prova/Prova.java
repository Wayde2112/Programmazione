package prova;

import java.util.ArrayList;

public class Prova {

	public static void main(String args[]) {
		
		int a = 10; 
		int b = 0; 
		try { 
			int c = a/b;
			System.out.println(c);
		} catch (ArithmeticException exc) { 
			System.out.println("Divisione per zero"); 
		} catch (NullPointerException exc) { 
			System.out.println("Reference nullo..."); 
		} catch (Exception exc) { System.out.println("Eccezione generica..."); 
		} finally { System.out.println("Finally!"); 
		}
	}
	public static class Classe {}
	
	
}
