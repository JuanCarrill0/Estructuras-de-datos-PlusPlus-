#include <iostream>

#include "ArbolBB.cpp"

using namespace std;

int main() {
    cout << "Hello world!" << endl;
 /*   ArbolBin *ab2 = new ArbolBin();
    ab2->insertar('E', 'E', 1);
    ab2->insertar('L', 'E', 1);
    ab2->insertar('V', 'E', 2);
    ab2->insertar('I', 'L', 1);
    ab2->insertar('S', 'L', 2);
    ab2->insertar('M', 'V', 1);
    ab2->insertar('G', 'V', 2);
    ab2->insertar('U', 'I', 1);

    ab2->mostrar(ab2->getRaiz());
*/
    ArbolBB *ab1 = new ArbolBB();
    ab1->insertar(21);
    ab1->insertar(13);
    ab1->insertar(5);
    ab1->insertar(33);
    ab1->insertar(18);
    ab1->insertar(15);
    ab1->insertar(36);
    ab1->insertar(40);
    ab1->insertar(25);
    ab1->mostrar(ab1->getRaiz());
    cout<<endl;
    ab1->preorden(ab1->getRaiz());
    cout<<endl;
    ab1->inorden(ab1->getRaiz());
    cout<<endl;
    cout<<"La altura del árbol es: "<<ab1->altura(ab1->getRaiz())<<endl;
    cout<<" El nivel de 13 es :"<<ab1->nivelNodo(13)<<endl;
    cout<<" Cantidad Nodos del árbol es: "<<ab1->cantidadNodosArbol(ab1->getRaiz())<<endl;
    cout<<" Los ancestros son :"<<endl;

    //Solo se hizo hasta el metodo ancestros// 
  

   

   return 0;
}