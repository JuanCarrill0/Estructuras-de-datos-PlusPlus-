#include "Lista.h"

template <typename T>
Lista<T>::Lista() {
   //ctor
   this->cab = NULL;
}

template <typename T>
Lista<T>::~Lista() {
   //dtor
   NodoD<T> *aux;
   while (cab != NULL){
        aux = cab;
        cab = cab->getSig();
        delete aux;
   }
}

template <typename T>
bool Lista<T>::estaVacia(){
    return (cab == NULL);
}

template <typename T>
void Lista<T>::insertar(T dato) {
    // crear la estructara unitaria de almacenamiento
    NodoD<T> *nuevo = new NodoD<T>(dato);
    // validar el estado de la lista
    if (this->estaVacia()) {   //if (this->estaVacia())
        cab = nuevo;
    }
   else {
       // creamos nodos auxiliares
       NodoD<T> *aux = cab;
       NodoD<T> *ant = NULL;
       // recorremos la lista, buscando la posición a ingresar el dato
       while (aux != NULL && aux->getInfo() < dato) {
            ant = aux;
            aux = aux->getSig();
       }
       // verificamos si el dato a ingresar es el último
       if (!aux) {   //aux == NULL
           ant->setSig(nuevo);
       }
       // verificamos si el dato a ingresar es el Primero
       else if (aux == cab) {  //ant == NULL  ó !ant
           nuevo->setSig(cab);
           cab = nuevo;
       }
       // por defecto, el dato a ingresar será en medio de dos nodos
       else {
           nuevo->setSig(aux);
           ant->setSig(nuevo);
       }

   }
}

template <typename T>
Lista<T> *Lista<T>::copia(Lista<T> *l){
    NodoD<T> *aux = l->cab;
    while (aux != NULL) {
        this->insertar(aux->getInfo());
        aux = aux->getSig();
    }
    return this;
}

template <typename T>
void Lista<T>::imprimir(){
    NodoD<T> *aux = cab;
    print(aux);
}

template <typename T>
void Lista<T>::print(NodoD<T> *cabe){
    if(cabe==NULL){
        cout<<""<<endl;
    }else{
        cout<<cabe->getInfo()<<endl;
        print(cabe->getSig());
    }
}

