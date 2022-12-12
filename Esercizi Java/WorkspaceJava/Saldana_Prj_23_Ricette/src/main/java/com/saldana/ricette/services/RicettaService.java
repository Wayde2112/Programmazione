package com.saldana.ricette.services;

import java.util.List;

import com.saldana.ricette.entities.Ricetta;

public interface RicettaService {
	
	Ricetta getRicettaById(int id);
	List<Ricetta> getAll();
	
	Ricetta addRicetta(Ricetta r);

}
