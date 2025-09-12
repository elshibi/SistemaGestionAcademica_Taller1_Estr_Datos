#include "Nodo.h"
#include <iostream>

template<class T>
Nodo<T>::Nodo(){
    next = nullptr;
}

template<class T>
T Nodo<T>::getDato(){ return dato;}

template<class T>
Nodo<T>* Nodo<T>::getNext(){
    return next;
}
template<class T>
void Nodo<T>::setDato(T dato){
    this->dato = dato;
}

template<class T>
void Nodo<T>::setNext(Nodo<T>* next){
    this->next = next;
}
template<class T>
Nodo<T>::~Nodo(){
    next = nullptr;
}

