#include <iostream>
using namespace std;
int main()
{
    int matriza[100][100],matrizb[100][100],filas,columnas;
    cout<<"Ingresa la catidad de filas de tu matriz : ";cin>>filas;
    cout<<"Ingresa la catidad de columnas de tu matriz : ";cin>>columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingresa la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriza[i][j];
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizb[i][j]=matriza[i][j];
        }
    }
    cout<<"\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matrizb[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}