#include <iostream>
#include "Producto.hpp"
#include "Inventario.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//instanciar las clases
	Inventario* inventario = new Inventario();
	Producto* producto = new Producto();
	
	//menu
	int opcion = 0;
	int opcion2 = 0;
	
	while(opcion!=4){
		cout<<"MENU\n"<<"1. Mantenimiento de Productos\n"<<"2. Estadisticas Generales\n"<<"3. Busqueda por Nombre\n"<<"4. Salir"<<endl;
		cout<<"Ingrese el numero de la opcion a realizar: ";
		cin>>opcion;
		
		switch(opcion){
			
			case 1:{
				
				//menu secundario
				cout<<"1. Agregar Producto\n"<<"2. Modificar Producto\n"<<"3. Eliminar Producto\n";
				cout<<"Ingrese la opcion a realizar: ";
				cin>>opcion2;
				
				switch(opcion2){
					
					case 1:{
						
						//agregación
						int id,cant,precio;
						string nombre, catg;
						
						cout<<"Ingrese el ID: ";
						cin>>id;
						cout<<"Ingrese el nombre del producto: ";
						cin>>nombre;
						cout<<"Ingrese la categoría: ";
						cin>>catg;
						cout<<"Ingrese la cantidad de unidades: ";
						cin>>cant;
						cout<<"Ingrese el precio: ";
						cin>>precio;
						
						Producto* producto = new Producto(id,nombre,catg,cant,precio);
						
						//cout<<"Producto agregado: "<<nombre<<endl;
						
						//agregar a los vectores del inventario
						inventario->agregarProducto(producto);
						inventario->agregarCategoria(catg);
						
						break;
					}//fin del case 1
					
					case 2:{
						
						//modificar
						int index;

						cout<<"Ingrese el numero del indice que desea modificar: ";
						cin>>index;

						while( inventario->getListaProducto().size() < index || index<0) {

							cout<<"No existe un producto con ese indice";
							cout<<"Ingrese el numero del indice que desea modificar: ";
							cin>>index;
						}//fin de la validacion
						
						string nombre,catg;
						int id,cant,precio;
						
						cout<<"Ingrese el nuevo ID: ";
						cin>>id;
						cout<<"Ingrese el nuevo nombre del producto: ";
						cin>>nombre;
						cout<<"Ingrese la nueva categoría: ";
						cin>>catg;
						cout<<"Ingrese la nueva cantidad de unidades: ";
						cin>>cant;
						cout<<"Ingrese el nuevo precio: ";
						cin>>precio;
						
						//crear un nuevo objeto temporal
						Producto* p = new Producto();
						p = inventario->getListaProducto().at(index);
						
						p->setID(id);
						p->setNombre(nombre);
						p->setCategoria(catg);
						p->setCantidad(cant);
						p->setPrecio(precio);
						
						break;
					}//fin del case 2
					
					case 3:{
						
						//eliminar
						
						int index;

						cout<<"Ingrese el numero del indice que desea eliminar: ";
						cin>>index;

						while( inventario->getListaProducto().size() < index || index<0) {

							cout<<"No existe un producto con ese indice";
							cout<<"Ingrese el numero del indice que desea eliminar: ";
							cin>>index;
						}//fin de la validacion
						
						inventario->eliminarProducto(index);
						
						break;
					}//fin del case 3
					
					default:{
						cout<<"No ha ingresado una opcion del menu"<<endl;
						break;
					}//fin del case de validación
					
				}//fin del switch del menu secundario
				
				break;
			}//fin del case 1
			
			case 2:{
				
				//estadisticas generales
				
				cout<<"ESTADISTICAS GENERALES "<<endl;
				cout<<endl<<"PRODUCTOS DEL INVENTARIO: "<<endl;
				inventario->listarProductos();
				cout<<"TOTAL DE PRODUCTOS UNICOS: "<<inventario->unicos()<<endl;
				cout<<"PRECIO TOTAL DEL INVENTARIO: "<<inventario->precioInventario()<<endl;
				cout<<"TOTAL DE PRODUCTOS POR CATEGORIA: "<<endl;
				inventario->prodPorCatg();
				cout<<"PRECIO TOTAL POR CATEGORIA: "<<endl;
				inventario->precioCatg();
				
				
				break;
			}//fin del case 2
			
			case 3:{
				
				string cadena;
				cout<<"Ingrese la palabra que desea buscar en el inventario: ";
				cin>>cadena;
				//crear y llenar el vector con la busqueda
				vector<Producto*> busqueda;
				
				
				
				Inventario i = new Inventario(busqueda);
				
				
				break;
			}//fin del case 3
			
			case 4:{
				cout<<"Adios, tenga buen dia";
				delete inventario;
				break;
			}//fin del case de salida
			
			default:{
				cout<<"Asegurese de ingresar una de las opciones del menu"<<endl;
				break;
			}//fin del default para validación
			
		}//fin del switch del menu principal
	}//fin del while del menu

	
	return 0;
}
