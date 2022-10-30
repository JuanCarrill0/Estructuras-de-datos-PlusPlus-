class NodoAB {
   private:
      char info;
      NodoAB *izquierda;
      NodoAB *derecha;
   public:
      NodoAB(char);
      virtual ~NodoAB();
      void setInfo(char);
      char getInfo();
      void setIzquierda(NodoAB *);
      NodoAB *getIzquierda();
      void setDerecha(NodoAB *);
      NodoAB *getDerecha();
      void mostrar();

};