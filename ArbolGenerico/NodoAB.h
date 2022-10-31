template <class T>
class NodoAB {
   private:
      T info;
      NodoAB *izquierda;
      NodoAB *derecha;
   public:
      NodoAB(T);
      virtual ~NodoAB();
      void setInfo(T);
      T getInfo();
      void setIzquierda(NodoAB *);
      NodoAB *getIzquierda();
      void setDerecha(NodoAB *);
      NodoAB *getDerecha();
      void mostrar();

};