package com.saldana.services;

import java.util.List;

import org.springframework.stereotype.Service;

import com.saldana.entities.Prodotto;
import com.saldana.repo.ProdottoDAO;

@Service
public class ProdottiServiceImpl implements ProdottiService {
	
	private ProdottoDAO repo;

	@Override
	public void addProdotto(Prodotto p) {		
		repo.save(p);
	}

	@Override
	public List<Prodotto> getAll() {
		return repo.findAll();
	}

	@Override
	public Prodotto getProdotto(int id) {
		return repo.getById(id);
	}

	@Override
	public void updateProdotto(Prodotto p) {
		repo.save(p);

	}

	@Override
	public void deleteProdotto(int id) {
		repo.deleteById(id);

	}

}
