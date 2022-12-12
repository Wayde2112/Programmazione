package com.saldana.repos;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.repository.CrudRepository;

import com.saldana.entities.Documento;

public interface DocumentoDAO extends CrudRepository<Documento, Integer> {

}
