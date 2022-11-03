#include "Nodo.cpp"

class ColaDinamica {
    private:
       Nodo *inicio;
       Nodo *fin;

   public:
      ColaDinamica();
      virtual ~ColaDinamica();
      void encolar(int);
      int desencolar();
      void mostrar();
};
