#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Escribe dos numero:\n"<<endl;
    cout<<"Numero 1: ";cin>>n1;
    cout<<"Numero 2: ";cin>>n2;
    if(n1 == n2)
    {
        cout<<"los dos numero son iguales\n";
    }
    else if(n1 > n2)
    {
        cout<<"el numero 1 es mayor\n";
    }
    else
    {
        cout<<"el numero 2 es mayor\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}