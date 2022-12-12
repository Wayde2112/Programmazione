package com.saldana.repos;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.entities.Viaggio;

public interface ViaggioDAO extends JpaRepository<Viaggio, Integer> {

}
