package com.saldana.canzoni;

import java.time.LocalDate;

import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

import com.saldana.dao.AnimaleDAO;
import com.saldana.dao.MicrochipDAO;
import com.saldana.entities.Animale;
import com.saldana.entities.Microchip;
import com.saldana.services.AnimaleServiceImpl;
import com.saldana.services.AnimaliService;

@SpringBootTest
class Prj17AnimaliSpringApplicationTests {
	
	@Autowired
	AnimaliService service;
	@Autowired
	AnimaleDAO repoa;
	@Autowired
	MicrochipDAO repom;

	@Test
	void contextLoads() {
		
		Animale a = new Animale();
		Microchip m = new Microchip(1, "123abc", LocalDate.now());
		
		a.setId(500);
		a.setNome("Yuri");
		a.setSpecie("Panda rosso");
		a.setSesso("M");
		a.setMesi(22);
		a.setNatoInCattivita(true);
		a.setMicrochip(m);
		
		service.addOne(a);
		repom.save(m);
		
		
		
//		System.out.println(service.getOneById(1));
		
	}

}
