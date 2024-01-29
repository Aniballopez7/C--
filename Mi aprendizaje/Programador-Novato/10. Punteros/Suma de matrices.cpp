#include<iostream>
#include<stdlib.h>
using namespace std;
int **matriz,**matriz2,filas,columnas;
void pedirDatos();
void suma();
void mostrar();
int main()
{
    pedirDatos();
    suma();    
    mostrar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos()
{
    cout<<"Cuantas filas va a contener tu matriz: ";cin>>filas;
    cout<<"Cuantas columnas va a contener tu matriz: ";cin>>columnas;
    cout<<"\n";
    matriz = new int *[filas];
    matriz2 = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int [columnas];
        matriz2[i] = new int [columnas];
    }
    cout<<"Matriz 1\n"<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Matriz ["<<i+1<<"]["<<j+1<<"]: ";cin>>*(*(matriz+i)+j);
        }
    }
    cout<<"\nMatriz 2\n"<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Matriz 2 ["<<i+1<<"]["<<j+1<<"]: ";cin>>*(*(matriz2+i)+j);
        }
    }
}
void suma()
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            *(*(matriz+i)+j) += *(*(matriz2+i)+j);
        }
    }
}
void mostrar()
{
    cout<<"Suma de las matrices:\n"<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<*(*(matriz+i)+j)<<" "; 
        }
        cout<<"\n";
    }
}