#include<iostream>
using namespace std; 
const int tam=5;
void pedirDatos(int vec[]);
int sumarDatos(int vec[]);
int main()
{
    int vec[tam],suma = 0;
    pedirDatos(vec);
    suma=sumarDatos(vec);
    cout<<"\nAqui esta tu resultado del la suma del vector: "<<suma<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(int vec[])
{
    cout<<"Ingresa los "<<tam<<" numeros del vector:\n"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Ingresa el numero "<<i+1<<": ";cin>>vec[i];
    }
}
int sumarDatos(int vec[])
{
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }
    return suma;
}