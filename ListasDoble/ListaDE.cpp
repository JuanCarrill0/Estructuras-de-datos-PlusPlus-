#include "ListaDE.h"
#include <iostream>
using namespace std;

ListaDE::ListaDE() {
   //ctor
   cabecera = NULL;
}

ListaDE::~ListaDE() {
   //dtor
}

void ListaDE::insertar(int dato) {
    NodoDE *nuevo = new NodoDE(dato);
    if (!cabecera) cabecera = nuevo;
    else {
        NodoDE *aux = cabecera;
        while (aux->getSiguiente() != NULL && aux->getInfo() < dato)
             aux = aux->getSiguiente();
        if (aux == cabecera) { // primero
            nuevo->setSiguiente(cabecera);
            cabecera->setAnterior(nuevo);
            cabecera = nuevo;
        }else {
             if (aux->getInfo()<dato) {
                  aux->setSiguiente(nuevo);
                  nuevo->setAnterior(aux);
             }else {
                 nuevo->setSiguiente(aux);
                 (aux->getAnterior())->setSiguiente(nuevo);
                 nuevo->setAnterior(aux->getAnterior());
                 aux->setAnterior(nuevo);
             }
        }
    }
}

int ListaDE::extraer(int dato){
    if (cabecera){
        NodoDE *aux = cabecera;
        while (aux->getSiguiente() != NULL && aux->getInfo() != dato) {
            aux = aux->getSiguiente();
        }
        if (aux->getInfo() == dato){
           if (aux == cabecera) {
                cabecera = cabecera->getSiguiente();
                cabecera->setAnterior(NULL);
           }else {
               (aux->getAnterior())->setSiguiente(aux->getSiguiente());
               if (aux->getSiguiente() != NULL) (aux->getSiguiente())->setAnterior(aux->getAnterior());
           }
        }
    }
}

void ListaDE::mostrarAdelante() {
   NodoDE *aux = cabecera;
   while (aux->getSiguiente() != NULL) {
        cout<<"  "<<aux->getInfo();
        aux = aux->getSiguiente();
   }
   cout<<"  "<<aux->getInfo()<<endl;
}

void ListaDE::mostrarAtras() {
     NodoDE *aux = cabecera;
     while (aux->getSiguiente() != NULL) aux = aux->getSiguiente();
     while (aux->getAnterior() != NULL) {
        cout<<"  "<<aux->getInfo();
        aux = aux->getAnterior();
     }
     cout<<"  "<<aux->getInfo()<<endl;
}
