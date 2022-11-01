#include "Nodo.cpp"

template <class T>
class ColaDinamica {
    private:
       Nodo<T> *inicio;
       Nodo<T> *fin;

   public:
      ColaDinamica();
      virtual ~ColaDinamica();
      void encolar(T);
      T desencolar();
      void mostrar();
};
