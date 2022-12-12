package com.saldana.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.saldana.entities.Animale;

@Repository
public interface AnimaleDAO extends JpaRepository<Animale, Integer> {
	
	List<Animale> findBySpecie(String specie);
	List<Animale> findByMesiBetween(int min, int max);
	List<Animale> findByNatoInCattivita(boolean natoInCattivita);

}
