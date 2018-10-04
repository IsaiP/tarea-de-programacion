#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i = 1; i <= num; i++){
		fact = fact*i;
	}
	return fact;	
}

int main() {
	int num;
	
	do{
	
		cout << "Ingrese el numero: ";
		cin >> num;
		
		(cin.fail()||num<=0);
    			cin.clear();
    			cin.ignore(1024 , '\n');
		
	}while(num <=0);
	
	cout << "EL RESULTADO ES: "<< factorial(num) << endl;
	
	system("pause");
	return 0;
}
