#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola(int tam) {
   //ctor
   cola = new int[tam];
   fin = 0;
   tama = tam;
}

Cola::~Cola(){
   //dtor
}

bool Cola::estaLlena(){
    return (fin == tama);
}

void Cola::encolar(int dato){
   if (!estaLlena()) {
      cola[fin] = dato;
      fin++;
   }else cout<<"Cola está llena"<<endl;
}

bool Cola::estaVacia(){
   return (fin == 0);
}

int Cola::desencolar(){
   if (!estaVacia()){
      int aux = cola[0];
      fin--;
      for (int i = 0; i < fin; i++)
         cola[i] = cola[i + 1];
      return aux;
   }else {
        cout<<"Cola está vacia"<<endl;
        return -1;
   }
}

int Cola::primero(){
    return (cola[0]);
}

void Cola::mostrar(){
     for (int i = 0; i < fin; i++)
         cout<<cola[i]<<" | ";
     cout<<endl;
}