#include <iostream>
#include "SistemaOperativo.hpp"
using namespace std;
SistemaOperativo::SistemaOperativo(const string &_nombre, 
  ETipo _tipo) : Nombre(_nombre), Tipo(_tipo) {}
const string SistemaOperativo::nombre() { 
  return Nombre; 
} 
const ETipo SistemaOperativo::tipo() { 
  return Tipo; 
}
const int SistemaOperativo::aplicaciones() { 
  return -1; 
}
void SistemaOperativo::imprimir() const { 
  cout << "Sistema Operativo: " << Nombre << endl; 
}