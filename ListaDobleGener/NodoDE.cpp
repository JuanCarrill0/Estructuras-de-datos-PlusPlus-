#include "NodoDE.h"
#include <iostream>

using namespace std;

template <typename T>
NodoDE<T>::NodoDE(T dato) {
   //ctor
   info = dato;
   anterior = NULL;
   siguiente = NULL;
}

template <typename T>
NodoDE<T>::~NodoDE(){
   //dtor
}

template <typename T>
void NodoDE<T>::setInfo(T dato){
      info = dato;
}

template <typename T>
T NodoDE<T>::getInfo(){
   return info;
}

template <typename T>
void NodoDE<T>::setAnterior(NodoDE<T> *nuevo){
    anterior = nuevo;
}

template <typename T>
NodoDE<T> *NodoDE<T>::getAnterior(){
    return anterior;
}

template <typename T>
void NodoDE<T>::setSiguiente(NodoDE<T> *nuevo){
    siguiente = nuevo;
}

template <typename T>
NodoDE<T> *NodoDE<T>::getSiguiente(){
    return siguiente;
}
