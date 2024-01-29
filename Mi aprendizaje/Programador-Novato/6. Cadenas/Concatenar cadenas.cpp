/*
Declarar 3 variables de tipo string.
Pedir al humano que ingrese nombre y apellido y guardarlos en el string 1 y 2.
Colocar los valores del string 1 y 2 en el string 3.
*/
#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
    char nombre[20],apellido[20],nombreApellido[40] = {};
    cout<<"Ingresa tu nombre: ";cin>>nombre;
    cout<<"Ingresa tu apellido: ";cin>>apellido;
    strcat(nombreApellido,nombre);
    strcat(nombreApellido," ");
    strcat(nombreApellido,apellido);
    cout<<"Nombre y apellido: "<<nombreApellido<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
