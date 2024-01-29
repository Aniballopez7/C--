#include <iostream>
using namespace std; 
int main()
{
    int numeros[5],aux,pos = 0;
    cout<<"Ingresa los siguientes datos:\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros[i];
        while ((pos > 0) && (numeros[pos-1] > aux))
        {
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
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