#include <iostream>
#include <string>
#include "Pila.cpp"
#include "Cola.cpp"
#include "ColaPrioridad.cpp"

using namespace std;

int main() {
   cout<<"Hola Unillanos"<<endl;
   Pila1 p1(5);
   Pila1 p2(5);
   p1.apilar(32);
   p1.apilar(44);
   p1.apilar(55);
   p1.apilar(66);
   p1.apilar(77);
   p1.apilar(88);
   p1.mostrar();
  // p1.extraerElemento(55);
  // p1.mostrar();
   while(!p1.estaVacia()) p2.apilar(p1.desapilar());
   p2.mostrar();
   while(!p2.estaVacia()) p1.apilar(p2.desapilar());
   p1.mostrar();

   cout<<" TRABAJO CON COLAS"<<endl;
   Cola c1(10);
   Cola c2(5);
   Cola c3(5);
   c1.encolar(111);
   c1.encolar(222);
   c1.encolar(333);
   c1.encolar(444);
   c1.encolar(555);
   c1.encolar(333);
   c1.mostrar();
   c1.desencolar();
   c1.mostrar();

   while(!p1.estaVacia()) c3.encolar(p1.desapilar());
   c3.mostrar();
   while(!c3.estaVacia()) p1.apilar(c3.desencolar());
   p1.mostrar();

   cout<<" TRABAJO CON COLAS DE PRIORIDAD"<<endl;
   ColaPrioridad cp1(10);
   cp1.encolar(11, 2);
   cp1.encolar(22, 1);
   cp1.encolar(33, 5);
   cp1.encolar(44, 5);
   cp1.encolar(55, 4);
   cp1.mostrar();
   cp1.desencolar();
   cp1.mostrar();

   return 0;
}