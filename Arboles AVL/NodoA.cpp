/*
 * NodoA.cpp
 *
 *  Created on: 9/09/2020
 *      Author: dirsistemas
 */
#include <iostream>
#include "NodoA.h"

NodoA::NodoA(int dato) {
	this->info = dato;
	// nodo hoja
	this->izq = NULL;
	this->der = NULL;
}

NodoA::~NodoA(){

}

void NodoA::setInfo(int dato){
	this->info = dato;
}

int NodoA::getInfo(){
	return this->info;
}

void NodoA::setIzq(NodoA *nodo){
	this->izq = nodo;
}

NodoA *NodoA::getIzq(){
	return this->izq;
}

void NodoA::setDer(NodoA *nodo){
	this->der = nodo;
}

NodoA *NodoA::getDer(){
	return this->der;
}

