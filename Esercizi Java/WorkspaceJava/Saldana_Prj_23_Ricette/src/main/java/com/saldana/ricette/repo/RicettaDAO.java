package com.saldana.ricette.repo;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.ricette.entities.Ricetta;

public interface RicettaDAO extends JpaRepository<Ricetta, Integer>{

}
