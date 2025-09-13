#pragma once
#include <iostream>
#include <string>
#include "LinkedList.h"
class Alumno;
class Curso;

class Inscripcion {
private:
    Curso* curso;
    Alumno* alumno;
    LinkedList<float> notas;
public:
    Inscripcion(Curso* = nullptr, Alumno* = nullptr);
    void agregarNota(float);
    Curso* getCurso() const;
    Alumno* getAlumno() const;
    const LinkedList<float>& getNotas() const;
    std::string toString() const;
    bool operator==(const Inscripcion& other) const;
};