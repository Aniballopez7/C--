#include<iostream>
using namespace std; 
struct Materias
{
    char nombre[30];
    float notas;
}materias[13];
int main()
{
    int n;
    float suma=0,promedio=0;
    cout<<"Ingresa cuantas materias vas a ingresar: ";cin>>n;
    cout<<"\nIngrese las materias:\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre de la materia: ";cin>>materias[i].nombre;
    }
    cout<<"\nIngrese las notas de las materias\n"<<endl;
    regresar:
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese la nota de "<<materias[i].nombre<<": ";cin>>materias[i].notas;
        if ((materias[i].notas<0)||(materias[i].notas>10))
        {
            cout<<"\nIngreso una nota invalida..."<<endl;
            goto regresar;
        }
    }
    for (int i = 0; i < n; i++)
    {
        suma += materias[i].notas;
    }
    promedio = suma/n;
    cout<<"\n";
    if (promedio <= 5.9)
    {
        cout<<"No aprobaste el semestre"<<promedio<<endl;
    }
    if (promedio > 6)
    {
        cout<<"Aprobaste con un promedio de "<<promedio<<endl;
    }
    cout<<"";
    //system("pause"); si usas windows le quitas las barras
    //system("\nread -p '\nPresiona Enter para continuar...' var"); si usas linux le quitas las barras
}
