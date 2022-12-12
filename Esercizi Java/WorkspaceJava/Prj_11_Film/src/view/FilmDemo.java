package view;

import java.util.Arrays;
import java.util.List;

import controller.FilmController;
import model.Film;

public class FilmDemo {

	public static void main(String[] args) {
		
		Film f = new Film(1, "Space Jam", 4.99, Arrays.asList("Animazione", "Sportivo"));
		
		FilmController.addFilm(f);
		
//		System.out.println(f);
		
		List<Film> anime = Arrays.asList(
				f, 
				new Film(1, "Roger Rabbit", 5.99, Arrays.asList("Animazione", "Commedia")),
				new Film(2, "Berserk", 6.99, Arrays.asList("Animazione", "Horror")),
				new Film(3, "Baki", 7.99, Arrays.asList("Animazione", "Arti Marziali"))
		);
		
		for (Film film : anime) {
			FilmController.addFilm(film);
		}
		
		for (Film film : FilmController.getAll()) {
			System.out.println(film);
		}
		
	}

}
