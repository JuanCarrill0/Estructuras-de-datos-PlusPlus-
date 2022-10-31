#include "NodoAB.cpp"

template <class T>
class ArbolBin {
   private:
        NodoAB<T> *raiz;
   public:
      ArbolBin();
      virtual ~ArbolBin();
      NodoAB<T> *getRaiz();
      NodoAB<T> *buscarNodo(NodoAB<T> *, T);
      bool estaVacio();
      void insertar(T, T, T);
      void mostrar(NodoAB<T> *);

};