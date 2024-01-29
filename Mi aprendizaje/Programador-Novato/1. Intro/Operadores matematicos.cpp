#include <iostream>
using namespace std;
int main()
{
    float n1,n2,suma,resta,mul,div;
    cout<<"Escribe un numero: ";cin>>n1;
    cout<<"Escribe otro numero: ";cin>>n2;
    suma = n1 + n2;
    resta = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
    cout<<"Resultado de la suma = "<<suma<<"\n";
    cout<<"Resultado de la resta = "<<resta<<"\n";
    cout<<"Resultado de la multiplicacion = "<<mul<<"\n";
    cout<<"Resultado de la divicion = "<<div<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;

}