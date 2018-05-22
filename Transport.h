/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Transport.h
 * Author: setler
 *
 * Created on May 22, 2018, 10:37 PM
 */

#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "reference.h"

#include "Ticket.h"
#include <string>

class Transport {
    
    //name of this transport
    std::string name;
    
    //tickets of this transport
    Ticket **tickets;
    
public:
    Transport(std::string name);
    Transport(const Transport& orig);
    virtual ~Transport();
    
private:

};

#endif /* TRANSPORT_H */

