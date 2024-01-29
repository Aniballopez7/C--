/*
Programa que pida un número entero n.
Validar que el número n sea mayor a 1.
El programa hará un ciclo que sume los números 1+2+3 hasta n.
*/
#include <iostream>
using namespace std;
int main()
{
    int numero,suma = 0;
    do
    {
        cout<<"Ingresa un numero mayor a 1: ";cin>>numero;
    } while (numero <= 1);
    for (int i = 1; i <= numero; i++)
    {
        suma += i;
        cout<<i<<"+";
    }
    cout<<"\nSuma: "<<suma<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}