#include <iostream>
#include <string>
#include "Pila.h"

using namespace std;



using namespace std;

Pila1::Pila1(int tam) {
	// TODO Auto-generated constructor stub
    pila = new int[tam];
    tama = tam;
}

Pila1::~Pila1() {
	// TODO Auto-generated destructor stub
}

void Pila1::apilar(int dato){
	if (cima < tama){
		pila[cima] = dato;
		cima ++;
	}else cout<<"Pila llena";
}

int Pila1::desapilar(){
	if (cima > 0){
		int aux = pila[cima-1];
		cima --;
		return aux;
	}else {
		cout<<" Pila Vacia ";
		return -1;
	}
}

void Pila1::mostrar(){
	for(int i = 0; i < cima; i++){
		cout<<pila[i]<<" | ";
	}
	cout<<endl;
}

bool Pila1::siEsta(int dato){
	for(int i = 0; i < cima; i++){
		if (pila[i] == dato) return true;
	}
	return false;
}

int Pila1::tope(){
	if (cima > 0) return pila[cima - 1];
	else return -1;
}

bool Pila1::estaVacia(){
	if (cima == 0) return true;     // return (cima == 0);
	else return false;
}

bool Pila1::estaLlena(){
	if (cima < tama) return false;
	else true;
}