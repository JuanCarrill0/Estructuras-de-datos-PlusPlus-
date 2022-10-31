#include <iostream>
#include "NodoAB.h"

using namespace std;

template <class T>
NodoAB<T>::NodoAB(T dato) {
   //ctor
   info = dato;
   izquierda = NULL;
   derecha = NULL;
}

template <typename T>
NodoAB<T>::~NodoAB() {
   //dtor
}

template <typename T>
void NodoAB<T>::setInfo(T dato){
    info = dato;
}

template <typename T>
T NodoAB<T>::getInfo(){
   return info;
}

template <typename T>
void NodoAB<T>::setIzquierda(NodoAB<T> *nuevo){
    izquierda = nuevo;
}

template <typename T>
NodoAB<T> *NodoAB<T>::getIzquierda(){
    return izquierda;
}

template <typename T>
void NodoAB<T>::setDerecha(NodoAB<T> *nuevo){
    derecha = nuevo;
}

template <typename T>
NodoAB<T> *NodoAB<T>::getDerecha(){
    return derecha;
}

template <typename T>
void NodoAB<T>::mostrar(){
     cout<<"  "<<info;
}
