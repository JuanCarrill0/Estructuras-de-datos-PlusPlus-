
#include "NodoAB.cpp"
#include "PilaDinamica.cpp"

class ArbolBB {
      private:
         NodoAB *raiz;
   public:
       ArbolBB();
      virtual ~ArbolBB();
      void setRaiz(NodoAB *);
      NodoAB *getRaiz();
      bool estaVacio();
      void insertar(int);
      void extraer(int);
      void mostrar(NodoAB *);
      void preorden(NodoAB *);
      void inorden(NodoAB *);
      int altura(NodoAB *);
      int nivelNodo(int);
      int cantidadNodosArbol(NodoAB *);
      NodoAB *buscarNodo(int);
      int peso(int);
      int grado(int);
      void mostrarNivel(NodoAB *, int);
      void mostrarPorNiveles();
      bool isomorfos(NodoAB *, NodoAB *);
      bool diferentes(NodoAB *, NodoAB *);
      bool iguales(NodoAB *, NodoAB *);
      PilaDinamica *ancestros(int);
      /*void descendiente(NodoAB *, Lista *);
      Lista *descendientes(int);*/
      PilaDinamica *camino(int, int);
      NodoAB *recibePadre(NodoAB *);

};