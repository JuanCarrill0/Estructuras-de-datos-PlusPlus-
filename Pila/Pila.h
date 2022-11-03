
class Pila1 {
private :
	int *pila;
	int cima = 0;
	int tama;
public:
	Pila1(int);
	virtual ~Pila1();
	void apilar(int );
	int desapilar();
	void mostrar();
	bool siEsta(int );
	int tope();
	bool estaVacia();
	bool estaLlena();
	void extraerElemento(int );
};
