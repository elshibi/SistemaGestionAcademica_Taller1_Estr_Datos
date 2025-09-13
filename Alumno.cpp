#include "Alumno.h"
#include "Inscripcion.h"
#include <string>
#include <iostream>

Alumno::Alumno(int id, std::string nombre, std::string apellido, std::string carrera, std::string fecha) {
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
    this->carrera = carrera;
    this->fechaIngreso = fecha;
}

int Alumno::getId() const {
    return id;
}

std::string Alumno::getNombre() const {
    return nombre;
}

std::string Alumno::getApellido() const {
    return apellido;
}

std::string Alumno::getCarrera() const {
    return carrera;
}

std::string Alumno::getFechaIngreso() const {
    return fechaIngreso;
}

void Alumno::inscribirCurso(Curso* curso) {
    Inscripcion inscripcion(curso, this);
    inscripciones.add(inscripcion);
}

std::string Alumno::toString() const {
    return nombre + " " + apellido + " (" + carrera + ")";
}
bool Alumno::operator==(const Alumno& other) const {
    return this->id == other.id;
}