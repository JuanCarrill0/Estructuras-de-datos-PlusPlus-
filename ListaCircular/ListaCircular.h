#include "Nodo.cpp"


class ListaCircular {
   private:
       Nodo *cab;
   public:
      ListaCircular();
      virtual ~ListaCircular();
      void insertar(char dato);
      char extraer(char dato);
      void imprimir();
      bool estaVacia();

};
