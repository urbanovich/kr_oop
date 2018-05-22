/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ride.h
 * Author: setler
 *
 * Created on May 22, 2018, 10:37 PM
 */

#ifndef RIDE_H
#define RIDE_H

#include "Transport.h"

class Ride {
public:
    Ride(Transport **transports);
    Ride(const Ride& orig);
    virtual ~Ride();
    
    Transport **transports;
    
private:

};

#endif /* RIDE_H */

