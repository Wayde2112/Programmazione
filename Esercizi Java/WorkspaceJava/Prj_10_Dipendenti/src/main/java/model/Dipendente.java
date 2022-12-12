package model;

public abstract class Dipendente {
	
	private static int contatore = 1; // Appartiene alla classe
	private int nMatr; // Appartiene agli oggetti di tipo Dipendente
	
	protected String nome;
	protected String ruolo;
	
	public Dipendente(String nome) {
		this.nMatr = contatore++;
		this.nome = nome;
	}
	
	public abstract double calcolaStipendio();

	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Dipendente [nMatr=");
		builder.append(nMatr);
		builder.append(", nome=");
		builder.append(nome);
		builder.append(", ruolo=");
		builder.append(ruolo);
		builder.append(", calcolaStipendio()=");
		builder.append(calcolaStipendio());
		builder.append("]");
		return builder.toString();
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getRuolo() {
		return ruolo;
	}

	public void setRuolo(String ruolo) {
		this.ruolo = ruolo;
	}

	public int getnMatr() {
		return nMatr;
	}

	
	
}
