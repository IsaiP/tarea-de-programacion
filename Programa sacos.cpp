//Programa Tarea 
//Copilado por: Andres Isai Vasquez Vasquez VV18009

//Librerias
#include <iostream>

//Linea de codigo que dice que se usaran abreviacion
using namespace std;

//Funcion principal
int main() {
	
	//Declaracion de variables
	 double n_sacos; //Variable para el Numero de sacos
	 double p_sacos; //Variables para el Precio de sacos
	 
	 double d1; //Variable de la formula que se usa para el descuento del 10%
	 double d2; //Variable de la formula que se usa para el descuento del 10%
	 double d3; //Variable de la formula que se usa para el descuento del 20%
	 double d4; //Variable de la formula que se usa para el descuento del 25%
	 
	 double f1; //Variable de la formula para el precio de los sacos sin iva y descuentos
	  
	 double f2; //Variable de la formula para el precio de sacos solo con descuento del 10%
	 double f3; //Variable de la formula para el precio de sacos solo con descuento del 15%
	 double f4; //Variable de la formula para el precio de sacos solo con descuento del 20%
	 double f5; //Variable de la formula para el precio de sacos solo con descuento del 25%
	 
	 double f6; //Variable de la formula del precio de sacos con iva y descuento de 10%
	 double f7; //Variable de la formula del precio de sacos con iva y descuento de 15%
	 double f8; //Variable de la formula del precio de sacos con iva y descuento de 20%
	 double f9; //Variable de la formula del precio de sacos con iva y descuento de 25%
	 double f10; //Variable de la formula del precio de sacos con iva sin descuento por ser menor que 100
	 double r; //Variable para la respuesta 
	 
	//Impresion en pantalla de informacion de datos
	  cout << "El precio por unidad por saco es de $100" << endl;
	  cout << "Si usted compra menos que de 100 sacos, no recibe ningun descuento." << endl;
	  cout << "Si usted compra mas de 100 sacos, recibe un 10% de descuento." << endl;
	  cout << "Si usted compra mas de 200 sacos, recibe un 15% de descuento." << endl;
	  cout << "Si unsted compra mas de 250 y menos de 300 sacos, recibe un 20% de descuento." << endl;
	  cout << "Si usted compra mas de 300 sacos, recibe un descuento de 25% de descuento." << endl;
	  cout << "GRACIAS POR PREFERIRNOS :)" << endl << endl;
	  
	//Entrada de datos
	cout << "Ingrese la cantidad de sacos: ";
	cin >> n_sacos;
	
	//Precio unitario de sacos
	p_sacos  = 100;
	
	//Formula del descuento del 10%, que se le dara al precio
	d1 = f1 * 0.10;
	
	//Formula del descuento del 15%, que se le dara al precio
	d2 = f1 * 0.15;
	
	//Formula del descuento del 20%, que se le dara al precio
	d3 = f1 * 0.20; 
	
	//Formula del descuento del 25%, que se le dara al precio
	d4 = f1 * 0.25; 
	
	//Precio de sacos sin iva y sin descuento
	f1 = n_sacos * p_sacos;
	
	//Precio de sacos solo con descuento, tres descuentos(10%,15%,20%,25%)
	f2 = f1 - d1;
	f3 = f1 - d2;
	f4 = f1 - d3;
	f5 = f1 - d3;
	
	//Precios de sacos con descuento y con iva
	
	f7 = f3 * 1.13;
	f8 = f4 * 1.13;
	f9 = f5 * 1.13;
	f10 = f1 * 1.13;
	
	//Condicional para cuando la cantidad de sacos es mayor que 100
	if (n_sacos >= 100) {
		
		//precios de sacos con descuento de 10% e iva incluido
		f6 = f2 * 1.13;
		cout << "El precio de los sacos es de: " << f6;
	}
	
	//Condicional para cuando la cantidad de sacos es menor que 100
	else if (n_sacos < 100){
		cout << "El precio de los sacos es de: " << f10;
	}
	
	//Condicional para cuando la cantidad de sacos es mayor que 200
	else if (n_sacos > 200){
		cout << "El precio de los sacos es de: " << f7;
	}
	
	//Condicional para cuando la cantidad de sacos es mayor que 200 y menor que 300
	else if (n_sacos > 250 && n_sacos < 300){
		cout << "El precio de los sacos es de: " << f8;
	}
	
	//Condicional para cuando la cantidad de sacos es mayor que 300
	else if (n_sacos >= 300){
		cout << "El precio de los sacos es de: " << f9;
	}
	
	cout << endl << endl <<"GRACIAS POR SU COMPRA :)" << endl;
	return 0;
}
