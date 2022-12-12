package com.saldana.entities;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToOne;
import javax.persistence.Table;

@Entity
@Table(name = "animali")

public class Animale {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int id;
	private String nome;
	private String specie;
	private String sesso;
	private int mesi;
	private boolean natoInCattivita;
	@OneToOne(mappedBy = "animale", cascade = CascadeType.ALL, fetch = FetchType.LAZY)
	@JoinColumn(name = "microchip_id", referencedColumnName = "id")
	private Microchip microchip;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getSpecie() {
		return specie;
	}
	public void setSpecie(String specie) {
		this.specie = specie;
	}
	public String getSesso() {
		return sesso;
	}
	public void setSesso(String sesso) {
		this.sesso = sesso;
	}
	public int getMesi() {
		return mesi;
	}
	public void setMesi(int mesi) {
		this.mesi = mesi;
	}
	public boolean isNatoInCattivita() {
		return natoInCattivita;
	}
	public void setNatoInCattivita(boolean natoInCattivita) {
		this.natoInCattivita = natoInCattivita;
	}
	public void setMicrochip(Microchip microchip) {
		this.microchip = microchip;
	}
	public Animale(Microchip microchip) {
		super();
		this.microchip = microchip;
	}
	public Microchip getMicrochip() {
		return microchip;
	}
	public Animale(int id, String nome, String specie, String sesso, int mesi, boolean natoInCattivita) {
		super();
		this.id = id;
		this.nome = nome;
		this.specie = specie;
		this.sesso = sesso;
		this.mesi = mesi;
		this.natoInCattivita = natoInCattivita;
	}
	public Animale() {
		// TODO Auto-generated constructor stub
	}
	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Animale [id=");
		builder.append(id);
		builder.append(", nome=");
		builder.append(nome);
		builder.append(", specie=");
		builder.append(specie);
		builder.append(", sesso=");
		builder.append(sesso);
		builder.append(", mesi=");
		builder.append(mesi);
		builder.append(", natoInCattivita=");
		builder.append(natoInCattivita);
		builder.append(", getId()=");
		builder.append(getId());
		builder.append(", getNome()=");
		builder.append(getNome());
		builder.append(", getSpecie()=");
		builder.append(getSpecie());
		builder.append(", getSesso()=");
		builder.append(getSesso());
		builder.append(", getMesi()=");
		builder.append(getMesi());
		builder.append(", isNatoInCattivita()=");
		builder.append(isNatoInCattivita());
		builder.append(", getClass()=");
		builder.append(getClass());
		builder.append(", hashCode()=");
		builder.append(hashCode());
		builder.append(", toString()=");
		builder.append(super.toString());
		builder.append("]");
		return builder.toString();
	}
	
	

}
