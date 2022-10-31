/*
 * NodoA.h
 *
 *  Created on: 9/09/2020
 *      Author: dirsistemas
 */

#ifndef NODOA_H_
#define NODOA_H_

class NodoA {
private:
	int info;
	NodoA *izq;
	NodoA *der;

public:
	NodoA(int);
	virtual ~NodoA();
	void setInfo(int);
	int getInfo();
	void setIzq(NodoA *);
	NodoA *getIzq();
	void setDer(NodoA *);
	NodoA *getDer();
	void prchar();
};

#endif /* NODOA_H_ */
