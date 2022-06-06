#include <iostream>
#include "Mac.hpp"
Mac::Mac(const string &_nombre, 
  ETipo _tipo, const int &_applestore_apps) : 
  SistemaOperativo(_nombre, _tipo) { 
  applestore_apps = _applestore_apps; 
};
const int Mac::aplicaciones() { 
  return applestore_apps; 
}
void Mac::imprimir() const { 
  cout << "Mac" << endl; 
}