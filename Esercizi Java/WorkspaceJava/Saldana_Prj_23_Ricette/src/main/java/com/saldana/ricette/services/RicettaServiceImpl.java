package com.saldana.ricette.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.saldana.ricette.entities.Ricetta;
import com.saldana.ricette.repo.RicettaDAO;

@Service
public class RicettaServiceImpl implements RicettaService {
	
	@Autowired
	private RicettaDAO repo;

	@Override
	public Ricetta getRicettaById(int id) {
		return repo.findById(id).get();
	}

	@Override
	public List<Ricetta> getAll() {
		return repo.findAll();
	}

	@Override
	public Ricetta addRicetta(Ricetta r) {
		return repo.save(r);
	}

}
