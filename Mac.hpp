#include "SistemaOperativo.hpp"
class Mac: public SistemaOperativo { 
  public:
  Mac(const string &_nombre, ETipo _tipo, 
      const int &_applestore_apps);
  virtual const int aplicaciones();
  void imprimir() const;
  private:
  int applestore_apps;
};  