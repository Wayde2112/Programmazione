package services;

import java.sql.SQLException;
import java.util.Set;

import dal.ScienziatiDAO;
import dal.ScienziatiDAOimpl;
import entities.Scienziato;

public class ScienziatiService {
	
	private ScienziatiDAO repo = new ScienziatiDAOimpl();

	public Set<Scienziato> getAll() {
		try {
			return repo.findAll();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return null;
	}

}
