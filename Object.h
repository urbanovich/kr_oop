/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Object.h
 * Author: setler
 *
 * Created on May 31, 2018, 11:44 PM
 */

#ifndef OBJECT_H
#define OBJECT_H

#include <string>

class Object {
    
public:
    
    //name of object
    std::string name;
    
    Object();
    Object(std::string name);
    Object(const Object& orig);
    virtual ~Object() = 0;
private:

};

#endif /* OBJECT_H */

