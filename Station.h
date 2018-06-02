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

#include "Object.h"
#include "Locality.h"
#include "Ride.h"
#include "List.h"

#include <string>

class Station: public Object {
    
public:
    
    //rides of this station
    List<Ride> *rides;
    
    Station(std::string name, List<Ride> *rides);
    Station(const Station& orig);
    virtual ~Station();
    
    friend std::ostream& operator<<(std::ostream &stream, Station &s);
    
private:

};

#endif /* STATION_H */

