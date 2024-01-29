/*Ejercicio #1 Escribir un programa que solicite al 
usuario que ingrese su nombre. El nombre se debe
almacenar en una variable llamada nombre. 
A continuación se debe mostrar en pantalla
el texto “Ahora estás enla matrix, [usuario]”,
donde “[usuario]” se reemplazará por el nombre 
que el usuario haya ingresado*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	char nombre [20];
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ahora estas estas en la matrix "<<nombre;
	
	getch();
	return 0;
}
