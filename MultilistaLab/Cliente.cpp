#include "Cliente.h"


Cliente::Cliente(string nom) {
   //ctor
   nomEstudiante = nom;
   siguiente = NULL;
}

Cliente::~Cliente() {
   //dtor
}

void Cliente::setNomEstudiante(string nom) {
     nomEstudiante = nom;
}

string Cliente::getNomEstudiante() {
    return nomEstudiante;
}

void Cliente::setSiguiente(Cliente *nuevo) {
     siguiente = nuevo;
}

Cliente *Cliente::getSiguiente() {
    return siguiente;
}

void Cliente::mostrar() {
    cout<<getNomEstudiante()<<"  "<<endl;
}