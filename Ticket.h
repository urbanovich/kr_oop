/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.h
 * Author: setler
 *
 * Created on May 22, 2018, 10:37 PM
 */

#ifndef TICKET_H
#define TICKET_H

#include "reference.h"

#include "Station.h"
#include "Ride.h"

class Ticket {
    
    //the station from
    Station *from;
    
    //the station to
    Station *to;
    
    Ride *ride;
    
public:
    Ticket();
    Ticket(const Ticket& orig);
    virtual ~Ticket();
    
private:

};

#endif /* TICKET_H */

