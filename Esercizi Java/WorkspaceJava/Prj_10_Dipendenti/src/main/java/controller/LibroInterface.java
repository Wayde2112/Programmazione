package controller;

import java.util.List;

import model.Dipendente;

public interface LibroInterface {
	
	// Implictamente public e astract
	void addDipendente(Dipendente d);
	void addDipendente(String nome, String ruolo);
	
	Dipendente getDipendenteById(int id);
	List<Dipendente> getAll();

}
