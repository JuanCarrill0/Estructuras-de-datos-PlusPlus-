#include "ColaDinamica.h"

ColaDinamica::ColaDinamica() {
   //ctor
   inicio = NULL;
   fin = NULL;
}

ColaDinamica::~ColaDinamica() {
   //dtor
}

void ColaDinamica::encolar(int dato){
   Nodo *nuevo = new Nodo(dato);
   if (inicio == NULL) {
      inicio = nuevo;
      fin = nuevo;
   }else {
       fin->setSig(nuevo);
       fin = nuevo;
   }
}

int ColaDinamica::desencolar(){
     if (inicio != NULL){
        int var = inicio->getInfo();
        inicio = inicio->getSig();
        return var;
    } return -1;
}

void ColaDinamica::mostrar(){
    Nodo *aux = inicio;
    while (aux != NULL){
         cout<<"  "<<aux->getInfo();
         aux=aux->getSig();

    }
    cout<<endl;
}
