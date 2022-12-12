package com.saldana.film;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import com.saldana.film.entities.Film;
import com.saldana.film.repos.FilmDAO;

@SpringBootApplication
public class PrjFSpringFilmApplication {

	public static void main(String[] args) {
		SpringApplication.run(PrjFSpringFilmApplication.class, args);
	}
	
	@Bean
	public CommandLineRunner demo(FilmDAO repoFilm) {
		
		return pippo -> {
			
			String[] films = {
					
					"Notizie dal mondo",
					"Godzilla vs Kong"					
			};
			
			for (String film : films) {
				
				Film f = new Film();
				f.setTitolo(film);
				
				repoFilm.save(f);
			}
		};
	
	}

}
