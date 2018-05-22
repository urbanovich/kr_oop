/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Station.h
 * Author: setler
 *
 * Created on May 22, 2018, 10:37 PM
 */

#ifndef STATION_H
#define STATION_H

#include "reference.h"

#include "Locality.h"
#include "Ride.h"
#include <string>

class Station {
    
    //name of this station
    std::string name;
    
    //rides of this station
    Ride **rides;
    
public:
    Station(std::string name, Ride **rides);
    Station(const Station& orig);
    virtual ~Station();
    
private:
    
};

#endif /* STATION_H */

