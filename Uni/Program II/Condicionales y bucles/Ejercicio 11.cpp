/* Ejercicio11 Escribí un programa para solicitar al usuario el ingreso de un 
número entero y que luego imprima un valor de verdad dependiendo de si el número 
es par o no. Recordar que un número es par si el resto, al dividirlo por 2, es 0.*/ 

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	 int num;
	 
	 cout<<"Ingrese un numero: ";cin>>num;
	 
	 bool resul = (num%2==0);
	 
	 cout<<resul<<endl;
	
	
	getch();
	return 0;
}
