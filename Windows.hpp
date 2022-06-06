#include "SistemaOperativo.hpp"
class Windows: public SistemaOperativo { 
  public:
  Windows(const string &_nombre, 
          ETipo _tipo, const int &_microsoft_apps);
  virtual const int aplicaciones();
  void imprimir() const;
  private:
  int microsoft_apps;
};