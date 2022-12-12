package com.saldana.canzoni.repos;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import com.saldana.canzoni.entities.Canzone;

@Repository
public interface CanzoneDAO extends JpaRepository<Canzone, Integer> {

	List<Canzone> findByGenere(String genere);
	@Query(value = "select * from canzoni where cantante like %:cantante% ", nativeQuery = true)
	List<Canzone> findByNomeCantante(@Param("cantante") String nomeCantante);
	
}
