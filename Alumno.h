#pragma once
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Inscripcion.h"
#include "Curso.h"

class Alumno{
    private:
        int id;
        string nombre;
        string apellido;
        string carrera;
        string fechaIngreso;
        LinkedList<Inscripcion> inscripciones;
    public:
        Alumno(int,string,string,string,string);
        int getId() const;
        string getNombre() const;
        string getApellido() const;
        string getCarrera() const;
        string getFechaIngreso() const;
        void inscribirCurso(Curso* curso);
        string toString() const;
};