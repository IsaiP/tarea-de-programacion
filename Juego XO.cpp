#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

/*Variables globales*/
char tablero[3][3];//Variable de la matriz tipo caracter 
char jugadorActual = 'X';//Variable con que se inicia el juego, esta puede cambiar en el transcurso


/*Declaracion de funciones*/
void inicializar();//Funcion de inicializacion de tablero
bool hayGanador();//Funcion para saber si hay ganador
void desplegarTablero();//Funcion para la aparicion de el tablero en pantalla
bool hayEmpate();//Funcion para saber si hay un empate
void presentacion();//Funcion para el menu
void juego();//Funcion donde esta el juego
void gotoxy(int, int);//Funcion para posicionar el programa

/*Funcion Principal*/
int main() {
	
	/*Vable de funcion main*/
	int opcion;//Variable para elejir opciones de menu
	
	gotoxy(30,3);//Ulizacion de funcion de posicion
	
	/*Inicio de anidamiento*/
	do{
		/*Inicio de bucle para introduccir opcion*/
		do{			
			presentacion();
		    cout << "\n\t\t\t Introduzca opcion (1-2): ";
			cin >> opcion;
					
			(cin.fail()||opcion<=0);
		    		cin.clear();
		    		cin.ignore(1024 , '\n');
			system("cls");					
		}while(opcion <= 0);//Condicion para salir del bucle de pedir opcion
		
		/*Inicio de casos del programa*/	
		switch( opcion ){
			
			case 1:	
					juego();//Utilizacion de funcion donde se encuentra ek juego
		}
		/*Fin de anidamiento*/
	}while(opcion != 2);
	
	return 0;//Se retorna valores de 0
	system("pause");//Pausa de sistema
}

/*Implementacion de Funciones*/

/*Funcion de la inisalizacion del tablero*/
void inicializar(){	
	for(int i = 0; i < 3; i++){	//for que recorre las filas	
		for(int j = 0; j < 3; j++){	//for que recorre las columnas		
			tablero[i][j] = '_';//Inicio de el tablero
		}	
	}	
}

/*Funcion que imprime en pantalla el tablero*/
void desplegarTablero(){
	
	gotoxy(30,6);//Utilizacion de funcion de posicion
	
	cout << "\n\t\t\t\t TIC TAC TOE GAME"; //Decoracion de tablero
	cout << "\n\t\t\t\t ===============\n";//Decoracion de tablero
	for(int i = 0; i < 3; i++){//Recorrido de filas para la imprecion de tablero
		cout << "\t\t\t\t =";//Decoracion de inicio de filas
		for(int j = 0; j < 3; j++){//Recorrido de columnas para la imprecion de tablero
			cout << " [" << tablero[i][j] <<"]";//impresion de tablero	
		}
		cout << " = \n";
	}
	cout << "\t\t\t\t ===============\n";//Decoracion de tablero	
}

/*Funcion para saber si hay un ganador*/
bool hayGanador(){
	
	char jugadorEncontrado = tablero[0][0];//Variable para saber quien esta jugando si X u O
	
	/*Verificacion para saber si hay ganador en Horizontal*/
	for(int i = 0; i < 3; i++){//Recorrido de fila 
		for(int j = 0; j < 3; j++){//Recorrido de columna
			/*SI para el tablero esta en blanco*/
			if(tablero[i][j] == '_'){
				break; break;//Rompimiento de verificacion
			} 
			/*Si el jugador es distinto a el que se encuentre en la casilla*/
			if(jugadorEncontrado != tablero[i][j]){
				break; break;//Rompimiento de verificacion
			}
			jugadorEncontrado = tablero [i][j];//Como se encuentra el tablero despues de la verificacion
			/*Como se encuentra el ganador*/
			if(j == 2){
				cout << "\n\n\t\t\t HA GANADO: " << jugadorEncontrado;
				return true;//Retorna variable verdadera
			}
		}

	}
	
	/*Verificacion para saber si hay ganador en Vertical*/
	jugadorEncontrado = tablero[0][0];//CAmbia la variable para vertical
	for(int i = 0; i < 3; i++){//Recorrido de fila 
		for(int j = 0; j < 3; j++){//Recorrido de columna
			/*SI para el tablero esta en blanco(Vertical)*/
			if(tablero[j][i] == '_'){
				break; break;//Rompimiento de verificacion
			} 
			/*Si el jugador es distinto a el que se encuentre en la casilla*/
			if(jugadorEncontrado != tablero[j][i]){
				break; break;//Rompimiento de verificacion
			}
			jugadorEncontrado = tablero [j][i];//Como se encuentra el tablero despues de la verificacion
			/*Como se encuentra el ganador*/
			if(j == 2){
				cout << "\n\n\t\t\t HA GANADO: " << jugadorEncontrado;
				return true;//Retorna variable verdadera
			}
		}
		
	}
	
	/*Verificacion para saber si hay ganador de izq a der*/
	jugadorEncontrado = tablero[0][0];//Cambia la variable de izq a der
	for(int i = 0; i < 3; i++){//Recorrido de fila 
			/*SI para el tablero esta en blanco(Izq a Der)*/
			if(tablero[i][i] == '_'){
				break;//Rompimiento de verificacion
			} 
			/*Si el jugador es distinto a el que se encuentre en la casilla*/
			if(jugadorEncontrado != tablero[i][i]){
				break;//Rompimiento de verificacion
			}
			jugadorEncontrado = tablero [i][i];//Como se encuentra el tablero despues de la verificacion
			/*Como se encuentra el ganador*/
			if(i == 2){
				cout << "\n\n\t\t\t HA GANADO: " << jugadorEncontrado;
				return true;//Retorna variable verdadera
			}
		
	}
	
	/*Verificacion para saber si hay ganador de der a izq*/
	jugadorEncontrado = tablero[0][2];//Cambia la variable de der a izq
	/*SI para el tablero esta en blanco(Izq a Der)*/
	for(int i = 2; i >= 0; i--){//Recorrido de fila 
			/*SI para el tablero esta en blanco(Der a Izq)*/
			if(tablero[2-i][i] == '_'){
				break;//Rompimiento de verificacion
			} 
			/*Si el jugador es distinto a el que se encuentre en la casilla*/
			if(jugadorEncontrado != tablero[2-i][i]){
				break;//Rompimiento de verificacion
			}
			jugadorEncontrado = tablero [2-i][i];//Como se encuentra el tablero despues de la verificacion
			/*Como se encuentra el ganador*/
			if(i == 0){
				cout << "\n\n\t\t\t HA GANADO: " << jugadorEncontrado;
				return true;//Retorna variable verdadera
			}
		
	}
	return false;//Si todo no cumple retorna falso
}

