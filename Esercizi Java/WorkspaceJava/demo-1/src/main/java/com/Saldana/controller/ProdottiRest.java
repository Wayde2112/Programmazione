package com.Saldana.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RequestMapping("api")
@RestController

public class ProdottiRest {
	
	@GetMapping("tutti")
	public String getAll() {
		return "ciao";
	}

}
