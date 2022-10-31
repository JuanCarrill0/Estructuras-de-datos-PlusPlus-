/*
 * TestArboles.cpp
 *
 *  Created on: 9/09/2020
 *      Author: dirsistemas
 */
#include "ArbolBin.cpp"
#include <iostream>
using namespace std;
int main(){
	ArbolBin *a1 = new ArbolBin();
    ArbolBin *a2 = new ArbolBin();
    ArbolBin *a3 = new ArbolBin();
    ArbolBin *a4 = new ArbolBin();

	a1->insertar(2);
	a1->insertar(3);
	a1->insertar(4);


    cout<<"árbol"<<endl;
	a1->mostrarPorNiveles(a1->getRaiz());
    a1->setRaiz(a1->balanceo(a1->getRaiz()));
    cout<<"Balanceado "<<endl;
    a1->mostrarPorNiveles(a1->getRaiz());

    a2->insertar(3);
    a2->insertar(2);
    a2->insertar(1);


    cout<<"árbol"<<endl;
	a2->mostrarPorNiveles(a2->getRaiz());
    a2->setRaiz(a2->balanceo(a2->getRaiz()));
    cout<<"Balanceado "<<endl;
    a2->mostrarPorNiveles(a2->getRaiz());

    a3->insertar(8);
    a3->insertar(4);
    a3->insertar(5);
    

    cout<<"árbol"<<endl;
	a3->mostrarPorNiveles(a3->getRaiz());
    a3->setRaiz(a3->balanceo(a3->getRaiz()));
    cout<<"Balanceado "<<endl;
    a3->mostrarPorNiveles(a3->getRaiz());

    a4->insertar(8);
    a4->insertar(10);
    a4->insertar(9);
    

    cout<<"árbol"<<endl;
	a4->mostrarPorNiveles(a4->getRaiz());
    a4->setRaiz(a4->balanceo(a4->getRaiz()));
    cout<<"Balanceado "<<endl;
    a4->mostrarPorNiveles(a4->getRaiz());




    return 0;
}


