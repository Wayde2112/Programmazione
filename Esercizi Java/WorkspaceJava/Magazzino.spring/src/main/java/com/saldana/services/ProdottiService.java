package com.saldana.services;

import java.util.List;

import com.saldana.entities.Prodotto;

public interface ProdottiService {
	
	// CRUD
	
	// C
	void addProdotto(Prodotto p);
	
	// R
	List<Prodotto> getAll();
	Prodotto getProdotto(int id);
	
	// U
	void updateProdotto(Prodotto p);
	
	// D
	void deleteProdotto(int id);

}
