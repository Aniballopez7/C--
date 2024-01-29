#include <iostream>
using namespace std;
int main()
{
    int numero,factorial=1;
    do
    {
        cout<<"Ingresa un numero mayor a 1: ";cin>>numero;
    } while ( numero < 1 );
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
        cout<<i<<"*";
    }
    cout<<"\nFactorial: "<<factorial<<"\n";
    system("pause");
    return 0;
}