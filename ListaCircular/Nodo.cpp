#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(char dato) {
   //ctor
   info = dato;
   sig = NULL;
}

Nodo::~Nodo() {
   //dtor

}

void Nodo::setInfo(char dato){
     info = dato;
}

char Nodo::getInfo(){
    return info;
}

void Nodo::setSig(Nodo *nodo){
     sig = nodo;
}

Nodo *Nodo::getSig(){
    return sig;
}