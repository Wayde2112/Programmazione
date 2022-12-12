package com.saldana.dao;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.saldana.entities.Microchip;

@Repository
public interface MicrochipDAO extends JpaRepository<Microchip, Integer> {

}
