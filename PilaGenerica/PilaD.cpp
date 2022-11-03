#include "PilaD.h"

using namespace std;

template <typename T>
PilaD<T>::PilaD() {
   //ctor
   cima = NULL;
}

template <typename T>
PilaD<T>::~PilaD() {
   //dtor
}

template <typename T>
void PilaD<T>::apilar(T dato) {
     NodoD<T> *nuevo = new NodoD<T>(dato);
     if (cima == NULL) cima = nuevo;
     else {
          nuevo->setSiguiente(cima);
          cima = nuevo;
     }
}

template <typename T>
T PilaD<T>::desapilar(){
    if (cima != NULL){
        int var = cima->getInfo();
        cima = cima->getSiguiente();
        return var;
    } return -1;
}

template <typename T>
void PilaD<T>::print(){
    NodoD<T> *aux = cima;
    while (aux != NULL){
       cout<<"  "<<aux->getInfo();
       aux = aux->getSiguiente();
    }
    cout<<endl;
}


