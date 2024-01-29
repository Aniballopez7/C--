/* Ejercicio #2 Escribir un programa que solicite al usuario ingresar 
un número con decimales y almacenalo en una variable. A continuación, 
el programa debe solicitar al usuario que ingrese un número entero y 
guardarlo en otra variable. En una tercera variable se deberá guardar 
el resultado de la suma de los dos números ingresados por el usuario. 
Por último, se debe mostrar en pantalla el texto “El resultado de la 
suma es [suma]”, donde “[suma]” se reemplazará por el resultado de la operación.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double Ndecimal;
	int Nentero;
	double suma;
	
	cout<<"Ingrese un numero con decimales: ";cin>>Ndecimal;
	cout<<"\nIngrese un numero entero: ";cin>>Nentero;
	suma = (Ndecimal) + (Nentero);
	cout<<"\nEl resultado de la suma de ambos es: "<<suma;
	
	getch();
	return 0;
}
