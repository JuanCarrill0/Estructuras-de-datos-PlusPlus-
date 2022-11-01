class ColaPrioridad {
   private:
   int **colap;
   int fin;
   int tama;

   public:
      ColaPrioridad(int);
      virtual ~ColaPrioridad();
      void encolar(int, int);
      int desencolar();
      bool estaLlena();
      void mostrar();
      bool estaVacia();
      int buscarXPrioridad();

};