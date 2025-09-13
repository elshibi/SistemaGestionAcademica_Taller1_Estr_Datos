#include "Inscripcion.h"
#include "Alumno.h"
#include "Curso.h"
#include <iostream>
#include <string>


Inscripcion::Inscripcion(Curso* curso,Alumno* alumno): curso(curso), alumno(alumno), notas(){

}
void Inscripcion::agregarNota(float nota){
    notas.add(nota);
}
Curso* Inscripcion::getCurso() const{
    return curso;
}
Alumno* Inscripcion::getAlumno() const{
    return alumno;
}
const LinkedList<float>& Inscripcion::getNotas() const{
    return notas;
}

string Inscripcion::toString() const{
    return std::string("Inscripcion: ") + alumno->getNombre() + " "+ alumno->getApellido()+ " Curso: " + curso->getNombre(); 
}

bool Inscripcion::operator==(const Inscripcion& other) const {
    if (this->alumno && this->curso && other.alumno && other.curso) {
        return this->alumno->getId() == other.alumno->getId() && this->curso->getId() == other.curso->getId();
    }
    return false;
}