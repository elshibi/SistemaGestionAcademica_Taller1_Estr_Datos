#pragma once
#include <iostream>

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T>* next;

public:
    Nodo(const T& dato = T(), Nodo<T>* next = nullptr) : dato(dato), next(next) {}
    T getDato() { return dato; }
    Nodo<T>* getNext() { return next; }
    void setDato(const T& dato) { this->dato = dato; }
    void setNext(Nodo<T>* next) { this->next = next; }
    ~Nodo() { next = nullptr; }
    template <class U> friend class LinkedList;
};