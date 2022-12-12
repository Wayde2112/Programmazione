package com.saldana.film.services;

import java.util.List;

import org.springframework.stereotype.Service;

import com.saldana.film.entities.Film;
import com.saldana.film.repos.FilmDAO;

@Service
public class FilmServiceImpl implements FilmService {
	
	private FilmDAO repo;

	@Override
	public void addFilm(Film f) {
		repo.save(f);
	}

	@Override
	public List<Film> getAll() {
		return repo.findAll();
	}

	@Override
	public Film getFilmById(int id) {
		return repo.getById(id);
	}

	@Override
	public void updateFilm(Film f) {
		repo.save(f);
	}

	@Override
	public void deleteFilmById(int id) {
		repo.deleteById(id);
	}

}
