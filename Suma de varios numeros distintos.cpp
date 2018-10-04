#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void clean();//declaracion de funcion no retorna nada/no recibe nada

int sumar(int a,int aux);

int main(int argc, char** argv) {

	int n=1;//contador 
	int vn;//su valor cambiara de 2 a 4
	int suma=0; //acumulador
	int aux;//intercambio de valores temporales
	
	do{
		clean();
		cout << "Cuantos numeros quiere sumar [2-4]: ";
		cin >> vn;
	}while(vn<2 || vn>4);
		
	while(n<=vn){
		clean();
		cout << "Ingrese el numero " << n << endl;
		cin >> aux;
		suma=sumar(suma,aux);//llamada de la funcion
		n++;
	}
	
	clean();
	cout << "La suma es de: "<< suma << endl;
	system("pause");
	return 0;
}

void clean(){//implementacion de la funcion 1
	system("cls");
	cout << "___________________________________" << endl;
	cout << "___________________________________" << endl;

}

int sumar(int a,int aux){
	return a+aux;
}
