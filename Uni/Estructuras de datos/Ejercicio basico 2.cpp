#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
int *px; // puntero a un entero
int i=1;
float f=0.3;
double d=0.005;
char c='*';
px=&i;
cout<<"Valores de las Variables: i = "<<i<<" f= "<<f<<" d= "<<d<<" c="<<c<<endl<<endl;
cout<<"Direcciones: i= "<<&i<<" f= "<<&f<<" d= "<<&d<<" c= "<<&c<<endl<<endl;
cout<<"Valores de los punteros: px= "<<px<<" px + 1 = "<<px+1<<" px+2= "<<px+2<<"px+3="<<px+3<<endl<<endl;
system("pause");
}