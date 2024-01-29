#include<iostream>
using namespace std; 
int suma(int a, int b);
int main()
{
    int resultado,valorA,valorB;
    cout<<"Ingresa el valor de A: ";cin>>valorA;
    cout<<"Ingrese el valor de B: ";cin>>valorB;
    resultado = suma(valorA,valorB);
    cout<<"Resultado: "<<resultado<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int suma(int valA, int valB)
{
    int resultado;
    resultado = valA +valB;
    return resultado;
}