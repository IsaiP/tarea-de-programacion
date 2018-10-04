//Programa hecho por: Adilman Isai Portillo Ceron
//Carnet: PC18035
/*Programa que define el sueldo de un trabajador segun
cantidad de ventas*/

//Librerias
#include <iostream>
#include <stdlib.h>
#include <windows.h>

//Linea de codigo que dice que se usaran abreviaciones
using namespace std;

//Funcion principal
int main() {
	
	system("color 84");
	
	//Variables
	int n_ventas; // Variable para el numero de ventas
	int salario; // Variable para salario
	
	/*Ciclo para que cuando se ingrese 0 pida de nuevo otro
	numero mayor a tal*/
	do{
		//Ingreso de datos
		cout << "Ingrese la cantidad de ventas que realizo en el mes: ";
		cin >> n_ventas;
		
		(cin.fail()||n_ventas<=0);
    			cin.clear();
    			cin.ignore(1024 , '\n');
	} while(n_ventas <= 0); //Condicion que dice que los numeros menores he iguale que 0 y menores no se tomen
	
	//Condicionales para los distintos salarios
	//Condicional si es mayor a 0 y menor que 500000
	if(n_ventas > 0 && n_ventas <= 500000){
		salario = 80000;
		
		cout << endl << "La cantidad de sus ventas mensuales son mayores a 0 y menores que 500000 " << endl;
		cout << "Su salario es de: $" << salario << endl;
	}
	
	//Condicional si es mayor a 500001 y menor que 1000000
	else if(n_ventas >= 500001 && n_ventas <= 1000000){
		salario = 160000;
		
		cout << endl << "La cantidad de sus ventas mensuales son mayores a 500001 y menores que 1000000 " << endl;
		cout << "Su salario es de: $" << salario << endl;
	}
	
	//Condicional si es mayor a 1000001 y menor que 1500000
	else if(n_ventas >= 1000001 && n_ventas <= 1500000){
		salario = 320000;
		
		cout << endl << "La cantidad de sus ventas mensuales son mayores a 1000001 y menores que 1500000 " << endl;
		cout << "Su salario es de: $" << salario << endl;
	}
	
	//Condicional si es mayor a 1500001 y menor que 2500000
	else if(n_ventas >= 1500001 && n_ventas <= 2500000){
		salario = 450000;
		
		
		cout << endl << "La cantidad de sus ventas mensuales son mayores a 1500001 y menores que 2500000 " << endl;
		cout << "Su salario es de: $" << salario << endl;
	}
	
	//Condicional si es mayor a 2500001 y menor que 4000000
	else if(n_ventas >= 2500001 && n_ventas <= 4000000){
		salario = 550000;
		
		cout << endl << "La cantidad de sus ventas mensuales son mayores a 2500001 y menores que 4000000 " << endl;
		cout << "Su salario es de: $" << salario << endl;
	}
	
	//Condicional si es mayor a 4000000
	else if(n_ventas > 4000000){
		salario = n_ventas * 0.2;
		
		cout << endl << "La cantidad de sus ventas mensuales sobrepasan los 4000000" << endl;  
		cout << "Su salario es de: $" << salario << endl; 
	}
	
	//Impresion de sonido 
	Beep(800,500);
	Beep(587.33,1000);
	Beep(698.46,500);
	Beep(880,500);
	Beep(587.33,1000);
	Beep(698.46,500);
	Beep(880,250);
	Beep(1046.50,250);
	Beep(987.77,500);
	Beep(783.99,500);
	Beep(698.46,250);
	Beep(783.99,250);
	Beep(880,500);
	Beep(587.33,500);
	Beep(523.25,250);
	Beep(659.26,250);
	Beep(587.33,750);
	
	
	//Para el programa hasta precionar una tecla
	system("pause");
	
	//Devolvemos el control al main
	return 0;
	
}
