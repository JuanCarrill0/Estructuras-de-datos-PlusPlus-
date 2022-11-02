#include <iostream>

#include "ListaDE.cpp"

using namespace std;

int main() {
    cout << "Hello world!" << endl;
    ListaDE<int> *l1 = new ListaDE<int>();
    l1->insertar(5);
    l1->insertar(8);
    l1->insertar(7);
    l1->insertar(2);
    l1->mostrarAdelante();
    l1->mostrarAtras();
    l1->extraer(7);
    l1->mostrarAdelante();
    l1->mostrarAtras();

    return 0;
}
