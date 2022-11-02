#include "NodoDE.cpp"

class ListaDE {
   private:
      NodoDE *cabecera;
   public:
      ListaDE();
      virtual ~ListaDE();
      void insertar(int);
      int extraer(int );
      void mostrarAdelante();
      void mostrarAtras();
      void unir(ListaDE *);

   protected:


};