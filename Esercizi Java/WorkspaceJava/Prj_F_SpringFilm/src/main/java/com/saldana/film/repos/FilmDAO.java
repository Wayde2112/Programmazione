package com.saldana.film.repos;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.film.entities.Film;

public interface FilmDAO extends JpaRepository<Film, Integer> {

}
