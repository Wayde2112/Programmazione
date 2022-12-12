package com.saldana.film.integration;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.saldana.film.entities.Film;
import com.saldana.film.services.FilmService;

@RestController
@RequestMapping("api")
public class FilmREST {
	
	@Autowired
	private FilmService service;
	
	@GetMapping("")
	public List<Film> getAll() {
		return service.getAll();
	}
	
	@GetMapping("/(id)")
	public Film getOne(@PathVariable int id) {
		return service.getFilmById(id);
	}
	
	@PostMapping
	public void addFilm(@RequestBody Film a) {
		service.addFilm(a);
	}
	
	@DeleteMapping("/(id)")
	public void deleteFilm(@PathVariable int id) {
		service.deleteFilmById(id);
	}

}
