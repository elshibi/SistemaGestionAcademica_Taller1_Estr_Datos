#pragma once
#include <iostream>

template<class T>
class Nodo {
    
private:
    T dato;
    Nodo<T>* next;

public:
    Nodo(): next(nullptr) {
    }
    T getDato() {
        return dato;
    }
    Nodo<T>* getNext() {
        return next;
    }
    void setDato(T dato) {
        this->dato = dato;
    }
    void setNext(Nodo<T>* next) {
        this->next = next; 
    }
    ~Nodo() {
        next = nullptr;
    }
    friend class LinkedList; 
};