#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Inscripcion.h"
using namespace std;

class Alumno{
    private:
        int id;
        string nombre;
        string apellido;
        string carrera;
        string fechaIngreso;
        LinkedList<Inscripcion> cursos;
    public:
        Alumno(int,string,string,string,string);
        //getter, setters y toString (uno que otro metodo)
        //agregar metodo para inscribir los ramos
};