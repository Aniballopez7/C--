/*Dias de la semana*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int numero;
	cout<<"Ingrese un numero del 1 al 7: ";cin>>numero; 
	
	if(numero == 1)
	{
		cout<<"\nEl dia es Domingo";
	}
	else if(numero == 2)
	{
		cout<<"\nEl dia es Lunes";
	}
	else if(numero == 3)
	{
		cout<<"\nEl dia es Martes";
	}
	else if(numero == 4)
	{
		cout<<"\nEl dia es Miercoles";
	}
	else if(numero == 5)
	{
		cout<<"\nEl dia es Jueves";
	}
	else if(numero == 6)
	{
		cout<<"\nEl dia es Viernes";
	}
	else if(numero==7){
		cout<<"\nEl dia es Sabado";
	}
	cout<<"\n";
	getch();
	return 0;
}

