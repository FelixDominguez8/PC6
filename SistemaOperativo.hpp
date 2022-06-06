#pragma once
#include <string>
using namespace std;
enum ETipo { eLinux, eMac, eWindows };
class SistemaOperativo { 
  public: 
  SistemaOperativo(const string &_nombre, ETipo _tipo);
  const string nombre();
  const ETipo tipo();
  virtual const int aplicaciones();
  void imprimir() const;
  private:
  string Nombre;
  ETipo Tipo;
};