#include <iostream>
using namespace std;
int main()
{
    int a,b,aux;
    cout<<"Vas a escribir lo que se te pida:\n";
    cout<<"Valor de a: ";cin>>a;//10
    cout<<"Valor de b: ";cin>>b;//5
    aux=a;//aux=10
    a=b;//a=5
    b=aux;//b=10
    cout<<"\nAqui estan valores intercambiados:\n";
    cout<<"Valor de a: "<<a<<"\n";
    cout<<"Valor de b: "<<b<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}