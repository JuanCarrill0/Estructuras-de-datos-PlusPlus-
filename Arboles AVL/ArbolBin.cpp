/*
 * ArbolBin.cpp
 *
 *  Created on: 9/09/2020
 *      Author: dirsistemas
 */
#include <iostream>
#include "ArbolBin.h"
using namespace std;

ArbolBin::ArbolBin() {
	// TODO Auto-generated constructor stub
	this->raiz = NULL;
}

void ArbolBin::setRaiz(NodoA *nodo){
	this->raiz = nodo;
}

NodoA *ArbolBin::getRaiz(){
	return raiz;
}

bool ArbolBin::esVacio(){
	return (raiz == NULL);
}

void ArbolBin::insertar(int dato){
	NodoA *nuevo = new NodoA(dato);
	// verifico el estado de la estructura árbol
	if (this->esVacio()) raiz = nuevo;
	else {// debo recorrer el árbol para buscar la posición del nodo
        NodoA *padre = NULL;
        NodoA *actual = this->getRaiz();  // actual = raiz;
        while (actual != NULL && actual->getInfo() != dato){
        	padre = actual;
        	if (actual->getInfo() < dato)
        		actual = actual->getDer();
        	else actual = actual->getIzq();
        }
        if (actual == NULL)
               if (padre->getInfo() < dato) padre->setDer(nuevo);
               else padre->setIzq(nuevo);
        else cout<<" Dato ya existe ...."<<endl;
     }
}

void ArbolBin::preorden(NodoA *actual){
	if (actual != NULL) {
		cout<<actual->getInfo()<<" | ";
		preorden(actual->getIzq());
		preorden(actual->getDer());
	}
}

void ArbolBin::inorden(NodoA *actual){
	if (actual != NULL) {
		inorden(actual->getIzq());
		cout<<actual->getInfo()<<" | ";
		inorden(actual->getDer());
	}
}

void ArbolBin::posorden(NodoA *actual){
	if (actual != NULL) {
		posorden(actual->getIzq());
		posorden(actual->getDer());
		cout<<actual->getInfo()<<" | ";
	}
}

int ArbolBin::altura(NodoA *actual){
	if (actual == NULL) return 0;
	else {
	  int altizq = altura(actual->getIzq());
	  int altder = altura(actual->getDer());
	  if (altizq > altder) return altizq + 1;
	  else return altder + 1;
	}
}

int altura2(NodoA *actual){
	if (!actual) return 0;
	//else return 1 + Max(this->altura(actual->getDer()), this->altura(actual->getIzq()));
	return 0;
}

void ArbolBin::nodoNivel(NodoA *actual, int cont, int nivel){
	if (actual != NULL){
		if (cont == nivel) cout<<"  "<<actual->getInfo();
		nodoNivel(actual->getIzq(), cont + 1, nivel);
		nodoNivel(actual->getDer(), cont + 1, nivel);
	}
}

void ArbolBin::mostrarPorNiveles(NodoA *actual){
	int alt = this->altura(this->getRaiz());
	if (actual != NULL){
		for (int i = 0; i < alt; i++){
			nodoNivel(actual, 0, i);
			//nodoNivel(actual->getDer(), 0, i);
			cout<<endl;
		}
	}
}

int ArbolBin::peso(NodoA *actual){
	if (actual == NULL) return 0;
	else return 1 + peso(actual->getDer()) + peso(actual->getIzq());
}

NodoA *ArbolBin::buscarNodo(char dato){
	NodoA *actual = this->getRaiz();
	while(actual != NULL && actual->getInfo() != dato){
		if (actual->getInfo() < dato) actual = actual->getDer();
		else actual = actual->getIzq();
	}
	if (actual != NULL) return actual;
	else return NULL;
}

int ArbolBin::grado(NodoA *actual){
    if (actual != NULL) {
    	if (actual->getIzq() == NULL && actual->getDer() == NULL) return 0;
    	else if (actual->getIzq() == NULL || actual->getDer() == NULL) return 1;
    	else return 2;
    }
    return -1;
}

