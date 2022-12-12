package com.saldana.entities;

import java.sql.Date;
import java.time.LocalDate;

import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToOne;

public class Microchip {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int id;
	private String nome;
	private LocalDate scadenza;
	@OneToOne(fetch = FetchType.LAZY, optional = false)
	@JoinColumn(name = "animale_id", nullable = false)
	private Animale animale;
	
	public Microchip() {}
	
	public Microchip(int id, String nome, LocalDate scadenza, Animale animale) {
		super();
		this.id = id;
		this.nome = nome;
		this.scadenza = scadenza;
		this.animale = animale;
	}

	public Microchip(int i, String string, LocalDate now) {
		// TODO Auto-generated constructor stub
	}

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
	public LocalDate getScadenza() {
		return scadenza;
	}
	public void setData(LocalDate data) {
		this.scadenza = data;
	}
	
	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Microchip [id=");
		builder.append(id);
		builder.append(", nome=");
		builder.append(nome);
		builder.append(", data=");
		builder.append(scadenza);
		builder.append(", getId()=");
		builder.append(getId());
		builder.append(", getNome()=");
		builder.append(getNome());
		builder.append(", getScadenza()=");
		builder.append(getScadenza());
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
