package com.saldana.services;

import java.util.List;

import com.saldana.entities.Animale;

public interface AnimaliService {
	
	// CRUD
	
	// Create
	Animale addOne(Animale a);
	
	// Read
	Animale getOneById(int id);
	List<Animale> getAll();
	List<Animale> getBySpecie(String specie);
	List<Animale> getByEta(int etaMin, int etaMax);
	List<Animale> getByCattivita(boolean cattivita);
	
	//Update
	Animale updateOne(Animale a);
	
	// Delete
	void deleteOne(int id);

}
