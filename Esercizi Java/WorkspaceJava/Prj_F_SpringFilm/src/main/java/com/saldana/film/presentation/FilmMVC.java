package com.saldana.film.presentation;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import com.saldana.film.services.FilmService;

@Controller
@RequestMapping("mvc")
public class FilmMVC {
	
	@Autowired
	private FilmService service;
	
	@GetMapping("film")
	public String getAll(Model m) {
		m.addAttribute("listafilm", service.getAll());
		m.addAttribute("titolo", "I film imperdibili del 2021");
		return "elenco";
	}

}
