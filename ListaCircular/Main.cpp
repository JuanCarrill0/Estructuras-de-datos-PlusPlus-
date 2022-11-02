#include <iostream>
#include "ListaCircular.cpp"

using namespace std;

int main(void){
    ListaCircular *l1 = new ListaCircular();
    ListaCircular *l2 = new ListaCircular();

    l1->insertar('A');
    l1->insertar('B');
    l1->insertar('C');
    l1->insertar('D');
    l1->insertar('F');
    l1->imprimir();

    l2->insertar('G');
    l2->insertar('H');
    l2->imprimir();

    return 0;
}
