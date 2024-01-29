#include<iostream>
using namespace std; 
const int filas=2,columnas=3;
void pedirDatos(int matriz[][columnas]);
void mostrarMatris(int matriz[][columnas]);
void cuadrado(int matriz[][columnas]);
int main()
{
    int matriz[filas][columnas];
    pedirDatos(matriz);
    cout<<"\nMatriz Original\n"<<endl;
    mostrarMatris(matriz);
    cout<<"\nMatriz elevada:\n"<<endl;
    cuadrado(matriz);
    mostrarMatris(matriz);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
//TODO: hay que pasarle una cantidad de columnas al pasarlas por parametros ajuro
//TODO: las filas son opcionales
void pedirDatos(int matriz[][columnas]){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingrese los datos de la matriz"<<"["<<i+1<<"]["<<j+1<<"]"<<": ";
            cin>>matriz[i][j];
        }
    }
}    
void mostrarMatris(int matriz[][columnas]){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void cuadrado(int matriz[][columnas]){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] *= matriz[i][j];
        }
    }
}