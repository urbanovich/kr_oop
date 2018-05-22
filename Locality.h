/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Locality.h
 * Author: setler
 *
 * Created on May 22, 2018, 10:36 PM
 */

#ifndef LOCALITY_H
#define LOCALITY_H

#include "reference.h"

#include "Station.h"
#include <string>

class Locality {
    
    //name of this locality
    std::string name;
    
    //stations of this locality
    Station **stations;
    
public:
    Locality(std::string name, Station **stations);
    Locality(const Locality& orig);
    virtual ~Locality();
    
private:
    
};

#endif /* LOCALITY_H */

