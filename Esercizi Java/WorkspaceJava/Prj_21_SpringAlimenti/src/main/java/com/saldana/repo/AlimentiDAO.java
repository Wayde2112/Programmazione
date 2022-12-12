package com.saldana.repo;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.entities.Alimento;

public interface AlimentiDAO extends JpaRepository<Alimento, Integer> {

}
