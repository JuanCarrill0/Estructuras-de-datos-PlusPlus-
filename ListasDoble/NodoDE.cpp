#include "NodoDE.h"
#include <iostream>

using namespace std;

NodoDE::NodoDE(int dato) {
   //ctor
   info = dato;
   anterior = NULL;
   siguiente = NULL;
}

NodoDE::~NodoDE(){
   //dtor
}

void NodoDE::setInfo(int dato){
      info = dato;
}

int NodoDE::getInfo(){
   return info;
}

void NodoDE::setAnterior(NodoDE *nuevo){
    anterior = nuevo;
}

NodoDE *NodoDE::getAnterior(){
    return anterior;
}

void NodoDE::setSiguiente(NodoDE *nuevo){
    siguiente = nuevo;
}

NodoDE *NodoDE::getSiguiente(){
    return siguiente;
}
