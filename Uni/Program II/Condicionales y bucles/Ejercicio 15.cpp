/*Ejercicio#15 Escrib� un programa que permita saber si un a�o es bisiesto. 
Para que un a�o sea bisiesto debe ser divisible por 4 y no debe ser divisible 
por 100, excepto que tambi�n sea divisible por 400.*/

#include <iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int num;
	
	cout<<"Ingrese el a�o: ";cin>>num;
	
	if (num%2==0) {
		cout<<"El a�o ingresado es Bisiesto";
	}
	else
	{
		cout<<"El a�o ingresado no es Bisiesto";
	}
	
	getch ();
	return 0;
}
