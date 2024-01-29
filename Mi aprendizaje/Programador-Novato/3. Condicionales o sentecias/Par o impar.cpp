#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Por favor ingresa un numero entero: ";cin>>numero;
    if(numero % 2 ==0)
    {
        cout<<"\nEl numero "<<numero<<" es par\n";
    }
    else
    {
        cout<<"\nEl numero "<<numero<<" es impar\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}