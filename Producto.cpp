#include "Producto.hpp"

Producto::Producto(){
  // cout<<"llamaron al vacio" << endl;
}

Producto::Producto(int id,string nombre,string categoria, int cant, int precio){
  this->id = id;
  this->nombre = nombre;
  this->categoria = categoria;
  this->cant = cant;
  this->precio = precio;
}

Producto::~Producto(){
  //cout << "Se eliminó el producto" << endl;
}

int Producto::getID(){
  return this->id;
}

void Producto::setID(int id){
  this->id = id;
}

string Producto::getNombre(){
  return this->nombre;
}

void Producto::setNombre(string nombre){
  this->nombre = nombre;
}

string Producto::getCategoria(){
  return this->categoria;
}

void Producto::setCategoria(string categoria){
  this->categoria = categoria;
}

int Producto::getCantidad(){
  return this->cant;
}

void Producto::setCantidad(int cant){
  this->cant = cant;
}

float Producto::getPrecio(){
  return this->precio;
}

void Producto::setPrecio(float precio){
  this->precio =precio;
}

