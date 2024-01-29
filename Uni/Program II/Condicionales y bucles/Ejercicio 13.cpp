/*Ejercicio#13 Escrib� un programa para solicitar al 
usuario tres n�meros y mostrar en pantalla al menor de los tres.*/

#include <iostream>

using namespace std;

int main (){
	float n1, n2, n3;
	cout<<"Ingrese un numero: ";cin>>n1;
	cout<<"Ingrese un numero: ";cin>>n2;
	cout<<"Ingres un numero: ";cin>>n3;
	if((n1==n2)&&(n2==n3)){
		cout<<"Todos los numeros son iguales";
    }
	else if((n1<=n2)&&(n1<=n3)){
		cout<<"El numero menor es: "<<n1;
	}
	else if ((n2<=n1)&&(n2<=n3)){
		cout<<"El numero menor es: "<<n2;
	}
	else{
		cout<<"El numero menor es: "<<n3;
	}
}
