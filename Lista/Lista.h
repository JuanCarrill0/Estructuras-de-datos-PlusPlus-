
#include "Nodo.cpp"

class Lista{
   private:
      Nodo *cab;
   public:
      Lista();
      virtual ~Lista();
      void insertar(int dato);
      bool estaVacia();
      Lista *copia(Lista *l);
      void print(Nodo *cab);
      void imprimir();
};