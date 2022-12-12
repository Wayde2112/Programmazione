package com.saldana.integration;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.saldana.entities.Alimento;
import com.saldana.services.AlimentiService;

/*
 * l'elenco delle categorie con l'indicazione delle quantità di alimenti afferenti a tale categoria;
	l'elenco degli alimenti data una categoria
	l'elenco degli alimenti data una parola contenuta nel nome alimento
	il singolo alimento dato l'id
	il singolo alimento dato il nome

 */

@RestController
@RequestMapping("api")
public class AlimentiREST {
	
	@Autowired
	private AlimentiService service;
	
	@GetMapping("")
	public List<Alimento> getAll() {
		return service.getAll();
	}
	
	@GetMapping("/{id}")
	public Alimento getOne(@PathVariable int id) {
		return service.getAlimento(id);
	}
	
	@GetMapping("categorie")
	public List<String> getCategorie() {
		return service.getAll().stream().map(a -> a.getCategoria()).distinct().sorted().toList();
	}
	
	@GetMapping("categorie/{categoria}")
	public List<Alimento> getCategoria(@PathVariable String categoria) {
		return service.getAll().stream().filter(a -> a.getCategoria().equalsIgnoreCase(categoria)).toList();
	}
	
	@GetMapping("alimenti/{alimento}")
	public List<Alimento> getAlimentoByNome(@PathVariable String alimento) {
		return service.getAll().stream().filter(a -> a.getProdotto().contains(alimento)).toList();
	}
	
	@PostMapping
	public void addAlimento(@RequestBody Alimento a) {
		service.addAlimento(a);
	}
	
	@DeleteMapping("/(id)")
	public void deleteAlimento(@PathVariable int id) {
		service.deleteAlimento(id);
	}

}
