#include<iostream>
using namespace std; 
struct Empleados
{
    char nombre[30];
    int edad;
    float salario;
}empleados[3],*emple = empleados;
void pedirDatos();
void mayor();
int main()
{
    pedirDatos();
    mayor();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
//TODO: las estructuras a los arreglos no se les coloca el asterico
void pedirDatos(){
    cout<<"Ingresa la informacion de 3 empleados:\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Nombre "<<i+1<<": ";cin>>(emple+i)->nombre;
        cout<<"Edad "<<i+1<<": ";cin>>(emple+i)->edad;
        cout<<"Salario "<<i+1<<": ";cin>>(emple+i)->salario;
    }
}
void mayor(){
    int mayor = 0, pos = 0;
    for (int i = 0; i < 3; i++)
    {
        if (((emple+i)->edad)>mayor)
        {
            mayor = (emple+i)->edad;
            pos = i;
        }
    }
    cout<<"El empleado de mayor edad es:\n"<<endl;
    cout<<"Nombre: "<<(emple+pos)->nombre<<endl;
    cout<<"Edad: "<<(emple+pos)->edad<<endl;
    cout<<"Salario: "<<(emple+pos)->salario<<endl;
}