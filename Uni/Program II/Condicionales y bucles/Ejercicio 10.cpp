/*Ejercicio#10 Escrib� un programa que le solicite al usuario ingresar una 
fecha formada por 8 n�meros, donde los primeros dos representan el d�a, los 
siguientes dos el mes y los �ltimos cuatro el a�o (DDMMAAAA). Este dato debe 
guardarse en una variable con tipo int (n�mero entero). Finalmente, mostrar 
al usuario la fecha con el formato DD / MM / AAAA*/

#include<iostream>
using namespace std;

int main (){
	int  DD,MM,AAAA;
	cout<<"Ingrese 8 numeros en donde los primeros representem los dias, los dos siguientes el mes y los ultimos cuatros el a�o: ";
	cin>>DD>>MM>>AAAA;
	cout<<DD<<" / ";
	cout<<MM<<" / ";
	cout<<AAAA<<"";	
	return 0;
}
