/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: setler
 *
 * Created on May 26, 2018, 4:33 PM
 */

#ifndef LIST_H
#define LIST_H

#include "Node.h"

#include <cstdlib>
#include <string>
#include <iostream>

template <class T>
class List {
    Node<T> *root = NULL;
    int count = 0;
public:
    List();
    List(const List& orig);
    virtual ~List();
    
    void add(T *obj);
    T* get(int i);
    int size();
    void deleteAll(Node<T> **root);
    
private:
    void add(T *obj, Node<T> **nodes);
    T* get(int i, Node<T> **nodes);
};

template <class T>
List<T>::List() {
}

template <class T>
List<T>::List(const List& orig) {
}

template <class T>
List<T>::~List() {
    this->deleteAll(&this->root);
}

template <class T>
void List<T>::add(T *obj) {
    
    this->add(obj, &this->root);
}

template <class T>
void List<T>::add(T *obj, Node<T> **nodes) {
    
    static Node<T> *prev = NULL;
    
    if ((*nodes) == NULL) {
        
        (*nodes) = new Node<T>();
        (*nodes)->data = obj;
        (*nodes)->prev = prev;
        
        this->count++;
        return;
    }
    
    if ((*nodes)->next == NULL) {
        prev = (*nodes);
    }
    
    this->add(obj, &(*nodes)->next);
}

template <class T>
T* List<T>::get(int i) {
    this->get(i, &this->root);
}

template <class T>
T* List<T>::get(int i, Node<T> **nodes) {
    static int index = 1;
    if (index == i && (*nodes) != NULL) {
        index = 1;
        return (*nodes)->data;
    }
    
    if (index < this->count) {
        index++;
        return this->get(i, &(*nodes)->next);
    }
    
    return NULL;
}

template <class T>
int List<T>::size() {
    return this->count;
}

template <class T>
void List<T>::deleteAll(Node<T> **root) {
    
    //delete data of T type
    if ((*root)->data != NULL) {
        delete (*root)->data;
    }
    
    //delete next object
    if ((*root)->next != NULL) {
        this->deleteAll(&(*root)->next);
    }
    
    //after deleting data of objects it is deleting a self node
    delete (*root);
}
#endif /* LIST_H */

