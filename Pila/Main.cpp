#include <iostream>
#include <string>
#include "Pila.cpp"


using namespace std;

int main() {
	Pila1 p1(5);

    for(int i=0; i<5;i++){
        int Dato;
        cout<<"Ingrese el valor en la pila"<<endl;
        cin>>Dato;
        p1.apilar(Dato);
    }

    p1.mostrar();
    p1.desapilar();
    p1.mostrar();

	return 0;
}
