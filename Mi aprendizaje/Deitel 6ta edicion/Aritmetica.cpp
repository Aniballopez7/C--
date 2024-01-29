#include<iostream>
using namespace std; 
int main()
{
    int suma,resta,division,multiplicacion,n1,n2;

    cout<<"Ingrese un numero: ";cin>>n1;
    cout<<"Ingrese un numero: ";cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Division: "<<division<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}