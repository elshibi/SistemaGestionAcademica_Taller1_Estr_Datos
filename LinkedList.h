#pragma once
#include <iostream>
#include "Nodo.h"

template<class T>
class LinkedList{
private:
    Nodo<T>* head;

public:
    LinkedList() : head(nullptr) {}

    bool isEmpty() const {
        return head == nullptr;
    }

    void add(const T& dato) {
        Nodo<T>* nuevoNodo = new Nodo<T>();
        nuevoNodo->setDato(dato);
        nuevoNodo->setNext(head);
        head = nuevoNodo;
    }

    const T& front() const {
        return head->getDato();
    }

    void removeFront() {
        Nodo<T>* antiguo = head;
        head = antiguo->getNext();
        delete antiguo;
    }

    Nodo<T>* find(const T& dato) const {
        Nodo<T>* actual = head;
        while (actual != nullptr) {
            if (actual->getDato() == dato) {
                return actual;
            }
            actual = actual->getNext();
        }
        return nullptr;
    }

    bool remove(const T& dato) {
        if (isEmpty()) {
            return false;
        }
        if (head->getDato() == dato) {
            removeFront();
            return true;
        }

        Nodo<T>* actual = head;
        while (actual->getNext() != nullptr) {
            if (actual->getNext()->getDato() == dato) {
                Nodo<T>* temp = actual->getNext();
                actual->setNext(temp->getNext());
                temp->setNext(nullptr);
                delete temp;
                return true;
            }
            actual = actual->getNext();
        }
        return false;
    }

    int size() const {
        int count = 0;
        Nodo<T>* actual = head;
        while (actual != nullptr) {
            count++;
            actual = actual->getNext();
        }
        return count;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "La lista esta vacía" << std::endl;
            return;
        }
        Nodo<T>* actual = head;
        while (actual != nullptr) {
            std::cout << actual->getDato().toString() << "\n";
            actual = actual->getNext();
        }
        std::cout << "nullptr" << std::endl;
    }

    ~LinkedList() {
        while (!isEmpty()) {
            removeFront();
        }
    }
};