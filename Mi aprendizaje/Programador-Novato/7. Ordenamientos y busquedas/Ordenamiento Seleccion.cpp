#include <iostream>
using namespace std; 
int main()
{
    int numeros[5],min,aux;
    cout<<"Ingresa 5 numeros enteros:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<" ";cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j = i+1; j < 5; j++)
        {
            if(numeros[min] > numeros[j]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }
    cout<<"Numero ordenados de forma acendente:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<"\n";
    }
    cout<<"Numero ordenados de forma decendente:\n";
    for (int i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}