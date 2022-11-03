
template <class T>
class NodoD {
   private:
      T info;
      NodoD *siguiente;
   public:
      NodoD(T );
      virtual ~NodoD();
      void setInfo(T);
      T getInfo();
      void setSiguiente(NodoD *);
      NodoD *getSiguiente();
      void mostrar();
};