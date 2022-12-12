package funzionale;

import java.util.List;

public class Regione {
	
	String nome;
	List<String> comuni;
	int popolazione;
	
	public Regione(String nome, List<String> comuni, int popolazione) {
		super();
		this.nome = nome;
		this.comuni = comuni;
		this.popolazione = popolazione;
	}
	
	public String stampa() {
		return nome + ": " + popolazione;
	}
	
	

}
