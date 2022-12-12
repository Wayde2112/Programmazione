package com.saldana.viaggi.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.saldana.viaggi.entities.Viaggio;
import com.saldana.viaggi.repos.ViaggioDAO;

@Service
public class ViaggioServiceImpl implements ViaggioService {
	
	@Autowired
	private ViaggioDAO repo;

	@Override
	public Viaggio addViaggio(Viaggio v) {
		return repo.save(v);
	}

	@Override
	public List<Viaggio> getViaggi() {
		return repo.findAll();
	}

}
