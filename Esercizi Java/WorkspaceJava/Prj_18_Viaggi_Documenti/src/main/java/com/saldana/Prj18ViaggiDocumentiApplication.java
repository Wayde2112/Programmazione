package com.saldana;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import com.saldana.entities.Documento;
import com.saldana.entities.Viaggio;
import com.saldana.repos.DocumentoDAO;
import com.saldana.repos.ViaggioDAO;

@SpringBootApplication
public class Prj18ViaggiDocumentiApplication {

	public static void main(String[] args) {
		SpringApplication.run(Prj18ViaggiDocumentiApplication.class, args);
	}
	
	@Bean
	public CommandLineRunner eseguiti(DocumentoDAO docRepo, ViaggioDAO viaggioRepo) {
		return a -> {
			
			Viaggio v = new Viaggio("parigi");
			Documento d = new Documento("viaggio.pdf");
			
			d.setViaggio(v);
			v.setDocumento(d);
			docRepo.save(d);
			viaggioRepo.save(v);
			
		};
	}

}
