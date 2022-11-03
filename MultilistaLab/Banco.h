
#include "Cajero.cpp"

class Banco {
	private:
			Cajero *cabecera;
	public:
			Banco();
			virtual ~Banco();
			void setCabecera(Cajero*);
			Cajero *getCabecera();
			void insertarCajero(string);
			void extraerCajero(string);
			void insertarCliente(string, string);
			void extraerCliente(string, string);
			Cajero *buscarCajero(string);
         void mostrar();
         void mostrar2(string);
};
