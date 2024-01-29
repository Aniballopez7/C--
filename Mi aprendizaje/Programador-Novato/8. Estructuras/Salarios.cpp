#include<iostream>
#include<string.h>
using namespace std; 
struct Empleados
{
    char nombre[30];
    float salario;
}empleados[3]={{"Juana"},{"Maria"},{"Kuso"}};
int main()
{
    int n;
    char auxNombre[30];
    float auxSalario;
    cout<<"Ingrese los salarios de los siguientes empleados:\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Salario de "<<empleados[i].nombre<<": ";cin>>empleados[i].salario;
    }
    cout<<"\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (empleados[j].salario>empleados[j+1].salario)
            {
                strcpy(auxNombre,empleados[j].nombre);
                auxSalario=empleados[j].salario;
                //Nombre del empleado y salario que tiene el valor superior
                strcpy(empleados[j].nombre,empleados[j+1].nombre);
                empleados[j].salario=empleados[j+1].salario;
                //Regresar el aux al nombre y salario que gana mas
                strcpy(empleados[j+1].nombre,auxNombre);
                empleados[j+1].salario=auxSalario;
            }
        }
    }
    cout<<"Salarios ordenados:\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"El empleado "<<empleados[i].nombre<<" gana: "<<empleados[i].salario<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}