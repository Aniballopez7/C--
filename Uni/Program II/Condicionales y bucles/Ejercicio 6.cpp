/*Ejercicio#6 Escrib� un programa que solicite al usuario ingresar 
tres n�meros para luego mostrarle el promedio de los tres.*/

#include <iostream>

using namespace std;

int main (){
	float n1, n2, n3, suma, prom;
	
	cout<<"Ingrese tres numeros seguidos de un espacio: ";cin>>n1>>n2>>n3;
	suma=(n1+n2+n3);
	prom=(suma/3);
	cout<<"El promedio de los tres numeros es de: "<<prom;	
	
	
	
	return 0;
}


