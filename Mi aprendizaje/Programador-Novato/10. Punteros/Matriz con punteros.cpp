#include<iostream>
#include<stdlib.h>
using namespace std; 
int **matriz,filas,columnas;
void pedirDatos();
void mostrar();
int main()
{
    pedirDatos();
    mostrar();
    for (int i = 0; i < filas; i++)
    {
        delete matriz[i];
    }
    delete [] matriz;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos()
{
    cout<<"Cuantas filas va a contener tu matriz: ";cin>>filas;
    cout<<"Cuantas columnas va a contener tu matriz: ";cin>>columnas;
    cout<<"\n";
    matriz = new int*[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Matriz en la posicion ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>*(*(matriz+i)+j);
        }
    }
}
void mostrar()
{
    cout<<"\nMatriz:\n"<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<*(*(matriz+i)+j)<<" ";
        }
        cout<<"\n";
    }
}