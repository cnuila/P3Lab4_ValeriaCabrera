#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<string.h>
#include<iostream>
#include <vector>

using namespace std;
class Producto {
	
  private:
  int id;
  string nombre;
  string categoria;
  int cant;
  float precio;
  
  public:
  Producto();  
  Producto(int,string,string,int,int);
  ~Producto();
  int getID();
  string getNombre();
  string getCategoria();
  int getCantidad();
  float getPrecio();
  void setID(int);
  void setNombre(string);
  void setCategoria(string);
  void setCantidad(int);
  void setPrecio(float);
};

#endif
