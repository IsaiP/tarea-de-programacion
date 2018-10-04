/*Programa copilado por: Adilman Isai Portillo Ceron*/
/*Programa que da la produccion diaria y los insumos 
requeridos para la elaboracion de soda y jugo.*/

/*Librerias*/
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>

/*Para utilizar abreviaciones*/
using namespace std;

/*Declaracion de Funciones*/
void c();//Funcion para limpieza de pantalla
void presentacion();//Funcion de menu
void p();//Funcion de pausa de sistema
void cal1();//Funcion de calculo 1
void cal2();//Funcion de calculo 2

/*Funcion Principal*/
int main()
{	
	/*Declaracion de Variables Para la funcion main*/
	int opcion;//Variable para las opciones del menu
	
    do{
    		
    	presentacion();//Utilizacion de funcion de menu
    	
    	/*Inicio de bucle para introduccir opcion*/
        do{
        	cout << "\n\n   Introduzca opcion (1-3): ";
			cin >> opcion;
			
        	(cin.fail()||opcion <= 0);
    				cin.clear();
    				cin.ignore(1024 , '\n');
    						
		}while(opcion <= 0);//Condicion para salir del bucle de pedir opcion
		
        c();//Utilizacion de funcion de limpieza de pantalla
        
        /* Inicio del anidamiento */
        switch ( opcion ){
            case 1:	
            		cal1();//Utilizacion de funcion de operaciones 1
            		break;
            case 2: 
            		cal2();//Utilizacion de funcion de operaciones 2

         }

         /* Fin del anidamiento */
    } while ( opcion != 3 );
	
    return 0;
}

/*Implementacion de Funcion para menu*/
void presentacion(){
	
	system("color 74");
	
	cout << "\n ====================================================================";//Decoracion
	cout << "\n    Programa elaborado por:@ Adilman Isai Portillo Ceron (PC18035) \n";
	cout << "\n          PROGRAMA QUE CALCULA LA PRODUCCION DIARIA Y ";
    cout << "\n         LOS INSUMOS PARA LA ELABORACION DE SODA Y JUGO. \n";
    cout << "\n ====================================================================";//Decoracion
    cout << "\n =  1. Calcular produccion diaria de soda y sus insumos requeridos. =";
    cout << "\n =  2. Calcular produccion diaria de jugo y sus insumos requeridos. =";
    cout << "\n =  3. Salir.                                                       =";
    cout << "\n ====================================================================";//Decoracion
}

/*Implementacion de Funcion de limpieza de pantalla*/
void c(){
	system("cls");
}

/*Implementacion de Funcion de pausa de sistema*/
void p(){
	system("pause");
}

/*Implementacion de Funcion de operaciones 1*/
void cal1(){
	
	/*Declaracion de Variables para funcion caso1*/
    int n;//Variable de ingreso de datos
	int res;//Variable para respuesta 1
	int res2;//Variable para respuestas 2
	/*Inicio de bucle para pedir datos en caso 1*/
            		do{
            			
						cout << "\n   Introduzca un numero entero: ";
                    	cin >> n;
                    
                    	(cin.fail()||n <= 0);
    							cin.clear();
    							cin.ignore(1024 , '\n');
    						
					}while(n <= 0);//Condicion para salir del bucle
					
                    res = n * 800;//Uso de variable para Respuesta 1
                    res2 = n * 500;//Uso de variable para Respuesta 2
                    cout << "\n   =====================================================================";//Decoracion
                    cout << "\n   = Insumo requerido de azucar para " << n << " botella/s de soda es de " << res << " g =";
                    cout << "\n   =  Insumo requerido de agua para " << n << " botella/s de soda es de " << res2 << " ml =";
                    cout << "\n   =====================================================================\n\n";//Decoracion
                    p();//Utilizacion de funcion pausa
                    c();//Utilizacion de funcion para limpiar pantalla	
}

/*Implementacion de Funcion de operaciones 1*/
void cal2(){
	/*Declaracion de Variables para funcion caso2*/
    int n;//Variable de ingreso de datos
	int res;//Variable para respuesta 1
	int res2;//Variable para respuestas 2
	
	/*Inicio de bucle para pedir datos en caso 2*/
    do{
    	cout << "\n   Introduzca un numero entero: ";
        cin >> n;
                    
        (cin.fail()||n <= 0);
    			cin.clear();
    			cin.ignore(1024 , '\n');
    							
	}while(n <= 0);//Condicion para salir del bucle
					
                    res = n * 700;//Uso de variable para Respuesta 1
                    res2 = n * 600;//Uso de variable para Respuesta 2
                    cout << "\n   =====================================================================";//Decoracion
                    cout << "\n   = Insumo requerido de azucar para " << n << " botella/s de jugo es de " << res << " g =";
                    cout << "\n   =  Insumo requerido de agua para " << n << " botella/s de jugo es de " << res2 << " ml =";
                    cout << "\n   =====================================================================\n\n";//Decoracion
                    p();//Utilizacion de funcion pausa
                    c();//Utilizacion de funcion para limpiar pantalla
}
