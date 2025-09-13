#pragma once
#include "LinkedList.h"
#include "Alumno.h"
#include "Curso.h"
#include "Inscripcion.h"
#include <iostream>
#include <string>

class Sistema {
private:
    LinkedList<Alumno> alumnos;
    LinkedList<Curso> cursos;
    LinkedList<Inscripcion> inscripciones;

public:
    Sistema();
    // Sistema Alumnos
    void agregarAlumno(int, std::string, std::string, std::string, std::string);
    std::string mostrarAlumnoxID(int);
    std::string mostrarAlumnoxNombre(std::string);
    bool eliminarAlumno(int);
    // Sistema Cursos
    void agregarCurso(int, std::string, int, std::string, std::string);
    std::string mostrarCursoxID(int);
    std::string mostrarCursoxNombre(std::string);
    bool eliminarCurso(int);
    // Sistema Inscripciones
    void añadirInscripcion();
    void eliminarInscripcion();
    // Sistema Notas
    void registrarNota();
};