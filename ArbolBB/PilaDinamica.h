#include "Nodo.cpp"

class PilaDinamica{
private :
	Nodo *cima;
public:
	PilaDinamica();
	virtual ~PilaDinamica();
	void setCima(Nodo *);
    Nodo *getCima();
    void apilar(int );
    int desapilar();
    void mostrar();

};
