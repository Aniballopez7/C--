#include<iostream>
using namespace std; 
struct Direccion
{
    char pais[15],estado[15],municipio[15];
    int calle;
};
struct Empleados
{
    char nombre[30];
    char id[5];
    struct Direccion dirEmpleados;
}e1,e2;
struct Clientes
{
    char nombre[30];
    char telefono[12];
    struct Direccion dirClientes;
}c1,c2;
int main()
{
    cout<<"*************"<<endl;
    cout<<"* Empleados *"<<endl;
    cout<<"*************\n"<<endl;
    cout<<"Ingrese el nombre: ";cin>>e1.nombre;
    cout<<"Ingrese el id: ";cin>>e1.id;
    cout<<"Ingrese el pais: ";cin>>e1.dirEmpleados.pais;
    cout<<"Ingrese el estado: ";cin>>e1.dirEmpleados.estado;
    cout<<"Ingrese el minicipio: ";cin>>e1.dirEmpleados.municipio;
    cout<<"Ingrese la calle:  ";cin>>e1.dirEmpleados.calle;
    cout<<"\n";
    cout<<"Ingrese el nombre: ";cin>>e2.nombre;
    cout<<"Ingrese el id: ";cin>>e2.id;
    cout<<"Ingrese el pais: ";cin>>e2.dirEmpleados.pais;
    cout<<"Ingrese el estado: ";cin>>e2.dirEmpleados.estado;
    cout<<"Ingrese el minicipio: ";cin>>e2.dirEmpleados.municipio;
    cout<<"Ingrese la calle:  ";cin>>e2.dirEmpleados.calle;
    cout<<"\n\n";
    cout<<"************"<<endl;
    cout<<"* Clientes *"<<endl;
    cout<<"************\n"<<endl;
    cout<<"Ingrese el nombre: ";cin>>c1.nombre;
    cout<<"Ingrese el telefono: ";cin>>c1.nombre;
    cout<<"Ingrese el estado: ";cin>>c1.dirClientes.estado;
    cout<<"Ingrese el minicipio: ";cin>>c1.dirClientes.municipio;
    cout<<"Ingrese la calle:  ";cin>>c1.dirClientes.calle;
    cout<<"\n";
    cout<<"Ingrese el nombre: ";cin>>c2.nombre;
    cout<<"Ingrese el telefono: ";cin>>c2.nombre;
    cout<<"Ingrese el estado: ";cin>>c2.dirClientes.estado;
    cout<<"Ingrese el minicipio: ";cin>>c2.dirClientes.municipio;
    cout<<"Ingrese la calle:  ";cin>>c2.dirClientes.calle;
    cout<<"\n";
    cout<<"Empleados\n"<<endl;
    cout<<e1.nombre<<"\n"<<e1.id<<"\n"<<e1.dirEmpleados.pais<<e1.dirEmpleados.estado<<endl;
    cout<<e2.nombre<<"\n"<<e2.id<<"\n"<<e2.dirEmpleados.pais<<e2.dirEmpleados.estado<<endl;
    cout<<c1.nombre<<"\n"<<c1.telefono<<endl;
    cout<<c2.nombre<<"\n"<<c2.telefono<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}