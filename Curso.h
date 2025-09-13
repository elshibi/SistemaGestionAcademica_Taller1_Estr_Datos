#pragma once
#include <iostream>
#include <string>
using namespace std;

class Curso{
    private:
        int id;
        string nombre;
        int cantMax;
        string carrera;
        string profesor;
    public:
        Curso(int,string,int,string,string);
        int getId() const;
        string getNombre() const;
        int getCantMax() const;
        string getCarrera() const;
        string getProfesor() const;
        string toString() const;
        bool operator==(const Curso& other) const;
        ~Curso(){};
        
};