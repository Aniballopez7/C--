#include <iostream>
using namespace std;
int main()
{
    int suma=0,cuadrado;
    for (int i = 1; i <= 10; i++)
    {
        cuadrado=i*i;
        suma += cuadrado;
        cout<<"El cuadrado de "<<i<<"="<<cuadrado<<"\n";
    }
    cout<<"\n";
    cout<<"La suma de los cuadrados del 1 al 10 es "<<suma<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}