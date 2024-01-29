#include <iostream>
using namespace std;
int main()
{
    int matriz[10][10],filas,columnas;
    cout<<"Ingresa cuantas filas tendra tu matriz: ";cin>>filas;
    cout<<"Ingresa cuantas columnas tendra tu matriz: ";cin>>columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingresa el valor de la posision "<<i+1<<","<<j+1<<" : ";cin>>matriz[i][j];
        }
    }
    cout<<"\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}