/*Ejercicio5 Escribí un programa que solicite al usuario el ingreso de una 
temperatura en escala Fahrenheit (debe permitir decimales) y le muestre el 
equivalente en grados Celsius. La fórmula de conversión que se usa para este 
cálculo es: _Celsius = (5/9) * (Fahrenheit-32)_*/

#include<iostream>
#include<conio.h>


using namespace std;

int main (){
	
	int fah; 
	double celsius=0;
	double resta=0;
	double valorc=0.555555555; //0.555555555=5/9
	cout<<"Ingrese su temperatura expresada en Farenheit: ";cin>>fah;
	
	resta = (fah - 32);
	celsius = (valorc * resta);	
	
	cout<<"Su temperatura expresada en Celius es: "<<celsius<<endl;
	
	getch ();
	return 0;
}
