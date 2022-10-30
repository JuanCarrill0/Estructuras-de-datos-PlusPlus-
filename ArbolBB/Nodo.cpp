#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(int dato) {
   //ctor
   info = dato;
   sig = NULL;
}

Nodo::~Nodo() {
   //dtor
   delete this;
}

void Nodo::setInfo(int dato){
    info = dato;
}

int Nodo::getInfo(){
   return info;
}

void Nodo::setSig(Nodo *otro){
     sig = otro;
}

Nodo *Nodo::getSig(){
   return sig;
}