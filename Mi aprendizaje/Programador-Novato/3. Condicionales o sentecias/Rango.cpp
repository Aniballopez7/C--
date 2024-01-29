#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout<<"Escribe la edad del candidato: ";cin>>edad;
    if((edad >= 18) &&  (edad <= 40))
    {
        cout<<"\nEl humano es apto para trabajar en la empres\n";
    }
    else
    {
        cout<<"\nEl humano no es apto para trabajar en la empresa\n";
    }
    system("pause");
    return 0;
}