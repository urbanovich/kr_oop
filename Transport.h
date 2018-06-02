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

#include "Object.h"
#include "Ticket.h"
#include "List.h"

#include <string>
#include <iostream>

class Transport: public Object {
    
public:
    
    //tickets of this transport
    Ticket **tickets;
    
    Transport();
    Transport(std::string name);
    Transport(const Transport& orig);
    virtual ~Transport();
    
    friend std::ostream& operator<<(std::ostream &stream, Transport &t);

private:
    
};

#endif /* TRANSPORT_H */

