#include "ColaCliente.h"
#include <iostream>

using namespace std;


ColaCliente::ColaCliente() {
   //ctor
   inicio = NULL;
   fin = NULL;
}

ColaCliente::~ColaCliente() {
   //dtor
}

void ColaCliente::encolar(string dato){
   Cliente *nuevo = new Cliente(dato);
   if (inicio == NULL) {
      inicio = nuevo;
      fin = nuevo;
   }else {
       fin->setSiguiente(nuevo);
       fin = nuevo;
   }
}

string ColaCliente::desencolar(){
     if (inicio != NULL){
        string var = inicio->getNomEstudiante();
        inicio = inicio->getSiguiente();
        return var;
    } return NULL;
}

void ColaCliente::mostrar(){
    Cliente *aux = inicio;
    while (aux != NULL){
         cout<<"  "<<aux->getNomEstudiante();
         aux=aux->getSiguiente();

    }
    cout<<endl;
}
