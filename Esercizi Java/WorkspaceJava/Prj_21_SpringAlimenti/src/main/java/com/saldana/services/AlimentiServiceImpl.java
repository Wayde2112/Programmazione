package com.saldana.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.saldana.entities.Alimento;
import com.saldana.repo.AlimentiDAO;

@Service
public class AlimentiServiceImpl implements AlimentiService {
	
	@Autowired
	private AlimentiDAO repo;

	@Override
	public void addAlimento(Alimento a) {
		repo.save(a);

	}

	@Override
	public List<Alimento> getAll() {
		return repo.findAll();
	}

	@Override
	public Alimento getAlimento(int id) {
		return repo.findById(id).get();
	}

	@Override
	public void updateAlimento(Alimento a) {
		repo.save(a);
	}

	@Override
	public void deleteAlimento(int id) {
		repo.deleteById(id);

	}

}
