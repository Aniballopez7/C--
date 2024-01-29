/*
Programa que pida numero enteros y los vaya sumando.
Si el número introducido esta dentro de 100 y 200 o es 0 cerrar el programa.
*/
#include <iostream>
using namespace std;
int main()
{
    int numero,suma = 0;
    do
    {
        cout<<"Ingresa un numero entero entre el 100 al 200 o 0 cirra el programa: ";cin>>numero;
        suma += numero;
        cout<<"\nAqui esta tu pinche suma: "<<suma<<"\n";
    } while ( ( (numero < 100) || (numero > 200) ) && (numero != 0) );
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}