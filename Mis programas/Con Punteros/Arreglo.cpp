#include<iostream>
using namespace std; 
int main()
{
    int numeros[5],*a;
    cout<<"A continuacion ingrese 5 numeros:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese un numero: ";cin>>numeros[i];
    }
    cout<<"\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"Numeros: "<<numeros[i]<<" Direccion de memoria: "<<a++<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}