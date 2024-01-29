/*
Programa que pida al humano que digite  un número entre 1 y 10 
y que valide que este dentro el rango de 1 y 10.

Mostrar los múltiplos de  de ese número del 1 al 10.
*/
#include<iostream>
using namespace std;
int main()
{
    int numero;
    do{
        cout<<"\nDigita un numero entre 1 y 10: ";cin>>numero;
        if(numero < 1 || numero > 10)
        {
            cout<<"Dije que digitaras un numero entre 1 y 10.\n";
        }
    }while(numero < 1 || numero > 10);
    cout<<"\n";
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<" x "<<numero<<" = "<<i * numero<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}