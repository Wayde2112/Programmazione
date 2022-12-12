package com.saldana.viaggi.repos;

import org.springframework.data.jpa.repository.JpaRepository;

import com.saldana.viaggi.entities.Documento;

public interface DocumentoDAO extends JpaRepository<Documento, Integer> {

}
