/*Ejercicio #3  Escribí un programa que solicite al usuario dos números 
y los almacene en dos variables. En otra variable, almacená el resultado
de la suma de esos dos números y luego mostrá ese resultado en pantalla.
A continuación, el programa debe solicitar al usuario que ingrese un 
tercer número, el cual se debe almacenar en una nueva variable. Por último, 
mostrá en pantalla el resultado de la multiplicación de este nuevo número por 
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
