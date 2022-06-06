#pragma once
#include "SistemaOperativo.hpp"
using namespace std;
class Linux: public SistemaOperativo { 
  public:
  string distro;
  Linux(const string &_nombre, ETipo _tipo, 
        const int &_apt_packages);
  virtual const int aplicaciones();
  void imprimir() const;
  private:
  int apt_packages;
};