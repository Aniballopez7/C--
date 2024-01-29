#include<iostream>
#include<string.h>
using namespace std; 
struct Alumnos
{
    char nombre[20];
    float promedio;
}alumnos[3];
int main()
{
    int n,i=0;
    char auxNombre[20];
    bool iguales = false,diferentes = false,ordenado= false;
    cout<<"ingrese la cantidad de alumnos: ";cin>>n;
    float auxNota;
    cout<<"\nDatos del alumno\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nombre: ";cin>>alumnos[i].nombre;
        cout<<"Promedio: ";cin>>alumnos[i].promedio;
        cout<<"\n";
    }
    for (int i = 0; i < n && iguales == false; i++)
    {
        iguales = false;
        if (alumnos[i].promedio==alumnos[i+1].promedio)
        {
            iguales = true;
        }
        else
        {
            diferentes = true;
            for (int i = 0; i < n && ordenado == false; i++)
            {
                ordenado = true;
                for (int j = 0; j < n-1 ; j++)
                {
                    if (alumnos[j].promedio>alumnos[j+1].promedio)
                    {
                        ordenado = false;
                        strcpy(auxNombre,alumnos[j].nombre);
                        auxNota = alumnos[j].promedio;
                        strcpy(alumnos[j].nombre,alumnos[j+1].nombre);
                        alumnos[j].promedio = alumnos[j+1].promedio;
                        strcpy(alumnos[j+1].nombre,auxNombre);
                        alumnos[j+1].promedio = auxNota;
                    }
                }
            }
            cout<<"Promedios Ordenados\n"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<alumnos[i].nombre<<": "<<alumnos[i].promedio<<endl;
            }
        }
    }
    if ((iguales==true)&&(diferentes==false))
    {
        cout<<"\nTodos tienen el mismo promedio"<<endl;
    }
    else
    {
        cout<<"El mejor promedio es de "<<auxNota<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}