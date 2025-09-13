#include <iostream>
#include <string>
#include "Sistema.h"
using namespace std;

int main(){
    Sistema sistema;
    int opcion;
    do{
        cout<<"********************************************"<<endl;
        cout<<"\nBienvenido al Sistema de Gestion Academica"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1. Crear Alumno"<<endl;
        cout<<"2. Buscar Alumno"<<endl;
        cout<<"3. Eliminar Alumno"<<endl;
        cout<<"4. Crear Curso"<<endl;
        cout<<"5. Buscar Curso"<<endl;
        cout<<"6. Eliminar Curso"<<endl;
        cout<<"7. Inscribir alumno en un curso"<<endl;
        cout<<"8. Eliminar alumno en un curso"<<endl;
        cout<<"9. Registrar nota(s) para un alumno presente en un curso"<<endl;
        cout<<"10. Consultas y Reportes"<<endl;
        cout<<"-1. Salir del programa"<<endl;
        cout<<"Seleccione opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:{
                int idUnico;
                string nom, ape, car, fecha;
                cout << "ID del alumno: ";
                cin>>idUnico;
                cout<< "Nombre: ";
                getline(cin, nom);
                cout << "Apellido: ";
                getline(cin, ape);
                cout << "Carrera: ";
                getline(cin, car);
                cout << "Fecha de ingreso (dd/mm/yyyy): ";
                getline(cin, fecha);
                sistema.agregarAlumno(idUnico, nom, ape, car, fecha);
                cout << "Alumno guardado con exito! :)" << endl;
                break;
            }
            case 2:{
                int idBuscado;
                cout << "ID a buscar: ";
                cin >> idBuscado;
                cout << sistema.mostrarAlumnoxID(idBuscado) << endl;
                break;
            }
            case 3:{
                string nomBuscado;
                cout << "Nombre a buscar: ";
                getline(cin, nomBuscado);
                cout << sistema.mostrarAlumnoxNombre(nomBuscado) << endl;
                break;
            }
            case 4: {
                int idABorrar;
                cout << "ID del alumno a borrar: ";
                cin >> idABorrar;
                if (sistema.eliminarAlumno(idABorrar)) {
                    cout << "Alumno borrado!" << endl;
                } else {
                    cout << "Alumno no encontrado, reintente con otra ID." << endl;
                }
                break;
            }
            case 5: {
                int idCurso, capacidad;
                string nomCurso, carCurso, profe;
                cout << "ID del curso: ";
                cin >> idCurso;
                cout << "Nombre del curso: ";
                getline(cin, nomCurso);
                cout << "Capacidad maxima: ";
                cin >> capacidad;
                cout << "Carrera: ";
                getline(cin, carCurso);
                cout << "Profesor: ";
                getline(cin, profe);
                sistema.agregarCurso(idCurso, nomCurso, capacidad, carCurso, profe);
                break;
            }
            case 6: {
                int idCurso;
                cout << "ID del curso a buscar: ";
                cin >> idCurso;
                cout << sistema.mostrarCursoxID(idCurso) << endl;
                break;
            }
            case 7: {
                string nomCurso;
                cout << "Nombre del curso: ";
                getline(cin, nomCurso);
                cout << sistema.mostrarCursoxNombre(nomCurso) << endl;
                break;
            }
            case 8: {
                int idCurso;
                cout << "ID del curso a borrar: ";
                cin >> idCurso;
                if (sistema.eliminarCurso(idCurso)) {
                    cout << "Curso eliminado!" << endl;
                } else {
                    cout << "Curso no encontrado." << endl;
                }
                break;
            }
            case 9:
                break;
            case 10:
                break;
            case -1:
                break;
            default:
                cout<<"Ingrese una opcion valida!"<<endl;
        }

    }while(opcion != -1);
    return 0;
}