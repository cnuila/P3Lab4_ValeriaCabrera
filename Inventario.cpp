#include "Inventario.hpp"
#include "Producto.hpp"

Inventario::Inventario(){
  // cout<<"llamaron al vacio" << endl;
}

Inventario::Inventario(vector<Producto> listaProducto, vector<string> listaCateg){
  this-> listaP = listaProducto;
  this-> listaC = listaCateg;
}

Inventario::~Inventario(){
  cout << "Se eliminó el inventario" << endl;
}

