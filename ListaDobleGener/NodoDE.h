
template <class T>
class NodoDE {
   private:
       T info;
       NodoDE *anterior;
       NodoDE *siguiente;

   public:
      NodoDE(T );
      virtual ~NodoDE();
      void setInfo(T);
      T getInfo();
      void setAnterior(NodoDE *);
      NodoDE *getAnterior();
      void setSiguiente(NodoDE *);
      NodoDE *getSiguiente();

};

