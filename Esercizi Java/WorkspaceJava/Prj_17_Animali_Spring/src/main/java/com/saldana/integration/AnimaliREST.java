package com.saldana.integration;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.saldana.entities.Animale;
import com.saldana.services.AnimaliService;

@RestController
@RequestMapping("api")
public class AnimaliREST {
	
	@Autowired
	AnimaliService service;
	
	@GetMapping("animali")
	public List<Animale> getAll() {
		return service.getAll();
	}
	
	@PostMapping("animali")
	public Animale addAnimale(@RequestBody Animale a) {
		return service.addOne(a);
	}

}