/*Funcion para saber si hay empate*/
bool hayEmpate(){
	for(int i = 0; i < 3; i++){//Recorrido de fila 
		for(int j = 0; j < 3; j++){//Recorrido de columna
			/*Si el tablero no esta vacio*/
			if(tablero[i][j] == '_'){
				return false;//Se retorna un valor falso
			}
		}
	}
	cout << "\n\n\t\t\t HAY UN EMPATE \n";
	return true;//Se retorna verdadero si cumple
}

/*Fincion para el menu del juego*/
void presentacion(){
	
	gotoxy(30,6);//Utilizacion de funcion de posicion
	system("color 74");//Cambio de color del programa
	
	cout << "\n\t\t\t ====================================================================";//Decoracion
	cout << "\n\t\t\t   Programa elaborado por:@ Adilman Isai Portillo Ceron (PC18035) \n";
	cout << "\n\t\t\t                  TIC TAC TOE GAME (DOS JUGADORES)                 \n";
    cout << "\n\t\t\t ====================================================================";//Decoracion
    cout << "\n\t\t\t =                            1. JUGAR                              =";//Caso 1
    cout << "\n\t\t\t =                       2. SALIR DEL JUEGO                         =";//Caso 2
    cout << "\n\t\t\t ====================================================================";//Decoracion
}

/*Funcion donde se encuentra el juego*/
void juego(){
	
	/*Variables de funcion*/
	int fila = 0;//Variable para las filas
	int columna = 0;//Variables para las columnas
	
	inicializar();//Utilizacion de funcion para iniciar el tablero
	
	/*Inicio de bluque para saber si hay ganador o empate*/
	while(!hayGanador() && !hayEmpate()){
		
		desplegarTablero();//Utilizacion de fincion para imprimir el tablero
		cout << endl << "\t\t\t\tEn que fila quiere jugar " << jugadorActual << ":";
		cin >> fila;//Ingreso de dato para la variable fila
		cout << "\t\t\t\tEn que columna quiere jugar " << jugadorActual << ":";
		cin >> columna;//Ingreso de dato para la variable columna
		if(tablero[fila][columna] != '_'){//Condicional si para que cuando una casilla este vacia
			cout << "\t\t\t\tEsa casilla ya esta ocupada, intente de nuevo\n";
		}
		else{//Sino la casilla se podra ingresar cualquier jugador
			tablero[fila][columna] = jugadorActual;
			if(jugadorActual == 'X'){
				jugadorActual = 'O';//Si el jugador X no esta jugando es O que lo hace
			}
			else{
				jugadorActual = 'X';//Sino es X que esta jugando
			}
		}
		cout << "\n";
		system("pause");//Pausa de sistema
		system("cls");//Limpieza de pantalla
	}
	cout << "\n";
	desplegarTablero();//Funcion para impresion de pantalla
	cout << "\n";
	system("pause");//Pausa de sistema
	system("cls");//Limpieza de pantalla
}

/*Funcion para mover en la consola la ubicacion de texto*/
void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
