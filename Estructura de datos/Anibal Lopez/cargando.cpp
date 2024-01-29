#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int *puntero;
int p,im;
void insertar()
{
	cout<<"Generando numeros"<<endl;
	cout<<endl;

	puntero = new int[5];
	srand(time(NULL));
	for(int i=0;i<5;i++)
	{
		int x = rand()%100;
		puntero[i] = x *i + 1;
		if(puntero[i] % 2 == 0)
		{
			p++;
		}
		if(puntero[i] % 2 != 0)
		{
			im++;
		}
	}
	
}
void mostrar()
{
	cout<<"Elementos de su vector:"<<endl;
	cout<<endl;
	for(int i = 0; i < 5; i++)
	{
		cout<<puntero[i]<<endl;
	}
	cout<<endl;
}
void pares()
{
	int sumaP = 0, arregloP[p];
	for(int i = 0; i < 5;i++)
	{
		if(puntero[i] % 2 == 0)
		{
			arregloP[i] = puntero[i];
			sumaP += puntero[i];
			cout<<arregloP[i]<<"  ";
		}
	}
	if(p == 0)
	{
		cout<<"No hay numeros pares"<<endl;
	}
	else
	{
	 	cout<<" --------- Suma de pares: "<<sumaP<<endl;
	}
}
void impares()
{
	int sumaI = 0, arregloI[im];
	for(int i = 0; i < 5;i++)
	{
		if(puntero[i] % 2 != 0)
		{
			arregloI[i] = puntero[i];
			sumaI += puntero[i];
			cout<<arregloI[i]<<"  ";
		}
	}
	if(im == 0)
	{
		cout<<"No hay numeros impares"<<endl;
	}
	else
	{
	 	cout<<" --------- Suma de impares: "<<sumaI<<endl;
	}
}
int main()
{
	insertar();
	mostrar();
	pares();
	impares();
	cout<<endl;
	system("pause");
}
