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

#include <string>

#include "Ride.h"

Ride::Ride(
    std::string name, 
    std::string start_time, 
    std::string finish_time, 
    List<Transport> *transports
): Object(name), start_time(start_time), finish_time(finish_time), transports(transports) {
    
    this->current_date = this->currentDate();
    this->current_time = this->currentTime();
}

Ride::Ride(const Ride& orig): Object(orig) {
}

Ride::~Ride() {
}

std::ostream& operator<<(std::ostream &stream, Ride &r) {
    
    stream << "Ride: " << r.name << std::endl;
    for(int i = 1; i <= r.transports->size(); i++) {
        stream << *r.transports->get(i) << std::endl;
    }
    return stream;
}

const std::string Ride::currentDateTime(std::string str_date_time) {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    
    strftime(buf, sizeof(buf), str_date_time.c_str(), &tstruct);

    return buf;
}

const std::string Ride::currentDate() {
    
    return this->currentDateTime("%Y-%m-%d");
}

const std::string Ride::currentTime() {
    
    return this->currentDateTime("%X");
}