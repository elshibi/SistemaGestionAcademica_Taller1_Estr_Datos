#include "Alumno.h"
#include <string>
#include <iostream>
#include "LinkedList.h"
using namespace std;

Alumno::Alumno(int id,string nombre,string apellido,string carrera,string fecha){
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->carrera = carrera;
    this->fechaIngreso = fecha;
    //generar linkedlist de inscripciones vacias del alumno ????
}

//otros constructores y de inscripcion tambien