int ArbolBin::gradoNodo(char dato){
	return grado(buscarNodo(dato));
}

bool ArbolBin::distintos(NodoA *arb1, NodoA *arb2){
	if (peso(arb1) != peso(arb2)) return true;
	if ((arb1!=NULL && arb2==NULL) || (arb1==NULL && arb2!=NULL)) return true;
	else {
		if (arb1->getInfo() != arb2->getInfo()) return true;
		else {
			distintos(arb1->getIzq(), arb2->getIzq());
			distintos(arb1->getDer(), arb2->getDer());
		}
	}
    return false;
}

bool ArbolBin::semejantes(ArbolBin *a, ArbolBin *b){
	bool sem = false;
	if (peso(a->getRaiz()) != peso(b->getRaiz())) return false;
	else {
		sem = a->compSemejantes(a->getRaiz(), b);
	    sem = b->compSemejantes(b->getRaiz(), a);
	    return sem;
	}
}


bool ArbolBin::compSemejantes(NodoA *actual, ArbolBin *arb2){
	if (actual != NULL){
		if (arb2->buscarNodo(actual->getInfo()) == NULL) return false;
		else return compSemejantes(actual->getIzq(), arb2) && compSemejantes(actual->getDer(), arb2);
    }
	return true;
}

bool ArbolBin::isomorfos(NodoA *nArb1, NodoA *nArb2){
	if (nArb1 == NULL && nArb2 == NULL) return true;
	if ((nArb1!=NULL) && (nArb2==NULL)) return false;
	else if ((nArb1==NULL) && (nArb2!=NULL)) return false;
	else return true && isomorfos(nArb1->getIzq(), nArb2->getIzq()) && isomorfos(nArb1->getDer(), nArb2->getDer());
}

bool ArbolBin::iguales(ArbolBin *arb1, ArbolBin *arb2){
	if ((semejantes(arb1, arb2)) && (isomorfos(arb1->getRaiz(), arb2->getRaiz()))) return true;
	else return false;
}

NodoA *ArbolBin::rotacionIzquierda(NodoA *p){
    NodoA *q = p->getDer();
    p->setDer(q->getIzq());
    q->setIzq(p);
    return q;
}

NodoA *ArbolBin::rotacionDerecha(NodoA *p){
    NodoA *q = p->getIzq();
    p->setIzq(q->getDer());
    q->setDer(p);
    return q;
}

NodoA *ArbolBin::dobleRotacionIzquierda(NodoA *p){
    NodoA *q = p->getDer();
    p->setDer(rotacionDerecha(q));
    return rotacionIzquierda(p);
}

NodoA *ArbolBin::dobleRotacionDerecha(NodoA *p){
	 NodoA *q = p->getIzq();
    p->setIzq(rotacionIzquierda(q));
    return rotacionDerecha(p);
}

NodoA *ArbolBin::balanceo(NodoA *p){
    if (p != NULL){
        p->setIzq(balanceo(p->getIzq()));
        p->setDer(balanceo(p->getDer()));
        int dif = altura(p->getDer()) - altura(p->getIzq());
        if (abs(dif) > 1)
           if (dif > 0) {  // positiva en p
               NodoA *q = p->getDer();
               if ((altura(q->getDer()) - altura(q->getIzq())) >= 0){
				    // positiva en q
				   cout<<"Rotación izquierda sobre "<<p->getInfo()<<endl;
                   return rotacionIzquierda(p);
			   }else{
				   cout<<"doble Rotación izquierda sobre "<<p->getInfo()<<endl;
				   return dobleRotacionIzquierda(p);

			   }
           }
           else  {  // negativa en p
        	   NodoA *q = p->getIzq();
               if ((altura(q->getDer()) - altura(q->getIzq())) <= 0){
				   // negativa en q
				   cout<<"Rotación derecha sobre "<<p->getInfo()<<endl;
				   return rotacionDerecha(p);

			   }else{
				   cout<<"doble Rotación derecha sobre "<<p->getInfo()<<endl;
				   return dobleRotacionDerecha(p);

			   }
           }
    }
    return p;
}



