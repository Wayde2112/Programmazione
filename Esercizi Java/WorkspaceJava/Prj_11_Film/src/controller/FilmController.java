package controller;

import java.util.ArrayList;
import java.util.List;

import model.Film;

public class FilmController {
	
	private static List<Film> magazzino = new ArrayList<Film>();
	
//	Depence injection
	public static void addFilm(Film f) {
		
		magazzino.add(f);
		
	}
	
	public static void addFilm(int codice, String titolo, double prezzo, List<String> genere) {
		
		Film f = new Film(codice, titolo, prezzo, genere);		
		magazzino.add(f);
		
	}
	
	public Film getFilmByCodice(int codice) {
		
		for (Film film : magazzino) {
			if (film.getCodice() == codice) 
				return film;
		}
		return null;
	}
	
	public static List<Film> getAll() {
		
		return magazzino;		
	}

}
