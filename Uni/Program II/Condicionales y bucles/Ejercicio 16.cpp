/*Ejercicio#16 Escribí un programa que le solicite al usuario un número entero 
y muestre todos los números correlativos entre el 1 y el número ingresado por el usuario*/

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int num;
	
	cout<<"Ingrese un numero entero: ";cin>>num;
	
	int i;
	i=1;
	
	while (i<=num){
	
		cout<<i<<" ";
		i++;
	}
	

	getch () ;
	return 0;
}
