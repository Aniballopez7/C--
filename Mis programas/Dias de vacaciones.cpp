#include<iostream>
#include<ctime>
#include <clocale>
using namespace std;
struct Empleados
{
    char nombre[50];
    int aIngresos,aTrabajado,diasV;
}empleados[100];

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    time_t t=time(NULL);
    tm *timePtr=localtime(&t);
    int aActual=timePtr->tm_year+1900,n;
    cout<<"Ingresa la cantidad de empleados: ";cin>>n;
    cout<<"\nIngresa los años de ingreso de cada empleado\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre del empleado: ";cin>>empleados[i].nombre;
    }
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Año de ingreso del "<<empleados[i].nombre<<": ";
        cin>>empleados[i].aIngresos;
        empleados[i].aTrabajado = aActual - empleados[i].aIngresos;
        switch (empleados[i].aTrabajado)
        {
        case 0 ... 3: empleados[i].diasV = 5;break;
        case 4 ... 10: empleados[i].diasV = 10;break;
        case 11 ... 100: empleados[i].diasV = 15;break;
        }
    }
    cout<<"\nDias de vacaciones por empleados\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Al empleado "<<empleados[i].nombre<<" le correspondes "<<empleados[i].diasV
        <<" dias de vacaciones"<<" por sus "<<empleados[i].aTrabajado<<" años tranajados"<<endl;
    }
    //system("pause"); //si usas windows le quitas las barras
    //system("\nread -p '\nPresiona Enter para continuar...' var"); //si usas linux le quitas las barras
    system("\nread -p '\nPresiona Enter para continuar...' var");
}