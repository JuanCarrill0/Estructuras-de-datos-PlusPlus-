#include "Lista.h"

Lista::Lista() {
   //ctor
   this->cab = NULL;
}

Lista::~Lista() {
   //dtor
   Nodo *aux;
   while (cab != NULL){
        aux = cab;
        cab = cab->getSig();
        delete aux;
   }
}

bool Lista::estaVacia(){
    return (cab == NULL);
}

void Lista::insertar(int dato) {
    // crear la estructara unitaria de almacenamiento
    Nodo *nuevo = new Nodo(dato);
    // validar el estado de la lista
    if (this->estaVacia()) {   //if (this->estaVacia())
        cab = nuevo;
    }
   else {
       // creamos nodos auxiliares
       Nodo *aux = cab;
       Nodo *ant = NULL;
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

Lista *Lista::copia(Lista *l){
    Nodo *aux = l->cab;
    while (aux != NULL) {
        this->insertar(aux->getInfo());
        aux = aux->getSig();
    }
    return this;
}

void Lista::imprimir(){
    Nodo *aux = cab;
    print(aux);
}

void Lista::print(Nodo *cabe){
    if(cabe==NULL){
        cout<<""<<endl;
    }else{
        cout<<cabe->getInfo()<<endl;
        print(cabe->getSig());
    }
}

