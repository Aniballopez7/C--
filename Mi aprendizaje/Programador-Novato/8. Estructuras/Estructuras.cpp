/*
Crea un programa:
Que almacene Nombre, dirección y teléfono de 3 empleados.
Pedir al humano que ingrese Nombre y dirección de 2 clientes.
*/
#include <iostream>
using namespace std;
struct Empleados
{
    char nombre[65];
    char direccion[65];
    char telefono[15];
}
e1={"juan","argentina","646532154"},
e2={"maria","mexico","987654654987"},
e3={"pepe","chile","6546546654"};
struct Clientes
{
    char nombre[65];
    char direccion[65];
}c1,c2;
int main()
{
    cout<<"EMPLEADO\n";
    cout<<"Nombre e1: "<<e1.nombre<<" Direccion: "<<e1.direccion<<" Telefono: "<<e1.telefono<<"\n";
    cout<<"Nombre e1: "<<e2.nombre<<" Direccion: "<<e2.direccion<<" Telefono: "<<e2.telefono<<"\n";
    cout<<"Nombre e1: "<<e3.nombre<<" Direccion: "<<e3.direccion<<" Telefono: "<<e3.telefono<<"\n";
    cout<<"\n\nCLIENTES\n";
    cout<<"Nombre c1: ";cin>>c1.nombre;
    cout<<"Direccion c1: ";cin>>c1.direccion;
    cout<<"Nombre c2: ";cin>>c2.nombre;
    cout<<"Direccion c2: ";cin>>c2.direccion;
    cout<<"\nNombre c1: "<<c1.nombre;
    cout<<" Direccion c1: "<<c1.direccion;
    cout<<"\nNombre c2: "<<c2.nombre;
    cout<<" Direccion c2: "<<c2.direccion<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}