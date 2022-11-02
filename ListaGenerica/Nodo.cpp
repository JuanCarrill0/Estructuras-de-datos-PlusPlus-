#include "Nodo.h"

using namespace std;

template <class T>
NodoD<T>::NodoD(T dato) {
   //ctor
   info = dato;
   siguiente = NULL;
}

template <typename T>
NodoD<T>::~NodoD(){
   //dtor
}

template <typename T>
void NodoD<T>::setInfo(T dato){
     info = dato;
}

template <typename T>
T NodoD<T>::getInfo(){
   return info;
}

template <typename T>
void NodoD<T>::setSig(NodoD<T> *nuevo){
     siguiente = nuevo;
}

template <class T>
NodoD<T> *NodoD<T>::getSig(){
    return siguiente;
}

template <typename T>
void NodoD<T>::mostrar(){
    cout<<info<<endl;
}
