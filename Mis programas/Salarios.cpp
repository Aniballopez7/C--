#include<iostream>
#include<string.h>
using namespace std; 
struct Empleados
{
    char nombre[30];
    float salario;
}empleados[3];
int main()
{
    int n;
    char auxNombre[30];
    float auxSalario;
    bool iguales = true, a = true;
    cout<<"Ingrese cuantos empleados son: ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre de lo empleados: ";cin>>empleados[i].nombre;
    }
    cout<<"Ingrese los salarios de los siguientes empleados:\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Salario de "<<empleados[i].nombre<<": ";cin>>empleados[i].salario;
    }
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
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
    for (int i = 0; i < n; i++)
    {
        cout<<"El empleado "<<empleados[i].nombre<<" gana: "<<empleados[i].salario<<endl;
    }
    for (int i = 0; i < n && iguales == true; i++)
    {
        iguales = false;
        for (int j = 0; j < n-1 ; j++)
        {
            if (empleados[j].salario==empleados[j+1].salario)
            {
                iguales = true;
            }
            else
            {
                a = false;
            }
        }
    }
    if ((iguales==true)&&(a==true))
    {
        cout<<"\nLos "<<n<<" empleados tienen el mismo sueldo"<<endl;
    }
    //Si usas windows o linux solo borra o agrega //
    //system("pause"); si usas windows le quitas las barras y borras la linea de abajo
    system("\nread -p '\nPresiona Enter para continuar...' var"); //si usas linux deja esta linea y borra la linea de arriba
}