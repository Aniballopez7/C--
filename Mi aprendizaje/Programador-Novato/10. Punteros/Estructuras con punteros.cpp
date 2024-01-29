#include<iostream>
using namespace std; 
struct Empleados
{
    char nombre[30];
    int edad;
}e1,*emple = &e1;
void pedirDatos();
void mostrar();
int main()
{
    pedirDatos();
    mostrar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(){
    cout<<"ingresa los datos del empleado\n"<<endl;
    cout<<"Ingresa el nombre: ";cin>>emple->nombre;
    cout<<"Ingresa la edad: ";cin>>emple->edad;
}
void mostrar(){
    cout<<"Datos del empleado\n"<<endl;
    cout<<"Nombre: "<<emple->nombre<<endl;
    cout<<"Edad: "<<emple->edad<<endl;;
}