#include "NodoD.cpp"

template <class T>
class PilaD {
   private:
      NodoD<T> *cima;
   public:
      PilaD();
      virtual ~PilaD();
      void setCima(NodoD<T> *);
      NodoD<T> *getCima();
      void apilar(T );
      T desapilar();
      void print();
};