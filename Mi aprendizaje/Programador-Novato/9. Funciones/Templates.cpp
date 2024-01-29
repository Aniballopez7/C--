#include<iostream>
using namespace std; 
template <class elTipo>
void mostrarNumero(elTipo numero);
int main()
{
    int entero = 5;
    float flotante = 5.444;
    double doble = 67.93289798;
    mostrarNumero(entero);
    mostrarNumero(doble);
    mostrarNumero(flotante);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
template <class elTipo>
void mostrarNumero(elTipo numero)
{
    cout<<"Mostrar el numero: "<<numero<<"\n";
}