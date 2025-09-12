#include "Curso.h"
#include <string>
#include <iostream>
using namespace std;

Curso::Curso(int id, string nombre, int cantMax, string carrera, string profesor){
    this->id = id;
    this->nombre = nombre;
    this->cantMax = cantMax;
    this->carrera = carrera;
    this->profesor = profesor;
}

int Curso::getId() const{
    return id;
}
string Curso::getNombre() const{
    return nombre;
}
int Curso::getCantMax() const{
    return cantMax;
}
string Curso::getCarrera() const{
    return carrera;
}
string Curso::getProfesor() const{
    return profesor;
}

string Curso::toString() const {
    return nombre + " (ID: " + to_string(id) + ")";
}