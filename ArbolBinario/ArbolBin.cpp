#include <iostream>
#include "ArbolBin.h"

using namespace std;

using namespace std;

ArbolBin::ArbolBin() {
   //ctor
   raiz = NULL;
}

ArbolBin::~ArbolBin() {
   //dtor
}

NodoAB *ArbolBin::getRaiz(){
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


NodoAB *ArbolBin::buscarNodo(NodoAB *aux, char buscar){
     if(aux == NULL){
         cout<<" es el fin "<<endl;
     	return NULL;
	 }else{
		cout<<"buscar: "<<buscar<<" -- aux: "<<aux->getInfo()<<endl;
	 	if(aux->getInfo()==buscar){
	 		return aux;
		 }else{
		 	NodoAB *bus = buscarNodo(aux->getIzquierda(), buscar);
		 	if(bus){
		 		if(bus->getInfo()==buscar) aux = bus;
			 }else{
				cout<<"sigue der"<<endl;
            NodoAB *bus2 = buscarNodo(aux->getDerecha(), buscar);
		 		if(bus2){
		 		   if(bus2->getInfo()==buscar) aux = bus2;
         }
      }
	 }
   }
}

bool ArbolBin::estaVacio(){
    return (raiz == NULL);
}

void ArbolBin::insertar(char dato, char padre, int pos) {
      NodoAB *nuevo = new NodoAB(dato);
      if (estaVacio()) raiz = nuevo;
      else {
         //NodoAB *aux = raiz;
         NodoAB *buscado = buscarNodo(raiz, padre);
         if (buscado) {
             cout<<" encontrado "<<buscado->getInfo()<<endl;
            if (pos == 1 && buscado->getIzquierda() == NULL)
                 buscado->setIzquierda(nuevo);
            if (pos == 2 && buscado->getDerecha() == NULL)
                 buscado->setDerecha(nuevo);
         }
      }
}

void ArbolBin::mostrar(NodoAB *aux){
     if (aux != NULL) {
         cout<<"  "<<aux->getInfo();
         mostrar(aux->getIzquierda());
         mostrar(aux->getDerecha());
     }
}