/*
Pedir al humano que ingrese un texto de 4 números.
Dividir el texto en dos números de dos en dos.
Sumar cada uno de los números.
*/
#include <iostream>
#include <stdlib.h>
using namespace std; 
int main()
{
    char texto[4],texto1[2],texto2[2];
    int numero1,numero2,suma=0;
    cout<<"Ingresa 4 numeros: ";cin>>texto;
    texto1[0] = texto[0];
    texto1[1] = texto[1];
    texto1[2] = '\0';
    numero1 = atoi(texto1);
    texto2[0] = texto[2];
    texto2[1] = texto[3];
    texto2[2] = '\0';
    numero2 = atoi(texto2);
    suma = numero1+numero2;
    cout<<"Suma: "<<suma<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}