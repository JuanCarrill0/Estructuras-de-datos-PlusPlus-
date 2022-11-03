
#include "PilaDinamica.cpp"



using namespace std;

int main() {
	PilaDinamica p1;
  
    
    for(int i=0; i<5;i++){
        int Dato;
        cout<<"Ingrese el valor en la pila"<<endl;
        cin>>Dato;
        p1.apilar(Dato);
    }

    p1.desapilar();
    p1.mostrar();


    
	return 0;
}
