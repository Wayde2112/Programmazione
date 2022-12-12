package com.saldana.repo;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.saldana.entities.Prodotto;

@Repository
public interface ProdottoDAO extends JpaRepository<Prodotto, Integer> {

}
