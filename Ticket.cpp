/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.cpp
 * Author: setler
 * 
 * Created on May 22, 2018, 10:37 PM
 */

#include "Ticket.h"

Ticket::Ticket() {
}

Ticket::Ticket(const Ticket& orig) {
}

Ticket::~Ticket() {
}

std::ostream& operator<<(std::ostream &stream, Ticket &t) {
    
    stream << "Tickets: " << t.count << std::endl;
    return stream;
}
