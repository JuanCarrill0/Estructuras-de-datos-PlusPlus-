
class NodoDE {

   private:
       int info;
       NodoDE *anterior;
       NodoDE *siguiente;

   public:
      NodoDE(int );
      virtual ~NodoDE();
      void setInfo(int);
      int getInfo();
      void setAnterior(NodoDE *);
      NodoDE *getAnterior();
      void setSiguiente(NodoDE *);
      NodoDE *getSiguiente();

};

