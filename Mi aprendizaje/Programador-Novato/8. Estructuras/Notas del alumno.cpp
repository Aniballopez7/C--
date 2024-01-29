#include<iostream>
using namespace std; 
struct Materias
{
    char nombre[30];
    float notas;
}materias[3]={{"Programacion",0},{"Estructuras de datos",0},{"Matematicas",0}};
int main()
{
    float suma = 0,promedio;
    regresar:
    cout<<"\nIngrese las notas de las materias\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<materias[i].nombre<<": ";
        cin>>materias[i].notas;
        if ((materias[i].notas < 0)||(materias[i].notas > 10))
        {
            cout<<"\nIngreso una nota invalida..."<<endl;
            goto regresar;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        suma += materias[i].notas;
    }
    promedio = suma/3;
    cout<<"\n";
    if (promedio <= 5.9)
    {
        cout<<"No aprobaste el semestre"<<endl;
    }
    if (promedio >6)
    {
        cout<<"Aprobaste con un promedio de "<<promedio<<endl;
    }
    cout<<"\n"<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}