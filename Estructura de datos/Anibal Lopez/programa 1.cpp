#include<iostream>
using namespace std;
int main()
{
	long int num1, num2;
	long int *pointer;
	do
	{
		cout<<"Ingrese el valor de numero 1: ";cin>>num1;
	}while(num1 >= 100000 && num2 <= 500000);
	pointer = &num1;
	num2 = *pointer;
	cout<<"Puntero = "<<*pointer<<endl;
	cout<<"num2 = "<<num2<<endl;
	cout<<"direccion de num1: "<<&num1<<endl;
	cout<<"Puntero valor = "<<pointer<<endl;
	
}
