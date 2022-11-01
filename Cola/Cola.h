class Cola {
   private:
      int *cola;
      int fin;
      int tama;

   public:
      Cola(int);
      virtual ~Cola();
      void encolar(int);
      int desencolar();
      int primero();
      void mostrar();
      bool estaVacia();
      bool estaLlena();
};