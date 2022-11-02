
#include "Nodo.cpp"

template <class T>
class Lista{
   private:
      NodoD<T> *cab;
   public:
      Lista();
      virtual ~Lista();
      void insertar(T dato);
      bool estaVacia();
      Lista<T> *copia(Lista<T> *l);
      void print(NodoD<T> *cab);
      void imprimir();
};