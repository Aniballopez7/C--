/*Ejercicio#14 Escrib� un programa que solicite ingresar un nombre de usuario y una contrase�a. 
Si el nombre es �Gwenevere� y la contrase�a es �excalibur�, mostrar en pantalla �Usuario 
y contrase�a correctos. Si el nombre o la contrase�a no coinciden,
 mostrar �Acceso denegado*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

    int main(){
	 

string usu_i, con_i;
	
	cout<<"Ingrese el usuario: ";cin>>usu_i;
	cout<<"Ingrese la contrase�a: ";cin>>con_i;
	
	if
	
	(usu_i == "Gwenevere" && con_i == "excalibur"){
		cout<<"Usuario y contrase�a correctos";
	}
	
	else{
	
		cout<<"Acceso denegado";
}
	getch();
	
	return 0;
}
