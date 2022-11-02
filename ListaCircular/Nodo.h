class Nodo{
   private:
      char info;
      Nodo *sig;
   public:
      Nodo(char dato);
      virtual ~Nodo();
      void setInfo(char dato);
      char getInfo();
      void setSig(Nodo *nodo);
      Nodo *getSig();
};