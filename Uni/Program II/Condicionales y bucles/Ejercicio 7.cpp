/*Ejercicio#7 Escrib� un programa que solicite al usuario un n�mero 
y le reste el 15%, almacenando todo en una �nica variable. 
A continuaci�n, mostrar el resultado final en pantalla*/

#include <iostream>

using namespace std;

int main (){
	float num,desc, precio_t;
	
	cout<<"Ingrese un numero: ";cin>>num;
	desc=(num*0.15);
	precio_t=(num-desc);
	cout<<"Su descuento es de: "<<precio_t;
	return 0;
}
