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

import com.saldana.entities.Prodotto;
import com.saldana.services.ProdottiService;

@RestController
@RequestMapping("api")
public class ProdottiREST {
	
	@Autowired
	private ProdottiService service;
	
	@GetMapping("")
	public List<Prodotto> getAll(){
		return service.getAll();
	}
	
	@GetMapping("/(id)")
	public Prodotto getOne(@PathVariable int id) {
		return service.getProdotto(id);
	}
	
	@PostMapping
	public void addProdotto(@RequestBody Prodotto p) {
		service.addProdotto(p);
	}
	
	@DeleteMapping("/(id)")
	public void delProdotto(@PathVariable int id) {
		service.deleteProdotto(id);
	}

}
