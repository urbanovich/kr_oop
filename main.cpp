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

    std::string name;
    std::string response;
    List<Locality> localities;
    while (true) {
        std::cout << "You need create transports: " << std::endl;
        Transport *t;
        List<Transport> trans;
        while(true) {
            
            std::cout << "Enter transport name: ";
            std::cin >> name;
            t = new Transport(name);
            trans.add(t);
            
            std::cout << "If You want add a transport enter 'y' if no 'n': " << std::endl;
            std::cin >> response;
            
            if (response == "n") {
                break;
            }
        }
        
        Station *s;
        List<Station> stations;
        std::string start_time;
        std::string finish_time;
        while(true) {
            std::cout << "You need create rides for new station: " << std::endl;        
            Ride *r;
            List<Ride> rides;
            while(true) {

                std::cout << "Enter ride name: ";
                std::cin >> name;
                std::cout << "Enter start time(2018-06-13 9:45:00): ";
                std::cin >> start_time;
                std::cout << "Enter finish time(2018-06-13 12:00:00): ";
                std::cin >> finish_time;
                r = new Ride(name, start_time, finish_time, &trans);
                rides.add(r);

                std::cout << "If You want add a ride enter 'y' if no 'n': " << std::endl;
                std::cin >> response;

                if (response == "n") {
                    break;
                }
            }
            
            std::cout << "You need create station for rides created above: " << std::endl;        
            while(true) {

                std::cout << "Enter station name: ";
                std::cin >> name;
                s = new Station(name, &rides);
                stations.add(s);

                std::cout << "If You want add a station enter 'y' if no 'n': " << std::endl;
                std::cin >> response;

                if (response == "n") {
                    break;
                }
            }
            
            std::cout << "If You want add a new station and rides enter 'y' if no 'n': " << std::endl;
            std::cin >> response;

            if (response == "n") {
                break;
            }
        }
        
        std::cout << "You need create locality for stations and rides created above: " << std::endl;        
        Locality *l;
        while(true) {

            std::cout << "Enter locality name: ";
            std::cin >> name;
            l = new Locality(name, &stations);
            localities.add(l);

            std::cout << "If You want add a locality enter 'y' if no 'n': " << std::endl;
            std::cin >> response;

            if (response == "n") {
                break;
            }
        }
        
        std::cout << "If You want add a new locality and rides enter 'y' if no 'n': " << std::endl;
        std::cin >> response;

        if (response == "n") {
            break;
        }
        
    }
    
    std::string loc_from;
    std::cout << "Enter source locality: ";
    std::cin >> loc_from;
    
    std::string loc_to;
    std::cout << "Enter destination locality: ";
    std::cin >> loc_to;
    
    std::string from_time;
    std::cout << "Enter from time(2018-06-13 9:45:00): ";
    std::cin >> from_time;
    
    std::string to_time;
    std::cout << "Enter to time(2018-06-13 12:00:00): ";
    std::cin >> to_time;
    
    Locality::search(&localities, loc_from, loc_to, from_time, to_time);
    
    return 0;
}

