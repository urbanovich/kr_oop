/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: setler
 *
 * Created on May 26, 2018, 10:27 AM
 */

#ifndef NODE_H
#define NODE_H

#include <cstdlib>

template <class T>
class Node {
public:
    Node();
    Node(const Node& orig);
    virtual ~Node();
    
    T *data = NULL;
    
    Node<T> *prev = NULL;
    Node<T> *next = NULL;
    
private:

};

template <class T>
Node<T>::Node() {
}

template <class T>
Node<T>::Node(const Node& orig) {
}

template <class T>
Node<T>::~Node() {
}

#endif /* NODE_H */

