#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "Producto.hpp"
#include<string.h>
#include<iostream>
#include<vector>

using namespace std;
class Inventario {
	
  private:
  vector<Producto*> listaP;
  vector<string> listaCatg;
  
  public:
  Inventario();
  Inventario(vector<Producto*>);
  Inventario(vector<Producto*>,vector<string>);
  ~Inventario();
  void agregarProducto(Producto*);
  void agregarCategoria(string);
  void eliminarCategoria(int);
  void listarProductos();
  vector<Producto*> getListaProducto();
  vector<string> getListaCategoria();
  void eliminarProducto(int);
  void buscarProductos(string);
  int unicos();
  int precioInventario();
  void prodPorCatg();
  void precioCatg();

};

#endif
