#include "Cliente.cpp"

using namespace std;

class Cajero {
	private:
			string nomCurso;
			Cajero *siguiente;
			Cliente *inicio;
	public:
			Cajero(string);
			virtual ~Cajero();
			void setNomCurso(string);
			string getNomCurso();
			void setSiguiente(Cajero *);
			Cajero *getSiguiente();
			void setInicio(Cliente *);
			Cliente *getInicio();
			void eliminarTodosEst();
			void insertarNodoB(string);
			void extraerNodoB(string);
			void mostrar();
};