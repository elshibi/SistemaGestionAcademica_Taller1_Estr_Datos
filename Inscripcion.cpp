#include <iostream>
#include <string>
#include "Inscripcion.h"
using namespace std;

Inscripcion::Inscripcion(Curso* curso,Alumno* alumno): curso(curso), alumno(alumno){

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
    return string("Inscripcion: ") + alumno->getNombre() + " "+ alumno->getApellido()+ " Curso: " + curso->getNombre(); 
}