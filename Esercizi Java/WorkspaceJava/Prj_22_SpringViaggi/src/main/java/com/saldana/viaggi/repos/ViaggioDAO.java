package com.saldana.viaggi.repos;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.viaggi.entities.Viaggio;

public interface ViaggioDAO extends JpaRepository<Viaggio, Integer> {

}
