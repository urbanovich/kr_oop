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

#include "Station.h"

class Locality {
public:
    Locality(Station **stations);
    Locality(const Locality& orig);
    virtual ~Locality();
    
    Station **stations;
    
private:

};

#endif /* LOCALITY_H */

