package com.saldana.ricette.entities;

import javax.annotation.Generated;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name="ricette")
public class Ricetta {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int id;
	private String nome;
	private String ingredienti;
	private String preparazione;
	private String tempo;
	private String difficolta;
	private int energia;
	
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
	public String getIngredienti() {
		return ingredienti;
	}
	public void setIngredienti(String ingredienti) {
		this.ingredienti = ingredienti;
	}
	public String getPreparazione() {
		return preparazione;
	}
	public void setPreparazione(String preparazione) {
		this.preparazione = preparazione;
	}
	public String getTempo() {
		return tempo;
	}
	public void setTempo(String tempo) {
		this.tempo = tempo;
	}
	public String getDifficolta() {
		return difficolta;
	}
	public void setDifficolta(String difficolta) {
		this.difficolta = difficolta;
	}
	public int getEnergia() {
		return energia;
	}
	public void setEnergia(int energia) {
		this.energia = energia;
	}
	
	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Ricetta [id=");
		builder.append(id);
		builder.append(", nome=");
		builder.append(nome);
		builder.append(", ingredienti=");
		builder.append(ingredienti);
		builder.append(", preparazione=");
		builder.append(preparazione);
		builder.append(", tempo=");
		builder.append(tempo);
		builder.append(", difficolta=");
		builder.append(difficolta);
		builder.append(", energia=");
		builder.append(energia);
		builder.append("]");
		return builder.toString();
	}
	
	
}
