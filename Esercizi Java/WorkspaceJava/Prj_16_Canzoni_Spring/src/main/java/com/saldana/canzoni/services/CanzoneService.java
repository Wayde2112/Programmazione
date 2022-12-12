package com.saldana.canzoni.services;

import java.util.List;

import com.saldana.canzoni.entities.Canzone;

public interface CanzoneService {
	
	// CUD
	Canzone addCanzone(Canzone c);
	Canzone updateCanzone(Canzone c);
	void deleteCanzoneById(int id);
	
	// Read - Retrive
	List<Canzone> getCanzoni();
	Canzone getCanzoneById(int id);
	List<Canzone> getCanzoniByGenere(String genere);
	List<Canzone> getCanzoniByCantante(String cantante);

}
