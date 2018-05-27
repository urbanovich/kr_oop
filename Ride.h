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

#include "reference.h"

#include "Transport.h"
#include "List.h"

#include <string>
#include <time.h>

enum ride_type {
    international,
    local,
};

class Ride {
    
public:
    
    //name of this ride
    std::string name;
    
    //transports of this ride
    List<Transport> *transports;
    
    std::string current_time;
    
    std::string current_date;
    
    std::string t;
    
    std::string d;
    
    ride_type type;
    
    Ride(std::string name, List<Transport> *transports);
    Ride(const Ride& orig);
    virtual ~Ride();
    const std::string currentDate();
    const std::string currentTime();
    const std::string currentDateTime(std::string str_date_time);
    
    friend std::ostream& operator<<(std::ostream &stream, Ride &r);

private:

};

#endif /* RIDE_H */

