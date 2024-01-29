#include<iostream>
#include<cmath>
using namespace std; 
//TODO: Nota los vectores ya son tomados como referencia por ende no hace falta colocar &
void cuadrado(int vector[]);
void mostrarCuadrado(int vector[]);
const int TAM=5;
int main()
{
    int vector[TAM];
    cout<<"Ingresa los "<<TAM<<" numeros del vector:\n"<<endl;
    for (int i = 0; i < TAM; i++)
    {
        cout<<"Numero "<<i+1<<": ";cin>>vector[i];
    }
    cuadrado(vector);
    cout<<"\nEstos son los numeros ingresados al cuadrado:\n"<<endl;
    mostrarCuadrado(vector);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void cuadrado(int vector[])
{
    for (int i = 0; i < TAM; i++)
    {
        vector[i] *= vector[i]; 
    }
    
}
void mostrarCuadrado(int vector[])
{
    for (int i = 0; i < TAM; i++)
    {
        cout<<"Numero "<<i+1<<"= "<<vector[i]<<endl;
    }
}