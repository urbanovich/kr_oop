/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ride.cpp
 * Author: setler
 * 
 * Created on May 22, 2018, 10:37 PM
 */

#include "Ride.h"

Ride::Ride(std::string name, Transport **transports): name(name), transports(transports) {
}

Ride::Ride(const Ride& orig) {
}

Ride::~Ride() {
}

