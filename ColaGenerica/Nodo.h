template <class T>
class Nodo{
   private:
      T info;
      Nodo *sig;
   public:
      Nodo();
      Nodo(T dato);
      virtual ~Nodo();
      void setInfo(T dato);
      T getInfo();
      void setSig(Nodo *otro);
      Nodo *getSig();
};