#include <iostream>
#include "Windows.hpp"
Windows::Windows(const string &_nombre, 
  ETipo _tipo, const int &_microsoft_apps) : 
  SistemaOperativo(_nombre, _tipo) { 
  microsoft_apps = _microsoft_apps; 
};
const int Windows::aplicaciones() { 
  return microsoft_apps; 
}
void Windows::imprimir() const { 
  cout << "Windows" << endl; 
}