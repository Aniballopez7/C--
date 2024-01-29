/*Ejercicio#14 Escribí un programa que solicite ingresar un nombre de usuario y una contraseña. 
Si el nombre es “Gwenevere” y la contraseña es “excalibur”, mostrar en pantalla “Usuario 
y contraseña correctos. Si el nombre o la contraseña no coinciden,
 mostrar “Acceso denegado*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

    int main(){
	 

string usu_i, con_i;
	
	cout<<"Ingrese el usuario: ";cin>>usu_i;
	cout<<"Ingrese la contraseña: ";cin>>con_i;
	
	if
	
	(usu_i == "Gwenevere" && con_i == "excalibur"){
		cout<<"Usuario y contraseña correctos";
	}
	
	else{
	
		cout<<"Acceso denegado";
}
	getch();
	
	return 0;
}
