#include "Cliente.cpp"

class ColaCliente {
    private:
       Cliente *inicio;
       Cliente *fin;

   public:
      ColaCliente();
      virtual ~ColaCliente();
      void encolar(string);
      string desencolar();
      void mostrar();
};
