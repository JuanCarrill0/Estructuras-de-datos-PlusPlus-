#include "Cajero.h"

Cajero::Cajero(string nom) {
	nomCurso=nom;
	siguiente=NULL;
	inicio=NULL;
}

Cajero::~Cajero() {

}

void Cajero::setNomCurso(string nom) {
	nomCurso=nom;
}

string Cajero::getNomCurso() {
	return nomCurso;
}

void Cajero::setSiguiente(Cajero *nuevo) {
	siguiente=nuevo;
}

Cajero *Cajero::getSiguiente() {
	return siguiente;
}

void Cajero::setInicio(Cliente *nuevo) {
	inicio=nuevo;
}

Cliente *Cajero::getInicio() {
	return inicio;
}

void Cajero::eliminarTodosEst() {
	Cliente *aux = this->getInicio();
	while(aux != NULL) 	{
	   aux = this->getInicio();
		inicio = inicio->getSiguiente();
		delete aux;
	}
}

void Cajero::insertarNodoB(string nomEst) {
    Cliente *nuevo = new Cliente(nomEst);
    if (!this->getInicio()) inicio = nuevo;
    else {
        Cliente *aux = this->getInicio();
        Cliente *ant = NULL;
        while (aux != NULL && aux->getNomEstudiante() < nomEst) {
             ant = aux;
             aux = aux->getSiguiente();
        }
        if (!aux) ant->setSiguiente(nuevo);
        else
        if (!ant) {
            nuevo->setSiguiente(this->getInicio());
            this->setInicio(nuevo);
        }else {
            nuevo->setSiguiente(aux);
            ant->setSiguiente(nuevo);
        }
    }
}

void Cajero::extraerNodoB(string nomEstud){
   Cliente *aux = this->getInicio();
   Cliente *ant = NULL;
	while(aux != NULL && aux->getNomEstudiante() != nomEstud) {
	     ant = aux;
	     aux = aux->getSiguiente();
   }
	if (aux) {
	    ant->setSiguiente(aux->getSiguiente());
	}else cout<<" Estudiante no exixte "<<endl;
}

void Cajero::mostrar(){
     Cliente *estud = this->getInicio();
     while (estud) {
         estud->mostrar();
         estud = estud->getSiguiente();
     }
     cout<<endl;
}