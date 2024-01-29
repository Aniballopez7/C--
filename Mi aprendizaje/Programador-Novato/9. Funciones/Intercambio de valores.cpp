#include<iostream>
using namespace std; 
void intercambio(int&,int&);
int main()
{
    int n1,n2;
    cout<<"Ingresa 2 numeros:\n";
    cout<<"Ingrese un numero 1: ";cin>>n1;
    cout<<"Ingrese un numero 2: ";cin>>n2;
    intercambio(n1,n2);
    cout<<"\nNumeros intercambiados:\n"<<endl;
    cout<<"Numero 1: "<<n1<<endl;
    cout<<"Numero 2: "<<n2<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void intercambio(int& n1,int& n2)
{
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}