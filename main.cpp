#include <iostream>
#include "Producto.hpp"
#include "Inventario.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//menu
	int opcion = 0;
	int opcion2 = 0;
	
	while(opcion!=4){
		cout<<"MENU\n"<<"1. Mantenimiento de Productos\n"<<"2. Estadisticas Generales\n"<<"3. Busqueda por Nombre\n"<<"4. Salir"<<endl;
		cout<<"Ingrese el numero de la opcion a realizar: ";
		cin<<opcion;
		
		switch(opcion){
			
			case 1:{
				
				//menu secundario
				cout<<"1. Agregar Producto\n"<<"2. Modificar Producto\n"<<"3. Eliminar Producto\n";
				cout<<"Ingrese la opcion a realizar: ";
				cin>>opcion2;
				
				switch(opcion2){
					
					case 1:{
						
						break;
					}//fin del case 1
					
					case 2:{
						
						break;
					}//fin del case 2
					
					case 3:{
						
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
				
				break;
			}//fin del case 2
			
			case 3:{
				
				break;
			}//fin del case 3
			
			case 4:{
				cout<<"Adios, tenga buen día";
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
