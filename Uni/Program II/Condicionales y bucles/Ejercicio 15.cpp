/*Ejercicio#15 Escribí un programa que permita saber si un año es bisiesto. 
Para que un año sea bisiesto debe ser divisible por 4 y no debe ser divisible 
por 100, excepto que también sea divisible por 400.*/

#include <iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int num;
	
	cout<<"Ingrese el año: ";cin>>num;
	
	if (num%2==0) {
		cout<<"El año ingresado es Bisiesto";
	}
	else
	{
		cout<<"El año ingresado no es Bisiesto";
	}
	
	getch ();
	return 0;
}
