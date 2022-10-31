/*
 * ArbolBin.h
 *
 *  Created on: 9/09/2020
 *      Author: dirsistemas
 */

#ifndef ARBOLBIN_H_
#define ARBOLBIN_H_

#include "NodoA.cpp"

class ArbolBin {
	private:
		NodoA *raiz;
	public:
		ArbolBin();
		~ArbolBin();
		void setRaiz(NodoA *);
		NodoA *getRaiz();
		bool esVacio();
		void insertar(int);
		int extraer(int);
		void preorden(NodoA *);
		void inorden(NodoA *);
		void posorden(NodoA *);
		int altura(NodoA *);
		void nodoNivel(NodoA *, int, int);
		void mostrarPorNiveles(NodoA *);
		int peso(NodoA *);
		NodoA *buscarNodo(char);
		int grado(NodoA *);
		int gradoNodo(char);
		bool distintos(NodoA *, NodoA *);
		bool compSemejantes(NodoA *, ArbolBin *);
		bool semejantes(ArbolBin *, ArbolBin *);
		bool isomorfos(NodoA *, NodoA *);
		bool iguales(ArbolBin *, ArbolBin *);
		NodoA *rotacionIzquierda(NodoA *);
		NodoA *rotacionDerecha(NodoA *);
		NodoA *dobleRotacionIzquierda(NodoA *);
		NodoA *dobleRotacionDerecha(NodoA *);
		NodoA *balanceo(NodoA *);
};

#endif /* ARBOLBIN_H_ */
