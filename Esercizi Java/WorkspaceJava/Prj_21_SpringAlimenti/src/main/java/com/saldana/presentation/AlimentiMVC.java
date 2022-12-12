package com.saldana.presentation;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

import com.saldana.services.AlimentiService;

@Controller
public class AlimentiMVC {

	@Autowired
	private AlimentiService service;
	
	@GetMapping
	public String getAll(Model m) {
		m.addAttribute("alimenti", service.getAll());
		return "elenco";
	}
	
}
