#include <iostream>
#include "ArbolBB.h"

using namespace std;

ArbolBB::ArbolBB() {
   //ctor
   raiz = NULL;
}

ArbolBB::~ArbolBB() {
   //dtor
}

void ArbolBB::setRaiz(NodoAB *nuevaRaiz){
    raiz = nuevaRaiz;
}

NodoAB *ArbolBB::getRaiz(){
   return raiz;
}

bool ArbolBB::estaVacio(){
    return (raiz == NULL);
}

void ArbolBB::insertar(int dato){
   NodoAB *nuevo = new NodoAB(dato);
   if (estaVacio()) {  // Validar el estado
         raiz = nuevo;
   }else {
       NodoAB *actual = this->getRaiz();
       NodoAB *padre = NULL;
       while (actual != NULL && actual->getInfo() != dato){
           padre = actual;
           if (dato < actual->getInfo()) actual = actual->getIzquierda();
           else actual = actual->getDerecha();
       }
       if (actual == NULL)
            if (dato < padre->getInfo()) padre->setIzquierda(nuevo);
            else padre->setDerecha(nuevo);
       else cout<<" Dato ya existe"<<endl;
   }
}

void ArbolBB::mostrar(NodoAB *actual){
    if (actual != NULL) {
          cout<<"  "<<actual->getInfo();
          mostrar(actual->getIzquierda());
          mostrar(actual->getDerecha());
    }
}

void ArbolBB::preorden(NodoAB *actual){
    if (actual != NULL) {
          cout<<"  "<<actual->getInfo();
          preorden(actual->getIzquierda());
          preorden(actual->getDerecha());
    }
}


void ArbolBB::inorden(NodoAB *actual){
    if (actual != NULL) {
          inorden(actual->getIzquierda());
          cout<<"  "<<actual->getInfo();
          inorden(actual->getDerecha());
    }
}

int ArbolBB::altura(NodoAB *actual){
   if (actual == NULL) return 0;
   else {
       int altizq = altura(actual->getIzquierda());
       int altder = altura(actual->getDerecha());
       if (altizq > altder) return (altizq + 1);
       else return (altder + 1);
   }
}

int ArbolBB::nivelNodo(int dato){
   NodoAB *actual = this->getRaiz();
   int nivel = 0;
   while(actual != NULL && actual->getInfo() != dato){
      nivel++;
      if (dato < actual->getInfo()) actual = actual->getIzquierda();
      else actual = actual->getDerecha();
   }
   if (actual != NULL) return nivel;
   else {
         return -1;
   }
}

int ArbolBB::cantidadNodosArbol(NodoAB *actual){
     if (actual == NULL) return 0;
     else return 1 + cantidadNodosArbol(actual->getDerecha()) + cantidadNodosArbol(actual->getIzquierda());
}

NodoAB *ArbolBB::buscarNodo(int dato){
    NodoAB *buscado = this->getRaiz();
     while (buscado != NULL && buscado->getInfo() != dato){
         if (dato < buscado->getInfo()) buscado = buscado->getIzquierda();
         else buscado = buscado->getDerecha();
     }
     return buscado;
}

int ArbolBB::peso(int dato){
    NodoAB *actual = buscarNodo(dato);
    if (actual) return (this->cantidadNodosArbol(actual) - 1);
    else {
      cout<<"No encontrado"<<endl;
      return 0;
    }
}


int ArbolBB::grado(int dato){
    NodoAB *actual = buscarNodo(dato);
    if (actual) {
        if(actual->getIzquierda() == NULL && actual->getDerecha() == NULL) return 0;
        else if (actual->getIzquierda() != NULL && actual->getDerecha() != NULL) return 2;
             else return 1;
    }
}

void ArbolBB::mostrarNivel(NodoAB *actual, int niv) {
    if (actual) {
         if (nivelNodo(actual->getInfo()) == niv) cout<<"   "<<actual->getInfo();
         else {
            mostrarNivel(actual->getIzquierda(), niv);
            mostrarNivel(actual->getDerecha(), niv);
         }
    }
}

void ArbolBB::mostrarPorNiveles() {
   int altMax = altura(this->getRaiz());
   for(int i = 0; i < altMax; i++) {
      mostrarNivel(this->getRaiz(), i);
      cout<<endl;
   }
}

/*bool ArbolBB::isomorfos(NodoAB *nodoArb1, NodoAB *nodoArb2) {
    if(nodoArb1 && nodoArb2 != NULL) {
        return isomorfos(nodoArb1->getIzquierda(), nodoArb2->getIzquierda()) && isomorfos(nodoArb1->getDerecha(), nodoArb2->getDerecha());
    }else {
        if (nodoArb1 == NULL && nodoArb2 != NULL) return false;
        else if (nodoArb1 != NULL && nodoArb2 == NULL) return false;
             else return true;
    }
}*/

