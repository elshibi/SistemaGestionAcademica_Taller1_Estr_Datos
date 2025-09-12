#pragma once
#include "LinkedList.h"
#include "Curso.h"
#include "Alumno.h"
#include <iostream>
#include <string>

using namespace std;

class Inscripcion{
    private:
        Curso* curso;
        Alumno* alumno;
        LinkedList<float> notas;
    public:
        Inscripcion(Curso*, Alumno*);
        void agregarNota(float);
        Curso* getCurso() const;
        Alumno* getAlumno() const;
        const LinkedList<float>& getNotas() const;
        string toString() const;
        
        

};