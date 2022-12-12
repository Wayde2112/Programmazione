package patterns;

/**
 * Classe singleton crea e ritorna un'unica istanza dell'oggetto di tipo singleton
 * @author ICTS21-23.096
 *
 */

public class SingleObject {
	
	private static SingleObject istanza = new SingleObject();
	
	private SingleObject() {
		System.out.println("Oggetto singleton costruito");
	}
	
	public static SingleObject getIstanza() {
		return istanza;
	}
	
	public void salutami() {
		System.out.println("Hey, come va?");
	}

}
