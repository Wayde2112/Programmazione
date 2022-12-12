package controller;

import java.util.ArrayList;
import java.util.List;

import model.Dipendente;
import model.Dirigente;
import model.Fattorino;
import model.Impiegato;

public class LibroMatricola implements LibroInterface {
	
	private static List<Dipendente> dipendenti = new ArrayList<>();

	@Override
	public void addDipendente(Dipendente d) {
		dipendenti.add(d);
		
	}

	@Override
	public void addDipendente(String nome, String ruolo) {
		
		Dipendente d = null;
		switch (ruolo) {
			case "Impiegato":
				d = new Impiegato(nome);
				break;
			case "Dirigente":
			d = new Dirigente(nome);
			break;
			case "Fattorino":
			d = new Fattorino(nome);
			break;
		}
		dipendenti.add(d);
		
	}

	@Override
	public Dipendente getDipendenteById(int id) {
		
		Dipendente d = null;
		
		for (Dipendente dipendente : dipendenti) {
			if (dipendente.getnMatr() == id)
				return dipendente;
		}
		
		return d;
	}

	@Override
	public List<Dipendente> getAll() {
		
		return null;
	}
	
	

}
