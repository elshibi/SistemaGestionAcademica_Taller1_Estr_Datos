#pragma once
#include <iostream>

template<class T>
class Nodo {
    
private:
    T dato;
    Nodo<T>* next;

public:
    Nodo();
    T getDato();
    Nodo<T>* getNext();
    void setDato(T dato);
    void setNext(Nodo<T>* next);
    ~Nodo();
   template <class> friend class LinkedList;
};