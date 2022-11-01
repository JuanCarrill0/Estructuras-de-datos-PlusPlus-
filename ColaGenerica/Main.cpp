
#include "ColaDinamica.cpp"

using namespace std;

int main(){
	ColaDinamica<int> *ColEnt =new ColaDinamica<int>();
  
    
    for(int i=0; i<5;i++){
        int Dato;
        cout<<"Ingrese el valor en la Cola"<<endl;
        cin>>Dato;
        ColEnt->encolar(Dato);
    }

    ColEnt->mostrar();
   


    
	return 0;
}
