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

//agregar los otros metodos (getters y setters)