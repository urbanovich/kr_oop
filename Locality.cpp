/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Locality.cpp
 * Author: setler
 * 
 * Created on May 22, 2018, 10:36 PM
 */

#include "Locality.h"

Locality::Locality(std::string name, List<Station> *stations): Object(name), stations(stations) {
}

Locality::Locality(const Locality& orig): Object(orig) {
}

Locality::~Locality() {
}

std::ostream& operator<<(std::ostream &stream, Locality &l) {
    
    stream << "Locality: " << l.name << std::endl;
    for(int i = 1; i <= l.stations->size(); i++) {
        stream << *l.stations->get(i) << std::endl;
    }
    return stream;
}

Ride* Locality::search(
    List<Locality> *localities, 
    std::string from, 
    std::string to, 
    std::string from_time, 
    std::string to_time
) {
    
    Locality *loc;
    Locality *loc_from = NULL, *loc_to = NULL;
    for (int i = 1;  i <= localities->size(); i++) {
        loc = localities->get(i);
        if (loc->name == from) {
            loc_from = loc;
        } else if(loc->name == to) {
            loc_to = loc;
        }
    }
    
    std::cout << "from: " << loc_from->name << std::endl;
    std::cout << "to: " << loc_to->name << std::endl;
    
    if (loc_from->stations->size() > 0) {
        
        std::cout << "Have found " <<  loc_from->stations->size() << " stations in source locality =)" << std::endl;
        
        for (int isf = 1; isf <= loc_from->stations->size(); isf++) {
            Station *sf = loc_from->stations->get(isf);
            
            if (sf->rides->size() > 0) {
                
                std::cout << "Have found " <<  sf->rides->size() << " rides in source locality =)" << std::endl;

                for (int irf = 1; irf <= sf->rides->size(); irf++) {
                    Ride *rf = sf->rides->get(irf);
                                        
                    //search by a destination locality
                    if (loc_to->stations->size() > 0) {
        
                        if (irf == 1) {
                            std::cout << "Have found " <<  loc_to->stations->size() << " stations in destination locality =)" << std::endl;
                        }
                        
                        for (int ist = 1; ist <= loc_to->stations->size(); ist++) {
                            Station *st = loc_to->stations->get(ist);
                                                        
                            if (st->rides->size() > 0) {

                                if (ist == 1) {
                                    std::cout << "Have found " <<  st->rides->size() << " rides in destination locality =)" << std::endl;
                                }

                                for (int irt = 1; irt <= st->rides->size(); irt++) {
                                    Ride *rt = st->rides->get(irt);
                                    
                                    if (rf->name == rt->name) {
                                                                                
                                        if (rf->start_time >= from_time && rf->finish_time <= to_time) {
                                            std::cout << "Have found " <<  rt->name << " ride in destination locality =)" << std::endl;
                                            std::cout << rt->name << ": start time: " << rf->start_time << " finish time: " << rf->finish_time << std::endl;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        std::cout << "Have not found any stations in " << loc_to->name << " =(" << std::endl;
                    }
                }
            }
        }
    } else {
        std::cout << "Have not found any stations in " << loc_from->name << " =(" << std::endl;
    }
}
