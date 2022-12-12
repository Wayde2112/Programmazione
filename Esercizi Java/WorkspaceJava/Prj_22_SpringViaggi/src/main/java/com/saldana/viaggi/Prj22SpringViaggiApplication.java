package com.saldana.viaggi;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import com.saldana.viaggi.entities.Documento;
import com.saldana.viaggi.entities.Viaggio;
import com.saldana.viaggi.repos.DocumentoDAO;
import com.saldana.viaggi.repos.ViaggioDAO;

@SpringBootApplication
public class Prj22SpringViaggiApplication {

	public static void main(String[] args) {
		SpringApplication.run(Prj22SpringViaggiApplication.class, args);
	}
	
	@Bean
	public CommandLineRunner demo(ViaggioDAO repoViaggi, DocumentoDAO repoDocumenti) {
		
		return pippo -> {
			
			String[] viaggi = {
					
					"ALLA SCOPERTA QUARTIERI PIÙ PITTORESCHI E SUGGESTIVI DI PARIGI",
					"TRE GIORNI IN BICICLETTA TRA I MERAVIGLIOSI PANORAMI DELLA PUSTERIA",
					"FANTASTICO TOUR TRA LE MERAVIGLIE DELL’ISOLA DI SMERALDO",
					"INFIORATA DI SPELLO E RIEVOCAZIONE DELLE “GAITE” DI BEVAGNA",
					"SOGGIORNO CON ESCURSIONI IN WELLNESS HOTEL 3*S A MALOSCO (TN)",
					"SOGGIORNO CON ESCURSIONI IN WELLNESS HOTEL 3*S A NAZ (BZ)",
					"VIAGGIO + SOGGIORNO IN VILLAGGIO 4* AL MARE IN ALL INCLUSIVE CON ESCURSIONI",	
					"SPLENDIDO GARGANO"
					
			};
			
			for (String viaggio : viaggi) {
				
				Viaggio v = new Viaggio();
				v.setDestinazione(viaggio);
				
				Documento d = new Documento();
				d.setPercorso("locandina.pdf");
				
				v.setDocumento(d);
				d.setViaggio(v);
				
				repoViaggi.save(v);
			}
			
			
//			repoDocumenti.save(d);
			
		};
		
	}

}
