#include<iostream>
#include<conio.h>
using namespace std;
int n, *num;
void insertar()
{
	cout<<"Ingrese un elemento: ";cin>>n;
	cout<<endl;
	num = new int[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Ingrese un numero: ";cin>>num[i];
	}
}
void mostrar()
{
	cout<<"Mostrabdo datos: "<<endl;
	for(int i = 0; i < n;i++)
	{
		cout<<num[i]<<endl;
	}
}
int  main()
{
	insertar();
	mostrar();
	system("pause");
}
