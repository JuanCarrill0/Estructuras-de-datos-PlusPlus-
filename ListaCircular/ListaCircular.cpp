#include "ListaCircular.h"
using namespace std;

ListaCircular::ListaCircular(){
   //ctor
   this->cab = NULL;
}

ListaCircular::~ListaCircular() {
   //dtor

}

bool ListaCircular::estaVacia(){
   return (cab == NULL);
}

void ListaCircular::insertar(char dato){
   // creamos el nodo con el dato que nos envian
   Nodo *nuevo = new Nodo(dato);
   //validamos el estado de la lista
   if (estaVacia()) {
       cab = nuevo;
       cab->setSig(cab);
   }else {
       nuevo->setSig(cab->getSig());
       cab->setSig(nuevo);
   }
}

char ListaCircular::extraer(char dato){

}

void ListaCircular::imprimir(){
    Nodo *aux = cab;
    do {
        cout<<aux->getInfo();
        aux = aux->getSig();
    }while (aux != cab);
    cout<<endl;
}