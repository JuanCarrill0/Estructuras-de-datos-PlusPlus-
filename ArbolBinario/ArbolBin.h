#include "NodoAB.cpp"

class ArbolBin {
   private:
        NodoAB *raiz;
   public:
      ArbolBin();
      virtual ~ArbolBin();
      NodoAB *getRaiz();
      NodoAB *buscarNodo(NodoAB *, char);
      bool estaVacio();
      void insertar(char, char, int);
      void mostrar(NodoAB *);

};