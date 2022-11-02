#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(int dato) {
   //ctor
   info = dato;
   sig = NULL;
}


Nodo::Nodo() {
   //ctor
   info = 0;
   sig = NULL;
}

Nodo::~Nodo() {
   //dtor
   delete this;
}

void Nodo::setInfo(int dato){
    info = dato;
}

int Nodo::getInfo(){
   return info;
}

void Nodo::setSig(Nodo *otro){
     sig = otro;
}

Nodo *Nodo::getSig(){
   return sig;
}



/*int main() {
   Nodo *n1 = new Nodo();
   Nodo *n2 = new Nodo();
   Nodo *n3 = new Nodo();

   n1->setInfo(20);
   n2->setInfo(55);
   n3->setInfo(80);

   cout<<" nodo 1 "<<n1->getInfo()<<endl;

   n1->setSig(n2);
   cout<<" nodo 2 "<<n1->getSig()->getInfo()<<endl;

   n2->setSig(n3);
   n2->setSig(NULL);
    cout<<" nodo 3 "<<n1->getSig()->getSig()->getInfo()<<endl;

return 0;
}*/