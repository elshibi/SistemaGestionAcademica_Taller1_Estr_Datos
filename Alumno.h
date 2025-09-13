#pragma once
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Inscripcion.h"

class Curso;

class Alumno {
private:
    int id;
    std::string nombre;
    std::string apellido;
    std::string carrera;
    std::string fechaIngreso;
    LinkedList<Inscripcion> inscripciones;
public:
    Alumno(int, std::string, std::string, std::string, std::string);
    int getId() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getCarrera() const;
    std::string getFechaIngreso() const;
    void inscribirCurso(Curso* curso);
    std::string toString() const;
    bool operator==(const Alumno& other) const;
};