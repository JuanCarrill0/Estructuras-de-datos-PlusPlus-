#include <iostream>
#include "PilaD.cpp"


using namespace std;

template <typename T>
T mayor(T x, T y){
    return (x < y) ? y : x;
}

template <typename T, typename V>
T maximo(T x, V y){
     return (x < y) ? y : x;
}

int main() {
    cout << "Hello world!" << endl;
    cout<<" El mayor es :"<<mayor('s', 'v')<<endl;
    cout<<" El mayor es :"<<mayor(2, 4)<<endl;
    cout<<" El mayor es :"<<maximo(3.5, 1)<<endl;
    cout<<" El mayor es :"<<maximo('c', 3.5)<<endl;
    cout<<" El mayor es :"<<maximo(3.5, 'c')<<endl;

    PilaD<int> *pilEnt = new PilaD<int>();
    pilEnt->apilar(1);
    pilEnt->apilar(6);
    pilEnt->apilar(0);
    pilEnt->apilar(0);
     pilEnt->apilar(0);
      pilEnt->apilar(1);
       pilEnt->apilar(0);
        pilEnt->apilar(0);
        pilEnt->desapilar();
    pilEnt->print();

    PilaD<char> *pilChar = new PilaD<char>();
    pilChar->apilar('E');
    pilChar->apilar('L');
    pilChar->apilar('V');
    pilChar->apilar('I');
    pilChar->apilar('S');
    pilChar->print();

    PilaD<string> *pilStr = new PilaD<string>();
    pilStr->apilar("ELVIS");
    pilStr->apilar("MIGUEL");
    pilStr->apilar("PEREZ");
    pilStr->apilar("RODRIGUEZ");
    pilStr->print();

    return 0;
}
