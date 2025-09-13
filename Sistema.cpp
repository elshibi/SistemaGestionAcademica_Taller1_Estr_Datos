#include "Sistema.h"
#include <iostream>
#include <string>
using namespace std;

Sistema::Sistema(){}
//sistema Alumnos
void Sistema::agregarAlumno(int id,string nombre,string apellido,string carrera,string año){
    Alumno alumno(id, nombre, apellido, carrera, año);
    alumnos.add(alumno);
    cout << "Alumno agregado: " << nombre << " " << apellido << endl;
}
string Sistema::mostrarAlumnoxID(int id){
    Nodo<Alumno>* encontrado = alumnos.find(Alumno(id, "", "", "", ""));
    if (encontrado) {
        return string(encontrado->getDato().toString());
    }
    return "No se encontro Alumno con esa ID";
}
string Sistema::mostrarAlumnoxNombre(string nombre){
    string resultado = "";
    Nodo<Alumno>* actual = alumnos.getHead();
    bool existe = false;
    while (actual != nullptr) {
        if (actual->getDato().getNombre() == nombre) {
            resultado += actual->getDato().toString() + "\n";
            existe = true;
        }
        actual = actual->getNext();
    }
    return "Alumno no encontrado con ese nombre";
}
bool Sistema::eliminarAlumno(int id){
// Primero limpio las inscripciones, aprendí que esto es importante
    Nodo<Inscripcion>* inscr = inscripciones.getHead();
    while (inscr != nullptr) {
        if (inscr->getDato().getAlumno()->getId() == id) {
            inscripciones.remove(inscr->getDato());
        }
        inscr = inscr->getNext();
    }
    return alumnos.remove(Alumno(id, "", "", "", ""));
}
//Sistema cursos
void Sistema::agregarCurso(int id,string nombre,int capacidad,string carrera,string profesor){
Curso nuevoCurso(id, nombre, capacidad, carrera, profesor);
    cursos.add(nuevoCurso);
    cout << "Curso " << nombre << " creado con éxito!" << endl;
}
string Sistema::mostrarCursoxID(int id){
    Nodo<Curso>* encontrado = cursos.find(Curso(id, "", 0, "", ""));
    if (encontrado) {
        return encontrado->getDato().toString();
    }
    return "Curso no encontrado!";
}
string Sistema::mostrarCursoxNombre(string nombre){
    string resultado = "";
    Nodo<Curso>* actual = cursos.getHead();
    bool existe = false;
    while (actual != nullptr) {
        if (actual->getDato().getNombre() == nombre) {
            resultado += actual->getDato().toString() + "\n";
            existe = true;
        }
        actual = actual->getNext();
    }
    return "Curso no encontrado, intente con otro nombre!";
}
bool Sistema::eliminarCurso(int id){
Nodo<Inscripcion>* insc = inscripciones.getHead();
    while (insc != nullptr) {
        if (insc->getDato().getCurso()->getId() == id) {
            inscripciones.remove(insc->getDato());
        }
        insc = insc->getNext();
    }
    return cursos.remove(Curso(id, "", 0, "", ""));
}
//Sistema inscripcion
void Sistema::añadirInscripcion(){

}
void Sistema::eliminarInscripcion(){

}
//sistema notas
void Sistema::registrarNota(){
}