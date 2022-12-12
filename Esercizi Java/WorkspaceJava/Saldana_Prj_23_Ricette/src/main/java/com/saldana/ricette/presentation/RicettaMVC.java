package com.saldana.ricette.presentation;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

import com.saldana.ricette.entities.Ricetta;
import com.saldana.ricette.services.RicettaService;

@Controller
@RequestMapping("")
public class RicettaMVC {
	
	@Autowired
	private RicettaService service;
	
	@GetMapping("ricette")
	@ResponseBody
	public List<Ricetta> getAll() {
		return service.getAll();
	}
	
	@PostMapping("ricette")
	@ResponseBody
	public Ricetta addRicetta(@RequestBody Ricetta r) {
		return service.addRicetta(r);
	}
	
}
