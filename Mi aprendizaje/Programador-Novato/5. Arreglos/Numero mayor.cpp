#include <iostream>
using namespace std;
int main()
{
    int arreglo[100],tamano,mayor=0;
    do
    {
        cout<<"Ingresa el tamaño del arreglo: ";cin>>tamano;
    } while ( (tamano<1) || (tamano>100) );
    for (int i = 0; i < tamano; i++)
    {
        cout<<"Ingresa el valor del elemento "<<(i+1)<<": ";cin>>arreglo[i];// 1 2 5 4 3
    }
    for (int i = 0; i < tamano; i++)
    {
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }
    cout<<"\nEste es tu numero mayor "<<mayor<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}