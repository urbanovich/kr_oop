/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Transport.cpp
 * Author: setler
 * 
 * Created on May 22, 2018, 10:37 PM
 */

#include "Transport.h"

Transport::Transport(): Object() {
}

Transport::Transport(std::string name): Object(name) {
}

Transport::Transport(const Transport& orig): Object(orig) {
}

Transport::~Transport() {
}

std::ostream& operator<<(std::ostream &stream, Transport &t) {
    
    if (!t.name.empty()) {
        stream << "Transport: " << t.name << std::endl;
    }
    return stream;
}