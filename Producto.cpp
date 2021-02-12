#include "Producto.hpp"

Producto::Producto(){
  // cout<<"llamaron al vacio" << endl;
}

Producto::Producto(int i,string nom,string categ, int c, float p){
  this->id = i;
  this->nombre = nom;
  this->categoria = categ;
  this->cant = c;
  this->precio = p;
}

Producto::~Producto(){
  cout << "Se eliminó el producto" << endl;
}

int Producto::getID(){
  return this->id;
}

void Producto::setID(int i){
  this->id = i;
}

string Producto::getNombre(){
  return this->nombre;
}

void Producto::setNombre(string nom){
  this->nombre = nom;
}

string Producto::getCategoria(){
  return this->categoria;
}

void Producto::setCategoria(string categ){
  this->categoria = categ;
}

int Producto::getCantidad(){
  return this->cant;
}

void Producto::setCantidad(int c){
  this->cant = c;
}

float Producto::getPrecio(){
  return this->precio;
}

void Producto::setPrecio(float p){
  this->precio =p;
}

