#include <iostream>
#include "ColaPrioridad.h"

using namespace std;

ColaPrioridad::ColaPrioridad(int tam) {
   //ctor
   colap = new int*[2];
   colap[0] = new int[tam];
   colap[1] = new int[tam];
   fin = 0;
   tama = tam;
}

ColaPrioridad::~ColaPrioridad() {
   //dtor
}

bool ColaPrioridad::estaLlena(){
    return (fin == tama);
}

void ColaPrioridad::encolar(int dato, int prio){
   if (!estaLlena()) {
      colap[0][fin] = dato;
      colap[1][fin] = prio;
      fin++;
   }else cout<<"Cola está llena"<<endl;
}

bool ColaPrioridad::estaVacia(){
   return (fin == 0);
}

int ColaPrioridad::buscarXPrioridad(){
    int posmp = 0;
    for (int i = 0; i < fin; i++)
      if (colap[1][i] > colap[1][posmp])  posmp = i;
    return posmp;
}

int ColaPrioridad::desencolar(){
   if (!estaVacia()){
      int pos = buscarXPrioridad();
      int aux = colap[0][pos];
      fin--;
      for (int i = pos; i < fin; i++){
         colap[0][i] = colap[0][i + 1];
         colap[1][i] = colap[1][i + 1];
      }
      return aux;
   }else {
        cout<<"Cola está vacia"<<endl;
        return -1;
   }
}

void ColaPrioridad::mostrar(){
     for (int i = 0; i < fin; i++)
         cout<<colap[0][i]<<", "<<colap[1][i]<<" | ";
     cout<<endl;
}