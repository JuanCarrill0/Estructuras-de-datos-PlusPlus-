#include <iostream>
#include "ArbolBin.h"

using namespace std;

template <typename T>
ArbolBin<T>::ArbolBin() {
   //ctor
   raiz = NULL;
}

template <typename T>
ArbolBin<T>::~ArbolBin() {
   //dtor
}

template <typename T>
NodoAB<T> *ArbolBin<T>::getRaiz(){
   return raiz;
}

/*NodoAB *ArbolBin::buscarNodo(NodoAB *aux, char padre){
    if (aux != NULL) {
          cout<<" sigo buscando con "<<aux->getInfo()<<" y padre "<<padre<<endl;
        if (aux->getInfo() == padre) return aux;
        return buscarNodo(aux->getIzquierda(), padre);
        return buscarNodo(aux->getDerecha(), padre);
      }else return aux;
}*/


template <typename T>
NodoAB<T> *ArbolBin<T>::buscarNodo(NodoAB<T> *aux, T buscar){
     if(aux == NULL){
         cout<<" es el fin "<<endl;
     	return NULL;
	 }else{
		cout<<"buscar: "<<buscar<<" -- aux: "<<aux->getInfo()<<endl;
	 	if(aux->getInfo()==buscar){
	 		return aux;
		 }else{
		 	NodoAB<T> *bus = buscarNodo(aux->getIzquierda(), buscar);
		 	if(bus){
		 		if(bus->getInfo()==buscar) aux = bus;
			 }else{
				cout<<"sigue der"<<endl;
            NodoAB<T> *bus2 = buscarNodo(aux->getDerecha(), buscar);
		 		if(bus2){
		 		   if(bus2->getInfo()==buscar) aux = bus2;
         }
      }
	 }
   }
}

template <typename T>
bool ArbolBin<T>::estaVacio(){
    return (raiz == NULL);
}

template <typename T>
void ArbolBin<T>::insertar(T dato, T padre, T pos) {
      NodoAB<T> *nuevo = new NodoAB<T>(dato);
      if (estaVacio()) raiz = nuevo;
      else {
         //NodoAB *aux = raiz;
         NodoAB<T> *buscado = buscarNodo(raiz, padre);
         if (buscado) {
             cout<<" encontrado "<<buscado->getInfo()<<endl;
            if (pos == 1 && buscado->getIzquierda() == NULL)
                 buscado->setIzquierda(nuevo);
            if (pos == 2 && buscado->getDerecha() == NULL)
                 buscado->setDerecha(nuevo);
         }
      }
}

template <typename T>
void ArbolBin<T>::mostrar(NodoAB<T> *aux){
     if (aux != NULL) {
         cout<<"  "<<aux->getInfo();
         mostrar(aux->getIzquierda());
         mostrar(aux->getDerecha());
     }
}