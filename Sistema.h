#pragma once
#include "LinkedList.h"
#include "Alumno.h"
#include "Curso.h"
#include "Inscripcion.h"
#include <iostream>
#include <string>
using namespace std;

class Sistema{
    private:
        LinkedList<Alumno> alumnos;
        LinkedList<Curso> cursos;
        LinkedList<Inscripcion> inscripciones;
    public:
        Sistema();
        //sistema alumnos
        void agregarAlumno(int,string,string,string,string);
        string mostrarAlumnoxID(int); //busqueda utilizando id como parametro
        string mostrarAlumnoxNombre(string); //busqueda utilizando nombre como parametro
        bool eliminarAlumno(int); //eliminar alumno utilizando ID como parametro
        //sistema cursos
        void agregarCurso(int,string,int,string,string);
        string mostrarCursoxID(int);
        string mostrarCursoxNombre(string);
        bool eliminarCurso(int);
        //sistema inscripcion
        void añadirInscripcion();
        void eliminarInscripcion();
        //sistema de notas
        void registrarNota();
        //reportes
        string obtenerAlumnosCarrera();
        string obtenerCursosdeAlumno();
        float promNotasAlumnoCurso();
        float promNotasAlumno();
        void prueba();


       
};