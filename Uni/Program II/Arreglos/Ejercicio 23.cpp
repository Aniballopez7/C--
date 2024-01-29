/*
Escribir un programa que, dado un número entero por el usuario (guardado como int), muestre la
suma de todos sus dígitos. Recuerda que vas a necesitar obtener cada uno de los dígitos por separado
para poder sumarlos entre sí.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num,n[4],x=0,n1=0,num1;
    cout<<"Ingrese un numero: ";cin>>num;
    num1 = num;
    while (num > 0)
    {
        n[x] = num % 10;
        num /= 10;
        x++;
    }
    for (int y = x-1; y >= 0; y--)
    {
        n1 += n[y];
    }
    cout<<"\nSuma de los digitos "<<num1<<": "<<n1<<endl;
    system("pause");
}