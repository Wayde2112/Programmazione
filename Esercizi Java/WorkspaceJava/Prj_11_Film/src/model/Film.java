package model;

import java.util.List;

public class Film {
	
	private int codice;
	private String titolo;
	private double prezzo;
	private List<String> genere;
	
	/**
	 * Costruttore
	 * @param codice
	 * @param titolo
	 * @param prezzo
	 * @param genere
	 */
	
	public Film(int codice, String titolo, double prezzo, List<String> genere) {
		
		this.codice = codice;
		this.titolo = titolo;
		this.prezzo = prezzo;
		this.genere = genere;
		
	}

	public int getCodice() {
		return codice;
	}

	public void setCodice(int codice) {
		this.codice = codice;
	}

	public String getTitolo() {
		return titolo;
	}

	public void setTitolo(String titolo) {
		this.titolo = titolo;
	}

	public double getPrezzo() {
		return prezzo;
	}

	public void setPrezzo(double prezzo) {
		this.prezzo = prezzo;
	}

	public List<String> getGenere() {
		return genere;
	}

	public void setGenere(List<String> genere) {
		this.genere = genere;
	}

	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Film [codice=");
		builder.append(codice);
		builder.append(", titolo=");
		builder.append(titolo);
		builder.append(", prezzo=");
		builder.append(prezzo);
		builder.append(", genere=");
		builder.append(genere);
		builder.append("]");
		return builder.toString();
	}
	
	
	
	
	

}
