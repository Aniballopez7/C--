/*Ejercicio #3  Escrib� un programa que solicite al usuario dos n�meros 
y los almacene en dos variables. En otra variable, almacen� el resultado
de la suma de esos dos n�meros y luego mostr� ese resultado en pantalla.
A continuaci�n, el programa debe solicitar al usuario que ingrese un 
tercer n�mero, el cual se debe almacenar en una nueva variable. Por �ltimo, 
mostr� en pantalla el resultado de la multiplicaci�n de este nuevo n�mero por 
el resultado de la suma anterior.*/
 

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	
	int n1,n2,n3,suma,multiplicacion;
	
	cout<<"Ingrese dos numeros: ";
	cin>>n1>>n2;
	cout<<"\nIngrese un tercer numero: ";
	cin>>n3;
	suma =(n1+n2);
	multiplicacion =(suma*n3);
	cout<<"\nEl resultado de la suma de los dos primeros numeros es: "<<suma;
	cout<<"\nEl resultado de el tercer numero ingresado multiplicado por la suma de los dos numero ingresados al principio es: "<<multiplicacion;
	
	getch ();
	return 0;
}
