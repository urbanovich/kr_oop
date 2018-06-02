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

#include "Object.h"
#include "Station.h"
#include "Node.h"
#include "List.h"

#include <string>

class Locality: public Object {
    
    //stations of this locality
    List<Station> *stations;
    
public:
    Locality(std::string name, List<Station> *stations);
    Locality(const Locality& orig);
    virtual ~Locality();
    
    friend std::ostream& operator<<(std::ostream &stream, Locality &l);

    static Ride* search(List<Locality> *localities, std::string from, std::string to, std::string from_time, std::string to_time);
        
private:

};

#endif /* LOCALITY_H */

