package com.saldana.film.entities;

import javax.annotation.Generated;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name = "film")
public class Film {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int id;
	private String titolo;
	private String descrizione;
	private String genere;
	private int annoPubblicazione;
	private int durata;
	private int regista;
	private int cast;
	private String trama;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getTitolo() {
		return titolo;
	}
	public void setTitolo(String titolo) {
		this.titolo = titolo;
	}
	public String getDescrizione() {
		return descrizione;
	}
	public void setDescrizione(String descrizione) {
		this.descrizione = descrizione;
	}
	public String getGenere() {
		return genere;
	}
	public void setGenere(String genere) {
		this.genere = genere;
	}
	public int getAnnoPubblicazione() {
		return annoPubblicazione;
	}
	public void setAnnoPubblicazione(int annoPubblicazione) {
		this.annoPubblicazione = annoPubblicazione;
	}
	public int getDurata() {
		return durata;
	}
	public void setDurata(int durata) {
		this.durata = durata;
	}
	public int getRegista() {
		return regista;
	}
	public void setRegista(int regista) {
		this.regista = regista;
	}
	public int getCast() {
		return cast;
	}
	public void setCast(int cast) {
		this.cast = cast;
	}
	public String getTrama() {
		return trama;
	}
	public void setTrama(String trama) {
		this.trama = trama;
	}
	
	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder();
		builder.append("Film [id=");
		builder.append(id);
		builder.append(", titolo=");
		builder.append(titolo);
		builder.append(", descrizione=");
		builder.append(descrizione);
		builder.append(", genere=");
		builder.append(genere);
		builder.append(", annoPubblicazione=");
		builder.append(annoPubblicazione);
		builder.append(", durata=");
		builder.append(durata);
		builder.append(", regista=");
		builder.append(regista);
		builder.append(", cast=");
		builder.append(cast);
		builder.append(", trama=");
		builder.append(trama);
		builder.append("]");
		return builder.toString();
	}

}
