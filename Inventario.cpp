#include "Inventario.hpp"

Inventario::Inventario(){
  // cout<<"llamaron al vacio" << endl;
}

Inventario::Inventario(vector<Producto> listaP, vector<string> listaCatg){
  this-> listaP = listaP;
  this-> listaCatg = listaCatg;
}

Inventario::~Inventario(){
  cout << "Se eliminó el inventario" << endl;
}

void Inventario::agregarProducto(Producto* prod){
	listaP.push_back(prod);
	cout<<"Se ha agregado "<<prod->getNombre()<<" al inventario"<<endl;
}

void Inventario::agregarCategoria(Producto* prod){
	//boolean para marcar si ya existe esa categoría
	bool add = true;
	for(int i = 0; i < listaCatg.size(); i++){
		if(listaCatg.at(i)==prod->getNombre()){
			add = false;
		}
	}
	
	//si es verdadeo entonces que agregue la categoría nueva
	//me enoja que esto no agarre las tildes como son porque se miran feas las
	//palabras mal escritas >:(
	if(add){
		string c = prod->getCategoria();
		listaCatg.push_back(c);
		cout<<"Se ha agregado la categoría "<<c<<" a la lista"<<endl;
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
	for(int i = 0; listaP.size(); i++){
		Producto* pr = new Producto();
		cout<<i<<") "<<pr->getID()<<" "<<pr->getNombre()<<" "<<pr->getCategoria()<<" "<<pr->getCantidad()<<" "<<pr->getPrecio()<<endl;
	}
}
