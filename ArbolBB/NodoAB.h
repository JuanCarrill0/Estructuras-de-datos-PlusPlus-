
class NodoAB {
   private:
      int info;
      NodoAB *izquierda;
      NodoAB *derecha;
   public:
      NodoAB(int);
      virtual ~NodoAB();
      void setInfo(int);
      int getInfo();
      void setIzquierda(NodoAB *);
      NodoAB *getIzquierda();
      void setDerecha(NodoAB *);
      NodoAB *getDerecha();
      void mostrar();

};
