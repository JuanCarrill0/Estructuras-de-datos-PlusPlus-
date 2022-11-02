#include "ListaDE.h"
#include <iostream>
using namespace std;

template <typename T>
ListaDE<T>::ListaDE() {
   //ctor
   cabecera = NULL;
}

template <typename T>
ListaDE<T>::~ListaDE() {
   //dtor
}

template <typename T>
void ListaDE<T>::insertar(T dato) {
    NodoDE<T> *nuevo = new NodoDE<T>(dato);
    if (!cabecera) cabecera = nuevo;
    else {
        NodoDE<T> *aux = cabecera;
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

template <typename T>
T ListaDE<T>::extraer(T dato){
    if (cabecera){
        NodoDE<T> *aux = cabecera;
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

template <typename T>
void ListaDE<T>::mostrarAdelante() {
   NodoDE<T> *aux = cabecera;
   while (aux->getSiguiente() != NULL) {
        cout<<"  "<<aux->getInfo();
        aux = aux->getSiguiente();
   }
   cout<<"  "<<aux->getInfo()<<endl;
}

template <typename T>
void ListaDE<T>::mostrarAtras() {
     NodoDE<T> *aux = cabecera;
     while (aux->getSiguiente() != NULL) aux = aux->getSiguiente();
     while (aux->getAnterior() != NULL) {
        cout<<"  "<<aux->getInfo();
        aux = aux->getAnterior();
     }
     cout<<"  "<<aux->getInfo()<<endl;
}
