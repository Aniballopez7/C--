#include<iostream>
using namespace std;
struct Empleados
{
    char id[6];
    char nombre[30];
}empleados[2];
int main()
{
    bool esNumero=true;
    cout<<"Ingresa los datos del empleado\n"<<endl;
    for (int i = 0; i < 2; i++)
    {
        esNumero == true;
        cout<<"Empleado "<<i+1<<" id: ";cin>>empleados[i].id;
        for (int j = 0; j < 6; j++)
        {
            if (int(empleados[i].id[j] <= 47)||int(empleados[i].id[j] >= 57))
            {
                esNumero == false;
                cout<<"El id que ingreso del "<<empleados[i].id<<" no es valido"<<endl;
            }
        } 
        cout<<"Empleado "<<i+1<<" nombre: ";cin>>empleados[i].nombre;
    }
    cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleados[i].nombre<<"\n";
        cout<<"Id: "<<empleados[i].id<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}