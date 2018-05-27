/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: setler
 *
 * Created on May 22, 2018, 10:36 PM
 */

#include <cstdlib>
#include <iostream>

#include "reference.h"

#include "Locality.h"
#include "Station.h"
#include "Ride.h"
#include "Transport.h"
#include "Ticket.h"
#include "List.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int count = 3;
    
    Transport *t;
    List<Transport> trans;
    for(int i = 0; i < count; i++) {
        t = new Transport(std::to_string(i));
        trans.add(t);
    }
    
    Ride *r;
    List<Ride> rides;
    for(int i = 0; i < count; i++) {
        r = new Ride(std::to_string(i), &trans);
        rides.add(r);
    }
    
    Station *s;
    List<Station> stations;
    for(int i = 0; i < count; i++) {
        s = new Station(std::to_string(i), &rides);
        stations.add(s);
    }
        
    Locality *l;
    List<Locality> localities;
    for(int i = 0; i < count; i++) {
        l = new Locality(std::to_string(i), &stations);
        localities.add(l);
    }
    
//    std::cout << *localities.get(1) << std::endl;
    
    std::string sity_from = "0";
    std::string sity_to = "1";
    
    Locality::search(&localities, sity_from, sity_to);
    
    return 0;
}

