/*Ejercicio#4 Escrib� un programa que solicite al usuario ingresar la cantidad 
de kil�metros recorridos por una motocicleta y la cantidad de litros de 
combustible que consumi� durante ese recorrido. Mostrar el consumo de combustible por kil�metro.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	double km, lt, total;
	
	cout<<"Ingrese la cantidad de Km recorridos: ";cin>>km;
	cout<<"Ingrese la cantidad de combustible que consumio durante su ese recorrido: ";cin>>lt;
    total=(km)/(lt);
	cout<<"El consumo de combustible por Km es: "<<total; 
	
	getch();
	return 0;
}
