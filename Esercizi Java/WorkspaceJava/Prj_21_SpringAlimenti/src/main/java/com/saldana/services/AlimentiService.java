package com.saldana.services;

import java.util.List;

import com.saldana.entities.Alimento;

public interface AlimentiService {
	
	// CRUD
	// C
	void addAlimento(Alimento a);
	
	// R
	List<Alimento> getAll();
	Alimento getAlimento(int id);
	
	// U
	void updateAlimento(Alimento a);
	
	// D
	void deleteAlimento(int id);
	
	

}
