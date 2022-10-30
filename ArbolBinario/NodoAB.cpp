#include <iostream>
#include "NodoAB.h"

using namespace std;

NodoAB::NodoAB(char dato) {
   //ctor
   info = dato;
   izquierda = NULL;
   derecha = NULL;
}

NodoAB::~NodoAB() {
   //dtor
}

void NodoAB::setInfo(char dato){
    info = dato;
}

char NodoAB::getInfo(){
   return info;
}

void NodoAB::setIzquierda(NodoAB *nuevo){
    izquierda = nuevo;
}

NodoAB *NodoAB::getIzquierda(){
    return izquierda;
}

void NodoAB::setDerecha(NodoAB *nuevo){
    derecha = nuevo;
}

NodoAB *NodoAB::getDerecha(){
    return derecha;
}

void NodoAB::mostrar(){
     cout<<"  "<<info;
}
