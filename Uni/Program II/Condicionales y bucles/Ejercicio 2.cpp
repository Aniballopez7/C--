/* Ejercicio #2 Escribir un programa que solicite al usuario ingresar 
un n�mero con decimales y almacenalo en una variable. A continuaci�n, 
el programa debe solicitar al usuario que ingrese un n�mero entero y 
guardarlo en otra variable. En una tercera variable se deber� guardar 
el resultado de la suma de los dos n�meros ingresados por el usuario. 
Por �ltimo, se debe mostrar en pantalla el texto �El resultado de la 
suma es [suma]�, donde �[suma]� se reemplazar� por el resultado de la operaci�n.*/

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
