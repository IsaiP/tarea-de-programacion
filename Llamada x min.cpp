/*Programa copilado por: Adilman Isai Portillo Ceron (PC18035).*/
/*Programa que calcula el precio de llamada por minuto.*/

/*Librerias*/
#include <iostream>
#include <cstdlib>
#include <windows.h>

/*Para usar abreviaciones*/
using namespace std;

/*Declaracion de funciones*/
void c();//Funcion de limpieza de pantalla
void presentacion();//Funcion para menu
void programa();//Funcion programa

/*Funcion Principal*/
int main() {
	
	/*Variable de funcion principal*/
	int opcion;//Variable para elejir la opcion en el menu
	do{
		presentacion();//Utilizacion de funcion para menu
	
		/*Inicio de bucle para introduccir opcion*/
    	do{
       		cout << "\n\t Introduzca opcion (1-2): ";
			cin >> opcion;
			
        	(cin.fail()||opcion <= 0);      /*Comprobacion para*/
    				cin.clear();			/*que non se puedan*/
    				cin.ignore(1024 , '\n');/* ingresar letras.*/
   				
		}while(opcion <= 0);//Condicion para salir del bucle de pedir opcion
		
		cout << "\n";
    	c();//Utilizacion de funcion de limpieza de pantalla
	
		/*Inicio de anidamiento*/
		switch( opcion ){
			case 1:
				programa();//Utilizacion de Funcion programa
		}
		cout << endl;
		/*Fin de anidamiento*/
	}while(opcion != 2);

}

/*Implementacionm de funcion de menu*/
void presentacion(){
	system("color 74");//Color de consola
		cout << "\n\t Desarollado por:@ Adilman Isai Portillo Ceron (PC18035)" << endl;
		cout << "\n\t       ===========================================";//Decoracion
		cout << "\n\t       =      PROGRAMA QUE CALCULA LA TARIFA     =";
		cout << "\n\t       =          DE LLAMADA POR MINUTO          =";
		cout << "\n\t       ===========================================";//Decoracion
		cout << "\n\t       ===========================================";//Decoracion
    	cout << "\n\t       =               1. Iniciar.               =";
    	cout << "\n\t       =                3. Salir.                =";
    	cout << "\n\t       ===========================================\n";//Decoracion
}

/*Implementacion de funcion de limpieza*/
void c(){
	system("cls");//Pausa de programa
}

/*Implementacion de funcion programa*/
void programa(){
	
	/*Declaracion de variables de la funcion*/
	double res;	//Variable de respuesta
	double minutosLlamada;//Variable para captura de datos

	/*Inicio de ciclo para pedir los minutos*/
	do{	
		cout << "\n\t Ingrese la cantidad de minutos de llamada: ";
		cin >> minutosLlamada;
		c();//Utilizacion de funcion de limpieza de pantalla
				
		(cin.fail()||minutosLlamada<=0);/*Comprobacion para*/
				cin.clear();			/*que non se puedan*/
		    	cin.ignore(1024 , '\n');/* ingresar letras.*/
		    		
	}while(minutosLlamada <=0);//Condicion para salir del ciclo
			
			
	/*Condicion para cuando minutosLlamada >=1 y <=10*/
	if(minutosLlamada >= 1 && minutosLlamada <= 10){
		
		res = minutosLlamada*0.05;//Uso de variable respuesta
				
		cout << endl << "\n\t==================================================" << endl;//Decoracion
		cout << "\t=          MINUTOS USADOS: " << minutosLlamada << " MINUTO/S            =";
		cout << endl << "\t= EL TIEMPO DE SU LLAMADA FUE DE ENTRE 1-10 MIN. =";
		cout << endl << "\t=     EL MINUTO ESTA SIENDO COBRADO A $0.05      =";
		cout << endl << "\t==================================================" << endl << endl;//Decoracion
		cout << "\t          EL TOTAL A PAGAR ES DE: $" << res << endl;
		cout << "\n";
		system("pause");//Pausa de programa
		c();//Utilizacion de funcion de limpieza de pantalla
	}
			
	/*Condicion para cuando minutosLlamada >=11 y <15*/
	else if(minutosLlamada >= 11 && minutosLlamada < 15){
				
		res = minutosLlamada*0.08;//Uso de variable respuesta
				
		cout << endl << "\n\t====================================================" << endl;//Decoracion
		cout << "\t=           MINUTOS USADOS: " << minutosLlamada << " MINUTO/S            =";
		cout << endl << "\t=  EL TIEMPO DE SU LLAMADA FUE DE ENTRE 11-15 MIN. =";
		cout << endl << "\t=       EL MINUTO ESTA SIENDO COBRADO A $0.08      =";
		cout << endl << "\t====================================================" << endl << endl;//Decoracion
		cout << "\t          EL TOTAL A PAGAR ES DE: $" << res << endl;
		cout << "\n";
		system("pause");//Pausa de programa
		c();//Utilizacion de funcion de limpieza de pantalla
	}
			
	/*Condicion para cuando minutosLlamada > 15 */
	else if(minutosLlamada >= 15){
				
		res = minutosLlamada*0.10;//Uso de variable respuesta
				
		cout << endl << "\n\t==================================================" << endl;//Decoracion
		cout << "\t=          MINUTOS USADOS: " << minutosLlamada << " MINUTO/S           =";
		cout << endl << "\t=  EL TIEMPO DE SU LLAMADA FUE MAYOR DE 15 MIN.  =";
		cout << endl << "\t=     EL MINUTO ESTA SIENDO COBRADO A $0.10      =";
		cout << endl << "\t==================================================" << endl << endl;//Decoracion
		cout << "\t          EL TOTAL A PAGAR ES DE: $" << res << endl;
		cout << "\n";
		system("pause");//Pausa de programa
		c();//Utilizacion de funcion de limpieza de pantalla
	}
}
