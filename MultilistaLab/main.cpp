#include <iostream>

#include "Banco.cpp"


using namespace std;

int main() {
    cout << "Hello world!" << endl;
    Banco *l1 = new Banco();;

    l1->insertarCajero("Cajero1");
    l1->insertarCajero("Cajero2");
    l1->insertarCajero("Cajero3");
    l1->insertarCajero("Cajero4");


    l1->mostrar();
 
    return 0;
}