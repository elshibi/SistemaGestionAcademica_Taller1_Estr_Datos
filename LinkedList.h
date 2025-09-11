#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

template<class T>
class LinkedList {
private:
    Nodo<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Verifica si la lista está vacía
    bool isEmpty() const { return head == nullptr; }

    // Agrega un elemento al inicio de la lista
    void add(const T& dato) {
        Nodo<T>* newNode = new Nodo<T>();
        newNode->setDato(dato);
        newNode->setNext(head);
        head = newNode;
    }

    // Obtiene el primer elemento de la lista
    const T& front() const {
        if (isEmpty()) {
            throw runtime_error("Lista vacía");
        }
        return head->getDato();
    }

    // Elimina el primer elemento de la lista
    void removeFront() {
        if (isEmpty()) {
            return;
        }
        Nodo<T>* temp = head;
        head = head->getNext();
        temp->setNext(nullptr);
        delete temp;
    }

    // Busca un nodo por dato
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

    // Elimina un dato de la lista
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

    // Obtiene el tamaño de la lista
    int size() const {
        int count = 0;
        Nodo<T>* actual = head;
        while (actual != nullptr) {
            count++;
            actual = actual->getNext();
        }
        return count;
    }

    // Imprime los datos de la lista
    void print() const {
        if (isEmpty()) {
            cout << "Lista vacía" << endl;
            return;
        }
        Nodo<T>* actual = head;
        cout << "Contenido de la lista: ";
        while (actual != nullptr) {
            cout << actual->getDato() << " -> ";
            actual = actual->getNext();
        }
        cout << "nullptr" << endl;
    }

    ~LinkedList() {
        while (!isEmpty()) {
            removeFront();
        }
    }
};