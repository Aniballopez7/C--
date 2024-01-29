/*3 programas en 1
Vocales
Numero par o impar
Numero mayor*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int opc,numero;
	char letra;
	float n1,n2;
	do
	{
		system("clear");
		cout<<"1. Programa de vocales"<<endl;
		cout<<"2. Programa de numero par o impar"<<endl;
		cout<<"3. Programa de numero mayor"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"\nOpcion: ";cin>>opc;
	}while(opc > 3);
	system("clear");
	switch(opc)
	{
		case 0:
			return 0;
		case 1:
			cout<<"Ingrese una letra: ";cin>>letra;
			switch(letra)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': cout<<"\nEs una vocal minuscula"<<endl;break;
			default: cout<<"\nNo es una vocal"<<endl;break;
			cout<<"\n";
			}
			getch();
			break;
		case 2:
				cout<<"Ingrese un numero: ";cin>>numero;
			if(numero == 0)
			{
				cout<<"\nEl numero es cero"<<endl;
			}
			else if((numero % 2) == 0)
			{
				cout<<"\nEl numero es par"<<endl;	
			}
			else if((numero % 2) != 0)
			{
				cout<<"\nEl numero es impar"<<endl;
			}
			getch();
			break;
		case 3:
			cout<<"Ingrese un numero: ";cin>>n1;
			cout<<"\nIngrese otro numero: ";cin>>n2;
			if(n1 == n2)
			{
				cout<<"\nLos numeros son iguales"<<endl;	
			}
			else if(n1 > n2)
			{
				cout<<"\nEl mayor es: "<<n1<<endl;	
			}
			else
			{
				cout<<"\nEl mayor es: "<<n2<<endl;
			}
			getch();
			break;
	}
	cout<<"\n";
	getch();
	return 0;
}
