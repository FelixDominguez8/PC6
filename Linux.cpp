#include <iostream>
#include "Linux.hpp"
Linux::Linux(const string &_nombre, 
  ETipo _tipo, const int &_apt_packages) : 
  SistemaOperativo(_nombre, _tipo) { 
    apt_packages = _apt_packages; 
};
const int Linux::aplicaciones() { 
  return apt_packages; 
}
void Linux::imprimir() const { 
  cout << "Linux" << endl; 
}