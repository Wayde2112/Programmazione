package com.saldana.film.services;

import java.util.List;

import com.saldana.film.entities.Film;

public interface FilmService {
	
	// CRUD
	// C
	void addFilm(Film f);
	
	// R
	List<Film> getAll();
	Film getFilmById(int id);
	
	// U
	void updateFilm(Film f);
	
	// D
	void deleteFilmById(int id);

}
