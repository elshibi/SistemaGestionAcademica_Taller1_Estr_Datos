#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

template<class T>
class LinkedList{
  private:
    Nodo<T>* head;
    
  public:
    LinkedList();
    void add(T& dato)
    bool isEmpty() const;
    void add(const T& dato);
    Nodo<T>* find(const)
    bool remove(const T& dato);
    void print() const;
    
    ~LinkedList();
};