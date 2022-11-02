#include "NodoDE.cpp"

template <class T>
class ListaDE {
   private:
      NodoDE<T> *cabecera;
   public:
      ListaDE();
      virtual ~ListaDE();
      void insertar(T);
      T extraer(T );
      void mostrarAdelante();
      void mostrarAtras();
      void unir(ListaDE<T> *);

   protected:


};