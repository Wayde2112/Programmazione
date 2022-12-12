package model;

public class Libro implements Comparable<Libro> {
	
	private int id;
	private String titolo;
	private double prezzo;
	private int pagine;
	
	public Libro() {
		
	}

	public Libro(int id, String titolo, double prezzo, int pagine) {
		super();
		this.id = id;
		this.titolo = titolo;
		this.prezzo = prezzo;
		this.pagine = pagine;
	}
	
	public int getId() {
		return id;
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

	public int getPagine() {
		return pagine;
	}

	public void setPagine(int pagine) {
		this.pagine = pagine;
	}

	public void setId(int id) {
		this.id = id;
	}

	@Override
	public int compareTo(Libro altro) {
		return this.titolo.compareTo(altro.titolo);
	}
	
	
	
	

}

