package view;

import java.sql.SQLException;

import dal.LibroDAO;
import dal.LibroDAOimpl;
import model.Libro;

public class LibreriaDemo {

	public static void main(String[] args) {
		
		LibroDAO repo = new LibroDAOimpl();
		
		repo.addLibro(new Libro(0, "I malavoglia", 12, 123));
		repo.addLibro(new Libro(0, "I promessi sposi", 15, 223));
		
		try {
			repo.getAll()
				.stream()
				.forEach(l -> System.out.println(l.getTitolo()));
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
