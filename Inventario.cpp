#include <string>
#include "Inventario.hpp"
#include "Producto.hpp"

Inventario::Inventario(){
  // cout<<"llamaron al vacio" << endl;
}

Inventario::Inventario(vector<Producto*> listaP){
	this->listaP = listaP;
}

Inventario::Inventario(vector<Producto*> listaP, vector<string> listaCatg){
  this-> listaP = listaP;
  this-> listaCatg = listaCatg;
}

Inventario::~Inventario(){
	for(int i = 0; i < listaP.size();i++){
		delete listaP.at(i);
	}
	
}

void Inventario::agregarProducto(Producto* prod){
	listaP.push_back(prod);
	cout<<"Se ha agregado "<<prod->getNombre()<<" al inventario"<<endl;
}


//arreglar
void Inventario::agregarCategoria(string catg){
	//boolean para marcar si ya existe esa categoría
	bool add = true;
	for(int i = 0; i < listaCatg.size(); i++){
		if(listaCatg.at(i)==catg){
			add = false;
		}
	}
	
	//si es verdadeo entonces que agregue la categoría nueva
	//me enoja que esto no agarre las tildes como son porque se miran feas las
	//palabras mal escritas >:(
	if(add){
		listaCatg.push_back(catg);
		cout<<"Se ha agregado la categoría "<<catg<<" a la lista"<<endl;
	}
	
}

void Inventario::eliminarProducto(int j){
	//recorrer la lista para buscar el elemento en esa poscion
	for(int i = 0; listaP.size();i++){
		if(j=i){
			listaP.erase(listaP.begin()+j);
		}
	}
}

void Inventario::listarProductos(){
	for(int i = 0; i < listaP.size(); i++){
		Producto* pr = new Producto();
		pr = listaP.at(i);
		cout<<i<<") ID: "<<pr->getID()<<" Nombre: "<<pr->getNombre()<<" Categoria: "<<pr->getCategoria()<<" Cantidad: "<<pr->getCantidad()<<" Precio: "<<pr->getPrecio()<<endl;
	}
}

int Inventario::unicos(){
	int cont=0;
	for(int i = 0; i < listaP.size(); i++){
		Producto* p = new Producto();
		p = listaP.at(i);
		int quantity = p->getCantidad();
		if(quantity==1){
			cont++;
		}
	}
	
	return cont;
}

int Inventario::precioInventario(){
	int acum = 0;
	for(int i = 0;i < listaP.size();i++){
		Producto* pr = new Producto();
		pr = listaP.at(i);
		int quantity = pr->getCantidad();
		int price = pr->getPrecio();
		acum = acum + quantity*price;
	}
	
	return acum;
}

void Inventario::prodPorCatg(){
	for(int i = 0; i < listaCatg.size(); i++){
		int cont = 0;
		for(int j = 0; j < listaP.size(); j++){
			Producto* p = new Producto();
			p = listaP.at(j);
			if(listaCatg.at(i)==p->getCategoria()){
				cont++;
			}
		}//fin del for de la lista de productos
		
		cout<<i<<") Categoria: "<<listaCatg.at(i)<<" Cantidad: "<<cont<<endl;
		
	}//fin del de for de la lista de catg
}

void Inventario::precioCatg(){
	for(int i = 0; i < listaCatg.size(); i++){
		int acum = 0;
		for(int j = 0; j < listaP.size(); j++){
			Producto* p = new Producto();
			p = listaP.at(j);
			if(listaCatg.at(i)==p->getCategoria()){
				acum = acum + ((p->getPrecio())*(p->getCantidad()));
			}
		}//fin del for de la lista de productos
		
		cout<<i<<") Categoria: "<<listaCatg.at(i)<<" Precio: "<<acum<<endl;
		
	}//fin del de for de la lista de catg
}

void Inventario::buscarProductos(string cadena){
	
}

vector<Producto*> Inventario::getListaProducto(){
	return this->listaP;
}

vector<string> Inventario::getListaCategoria(){
	return this->listaCatg;
}
