#include <iostream>
#include <string.h>


using namespace std;

class Cliente{
   private:
      string nomEstudiante;
      Cliente *siguiente;
   public:
      Cliente(string);
      virtual ~Cliente();
      void setNomEstudiante(string);
      string getNomEstudiante();
      void setSiguiente(Cliente *);
      Cliente *getSiguiente();
      void mostrar();
};
