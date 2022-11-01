#include <iostream>
#include "Nodo.h"

using namespace std;


template <typename T>
Nodo<T>::Nodo(T dato) {
   //ctor
   info = dato;
   sig = NULL;
}


template <typename T>
Nodo<T>::~Nodo() {
   //dtor
   delete this;
}


template <typename T>
void Nodo<T>::setInfo(T dato){
    info = dato;
}


template <typename T>
T Nodo<T>::getInfo(){
   return info;
}


template <typename T>
void Nodo<T>::setSig(Nodo *otro){
     sig = otro;
}

template <typename T>
Nodo<T> *Nodo<T>::getSig(){
   return sig;
}

