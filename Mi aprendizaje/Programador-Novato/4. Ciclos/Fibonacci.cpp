/*
Programa que pida un número entero n.
Validar que el número n sea mayor a 1.
Bucle que genere una serie fibonacci de 1 hasta n.
1 1 2 3 5 8 13 21 34...n
*/
#include <iostream>
using namespace std;
int main()
{
    int n,x=0,y=1,z=0;
    do
    {
        cout<<"Digita un numero mayor a 1: ";cin>>n;
    } while (n<1);
    cout<<"1 ";
    for (int i = 1; i <= n; i++)
    {
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}