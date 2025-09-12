#include "Alumno.h"
#include <string>
#include <iostream>
using namespace std;

Alumno::Alumno(int id,string nombre,string apellido,string carrera,string fecha){
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->carrera = carrera;
    this->fechaIngreso = fecha;
}   
int Alumno::getId() const {
    return id; 
}
string Alumno::getNombre() const {
    return nombre; 
}
string Alumno::getApellido() const {
    return apellido;
}
string Alumno::getCarrera() const {
    return carrera; 
}
string Alumno::getFechaIngreso() const {
    return fechaIngreso; 
}

void Alumno::inscribirCurso(Curso* curso) {
    Inscripcion inscripcion(curso, this);
    inscripciones.add(inscripcion);
}

string Alumno::toString() const {
    return nombre + " " + apellido + " (" + carrera + ")";
}
