#include <iostream>
#include "Lista.cpp"

using namespace std;

int main(void){
    Lista<int>*l1 = new Lista<int>();

    l1->insertar(21);
    l1->insertar(23);
    l1->insertar(32);
    l1->insertar(28);
    l1->insertar(10);
    l1->imprimir();
    
return 0;
}