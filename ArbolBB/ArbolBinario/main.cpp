#include <iostream>

#include "ArbolBin.cpp"
using namespace std;

int main() {
    ArbolBin *ab2 = new ArbolBin();
    ab2->insertar('E', 'E', 1);
    ab2->insertar('L', 'E', 1);
    ab2->insertar('V', 'E', 2);
    ab2->insertar('I', 'L', 1);
    ab2->insertar('S', 'L', 2);
    ab2->insertar('M', 'V', 1);
    ab2->insertar('G', 'V', 2);
    ab2->insertar('U', 'I', 1);

    ab2->mostrar(ab2->getRaiz());
}
