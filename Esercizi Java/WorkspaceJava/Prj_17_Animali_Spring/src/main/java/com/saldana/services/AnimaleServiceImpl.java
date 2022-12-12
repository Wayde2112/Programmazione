package com.saldana.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.saldana.entities.Animale;
import com.saldana.dao.AnimaleDAO;

@Service
public class AnimaleServiceImpl implements AnimaliService {
	
	@Autowired
	AnimaleDAO repo;

	@Override
	public Animale addOne(Animale a) {
		return repo.save(a);
	}

	@Override
	public Animale getOneById(int id) {
		return repo.findById(id).get();
	}

	@Override
	public List<Animale> getAll() {
		return repo.findAll();
	}

	@Override
	public List<Animale> getBySpecie(String specie) {
		return repo.findBySpecie(specie);
	}

	@Override
	public List<Animale> getByEta(int etaMin, int etaMax) {
		return repo.findByMesiBetween(etaMin, etaMax);
	}

	@Override
	public List<Animale> getByCattivita(boolean cattivita) {
		return repo.findByNatoInCattivita(cattivita);
	}

	@Override
	public Animale updateOne(Animale a) {
		return repo.save(a);
	}

	@Override
	public void deleteOne(int id) {
		repo.deleteById(id);
	}

}
