/* Ejercicio11 Escrib� un programa para solicitar al usuario el ingreso de un 
n�mero entero y que luego imprima un valor de verdad dependiendo de si el n�mero 
es par o no. Recordar que un n�mero es par si el resto, al dividirlo por 2, es 0.*/ 

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
