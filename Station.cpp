/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Station.cpp
 * Author: setler
 * 
 * Created on May 22, 2018, 10:37 PM
 */

#include "Station.h"

Station::Station(std::string name, List<Ride> *rides): Object(name), rides(rides) {
}

Station::Station(const Station& orig): Object(orig) {
}

Station::~Station() {
}

std::ostream& operator<<(std::ostream &stream, Station &s) {
    
    stream << "Station: " << s.name << std::endl;
    for(int i = 1; i <= s.rides->size(); i++) {
        stream << *s.rides->get(i) << std::endl;
    }
    return stream;
}
