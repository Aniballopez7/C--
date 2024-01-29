#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,n2, *numero, *numero2;
	cout<<"Ingrese un numero: ";cin>>n;
	cout<<"Ingrese otro numero: ";cin>>n2;
	
	numero = &n;
	
	cout<<"direccion de n: "<<numero<<endl;
	
	/*
	cout<<"Valor de n1: "<<n<<endl;
	cout<<"Valor de n2: "<<n2<<endl;
	*/
	getch();
}
