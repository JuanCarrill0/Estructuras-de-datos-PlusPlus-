#include <iostream>
#include <string>
#include "PilaDinamica.h"

using namespace std;

PilaDinamica::PilaDinamica(){
   //ctor
   cima = NULL;
}

PilaDinamica::~PilaDinamica(){
   //dtor
}

void PilaDinamica::apilar(int dato){
     Nodo *nuevo = new Nodo(dato);
     if (cima == NULL){
         cima = nuevo;
     } 
     else {
          nuevo->setSig(cima);
          cima = nuevo;
     }
}

int PilaDinamica::desapilar(){
    if (cima != NULL){
        int var = cima->getInfo();
        cima = cima->getSig();
        return var;
    } return -1;
}

void PilaDinamica::mostrar(){
    while (cima != NULL){
       cout<<"  "<<cima->getInfo();
       cima = cima->getSig();
    }
    cout<<endl;
}
