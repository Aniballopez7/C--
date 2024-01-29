#include <iostream>
using namespace std;
int main()
{
    int numero[30],n;
    do
    {
        cout<<"Ingresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 30)";cin>>n;
    } while ( (n < 1) || (n > 30) );
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingresa el valor del elemento "<<(i+1)<<" : ";cin>>numero[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<(i+1)<<" = "<<numero[i]<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
