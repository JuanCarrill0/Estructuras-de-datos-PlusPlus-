#include "ColaDinamica.h"


template <typename T>
ColaDinamica<T>::ColaDinamica() {
   //ctor
   inicio = NULL;
   fin = NULL;
}


template <typename T>
ColaDinamica<T>::~ColaDinamica() {
   //dtor
}


template <typename T>
void ColaDinamica<T>::encolar(T dato){
   Nodo<T> *nuevo = new Nodo<T>(dato);
   if (inicio == NULL) {
      inicio = nuevo;
      fin = nuevo;
   }else {
       fin->setSig(nuevo);
       fin = nuevo;
   }
}


template <typename T>
T ColaDinamica<T>::desencolar(){
     if (inicio != NULL){
        int var = inicio->getInfo();
        inicio = inicio->getSig();
        return var;
    } return -1;
}


template <typename T>
void ColaDinamica<T>::mostrar(){
    Nodo<T> *aux = inicio;
    while (aux != NULL){
         cout<<"  "<<aux->getInfo();
         aux=aux->getSig();

    }
    cout<<endl;
}
