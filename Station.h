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

#include "Ride.h"

class Station {
public:
    Station(Ride **rides);
    Station(const Station& orig);
    virtual ~Station();
    
    Ride **rides;
    
private:

};

#endif /* STATION_H */

