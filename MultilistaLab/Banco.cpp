#include "Banco.h"

Banco::Banco() {
	cabecera=NULL;
}

Banco::~Banco() {

}

void Banco::setCabecera(Cajero *nuevo) {
	cabecera=nuevo;
}

Cajero *Banco::getCabecera() {
	return cabecera;
}

void Banco::insertarCajero(string nomC) {
	Cajero *nuevo=new Cajero(nomC);
	if (!cabecera) 	{
		cabecera=nuevo;
	}
	else {
		Cajero *actual = cabecera;
		Cajero *anterior = NULL;

		while(actual != NULL && actual->getNomCurso() < nomC) {
			anterior = actual;
			actual = actual->getSiguiente();
		}
		if(!actual) anterior->setSiguiente(nuevo);
		else if(!anterior) {
				  nuevo->setSiguiente(cabecera);
              cabecera = nuevo;
			  }else {
				  nuevo->setSiguiente(actual);
				  anterior->setSiguiente(nuevo);
			  }
	}
}

void Banco::extraerCajero(string nomC) {
	if(cabecera) {
		Cajero *actual = cabecera;
		Cajero *anterior = NULL;
		while (actual != NULL && actual->getNomCurso() !=nomC) {
			anterior = actual;
			actual = actual->getSiguiente();
		}
		if(actual) {
         anterior->setSiguiente(actual->getSiguiente());
		   actual->eliminarTodosEst();
		}
		delete actual;
	}
}

Cajero *Banco::buscarCajero(string nomC) {
     Cajero *aux = cabecera;
     while (aux != NULL && aux->getNomCurso() != nomC) aux = aux->getSiguiente();
     return aux;
}

void Banco::insertarCliente(string nomCur, string nomEst){
   if (cabecera) {
       Cajero *busca = buscarCajero(nomCur);
       if (busca) {
           busca->insertarNodoB(nomEst);
       }else cout<<" No existe el curso "<<endl;
   }else cout<<" No existe la Lista, debe insertar un Curso"<<endl;
}

void Banco::extraerCliente(string nomCurso, string nomEstudiante) {
      Cajero *curso = buscarCajero(nomCurso);
       if (curso) curso->extraerNodoB(nomEstudiante);
       else cout<<" El cursos no existe ";
}

void Banco::mostrar(){
    Cajero *curso = cabecera;
    while (curso) {
         cout<<curso->getNomCurso()<<" => ";
         Cliente *estud = curso->getInicio();
         while (estud) {
            cout<<estud->getNomEstudiante()<<"  ";
            estud = estud->getSiguiente();
         }
         cout<<endl;
         curso = curso->getSiguiente();
    }
}


void Banco::mostrar2(string nomCur){
     Cajero *curso = buscarCajero(nomCur);
     if (curso) {
         cout<<curso->getNomCurso()<<" => ";
         curso->mostrar();
     }
}

