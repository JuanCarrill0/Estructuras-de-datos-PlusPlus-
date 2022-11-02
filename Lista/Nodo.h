class Nodo{
   private:
      int info;
      Nodo *sig;
   public:
      Nodo();
      Nodo(int dato);
      virtual ~Nodo();
      void setInfo(int dato);
      int getInfo();
      void setSig(Nodo *otro);
      Nodo *getSig();
};