bool ArbolBB::isomorfos(NodoAB *nodoArb1, NodoAB *nodoArb2) {
     if (nodoArb1 == NULL && nodoArb2 == NULL) return true;
     if (nodoArb1 == NULL && nodoArb2 != NULL) return false;
     if (nodoArb1 != NULL && nodoArb2 == NULL) return false;
     else return isomorfos(nodoArb1->getIzquierda(), nodoArb2->getIzquierda()) && isomorfos(nodoArb1->getDerecha(), nodoArb2->getDerecha());
}

bool ArbolBB::diferentes(NodoAB *nodoArb1, NodoAB *nodoArb2) {
    if (nodoArb1 == NULL && nodoArb2 == NULL) return false;
    if (cantidadNodosArbol(nodoArb1) != cantidadNodosArbol(nodoArb2)) return true;
    if (!isomorfos(nodoArb1, nodoArb2)) return true;
    else {
        if (nodoArb1->getInfo() != nodoArb2->getInfo()) return true;
        else return diferentes(nodoArb1->getIzquierda(), nodoArb2->getIzquierda()) && diferentes(nodoArb1->getDerecha(), nodoArb2->getDerecha());
    }
}

bool ArbolBB::iguales(NodoAB *nodoArb1, NodoAB *nodoArb2){
    if (diferentes(nodoArb1, nodoArb2)) return false;
    else return true;
}

/*
ColaD *ArbolBB::ancestros(int dato){
    NodoAB *buscado = buscarNodo(dato);
    NodoAB *aux = this->getRaiz();
    ColaD *colaAnc = new ColaD();
    if (buscado) {
       while (aux != NULL && aux->getInfo() != dato){
           colaAnc->encolar(aux->getInfo());
           if (dato < aux->getInfo()) aux = aux->getIzquierda();
           else aux = aux->getDerecha();
       }
       return colaAnc;
    }
    return NULL;
}

void ArbolBB::descendiente(NodoAB *aux, Lista *lista){
    if (aux != NULL) {
       lista->insertar(aux->getInfo());
       descendiente(aux->getIzquierda(), lista);
       descendiente(aux->getDerecha(), lista);
    }
}

Lista *ArbolBB::descendientes(int dato){
    NodoAB *buscado = buscarNodo(dato);
    Lista *listaDesc = new Lista();
    if (buscado) {
       descendiente(buscado->getIzquierda(), listaDesc);
       descendiente(buscado->getDerecha(), listaDesc);
    }
    return listaDesc;
}

PilaDinamica *ArbolBB::camino(int dato1, int dato2){
      NodoAB *buscado = buscarNodo(dato1);
      ColaD *camino = new ColaD();
      if (buscado) {
         while (buscado != NULL && buscado->getInfo() != dato2){
            camino->encolar(buscado->getInfo());
            if (dato2 < buscado->getInfo()) buscado = buscado->getIzquierda();
            else buscado = buscado->getDerecha();
         }
         if (buscado) {
               camino->encolar(buscado->getInfo());
               return camino;
         }
      }
      return NULL;
} */

NodoAB *ArbolBB::recibePadre(NodoAB * salir){
    switch(this->grado(salir->getInfo())){
         case 0: return NULL;
         case 1: if (salir->getIzquierda() != NULL) return salir->getIzquierda();
                 else return salir->getDerecha();
         case 2: NodoAB *reemplazo = salir->getDerecha();
                 NodoAB *padreReemplazo = NULL;
                 while (reemplazo->getIzquierda() != NULL) {
                     padreReemplazo = reemplazo;
                     reemplazo = reemplazo->getIzquierda();
                 }
                 if (padreReemplazo != NULL) {
                     padreReemplazo->setIzquierda(reemplazo->getDerecha());
                     reemplazo->setDerecha(salir->getDerecha());
                 }
                 reemplazo->setIzquierda(salir->getIzquierda());
                 return reemplazo;
        // default : return NULL;
    }
}

void ArbolBB::extraer(int dato){
   NodoAB *salir = this->getRaiz();
   NodoAB *padre = NULL;
   while (salir != NULL && salir->getInfo() != dato){
        padre = salir;
        if (dato < salir->getInfo()) salir = salir->getIzquierda();
        else salir = salir->getDerecha();
   }
     if (salir != NULL) {
         NodoAB *reemplazo = recibePadre(salir);
         if (padre != NULL) {
             if(padre->getInfo() > salir->getInfo())
                 padre->setIzquierda(reemplazo);
             else padre->setDerecha(reemplazo);
         }else this->setRaiz(reemplazo);
     }else cout<<" El dato no existe ";
}

