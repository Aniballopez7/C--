#include<iostream>
#include<stdlib.h>
using namespace std; 
int *calificaciones,cantidadCalificaciones;
void pedirDatos();
void mostrar();
int main()
{
    pedirDatos();
    mostrar();
    cout<<"----------------------------------------------------------------------\n"<<endl;
    delete[] = calificaciones;
    pedirDatos();
    mostrar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos()
{
    cout<<"Cuantas calificaciones vas a ingresar: ";cin>>cantidadCalificaciones;
    cout<<"\n";
    calificaciones = new int [cantidadCalificaciones];
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        cout<<"Calificaciones: "<<i+1<<": ";cin>>calificaciones[i];
    }
    cout<<"\n";
}
void mostrar()
{
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        cout<<"Calificacion "<<i+1<<": "<<calificaciones[i]<<" Dir: "<<&calificaciones[i]<<endl;
    }
}