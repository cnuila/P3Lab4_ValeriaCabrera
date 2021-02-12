#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "Producto.hpp"
#include<string.h>
#include<iostream>
#include<vector>

using namespace std;
class Inventario {
	
  private:
  vector<Producto> listaP;
  vector<string> listaCatg;
  
  public:
  Inventario();  
  Inventario(vector<Producto>,vector<string>);
  ~Inventario();

};

#endif
