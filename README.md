# tarea-de-programacion

#include <iostream>
#include <cstdlib>

using namespace std;

float sumar(float x,float y);
void pedirNumero();


float sumar(float x,float y){              //0x28fee8 0x28fee4
	return x+y;                           
}

void pedirNumero(){
	float x;
	float y;
	float res;
	  
	cout << "Ingrese un numero" << endl;
	cin >> x;
	cout << "Ingrese un numero" << endl;
	cin >> y;
	res = sumar(x,y);
	cout << "El resultado es de: " << res << endl;
}

//int main(int argc, char** argv) 
int main (){
	pedirNumero();
	
	system("pause");
	return 0;
}
