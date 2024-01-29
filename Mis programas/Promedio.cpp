#include<iostream>
#include<conio.h>
using namespace std; 
struct Promedio
{
    float promedio,corte1,corte2,corte3,corteF;
}alumnos[3];

int main()
{
    int n;
    float mayor=0;
    bool iguales=false,diferente=false;
    cout<<"Ingresa la cantidad de alumnos: ";cin>>n;
    cout<<"\nColoque las notas en base a 20\n"<<endl;
    //TODO: pedir datos
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout<<"\nAlumno "<<i+1<<"\n"<<endl;
            cout<<"Primer corte: ";cin>>alumnos[i].corte1;
            cout<<"Segundo corte: ";cin>>alumnos[i].corte2;
            cout<<"Tercer corte: ";cin>>alumnos[i].corte3;
            if ((alumnos[i].corte1<0||alumnos[i].corte1>20)||
            (alumnos[i].corte2<0||alumnos[i].corte2>20)||
            (alumnos[i].corte3<0||alumnos[i].corte3>20))
            {
                cout<<"\nColoco un valor invalido"<<endl;
                getch();
                system("clear");
            }
        } while ((alumnos[i].corte1<0||alumnos[i].corte1>20)||
        (alumnos[i].corte2<0||alumnos[i].corte2>20)||
        (alumnos[i].corte3<0||alumnos[i].corte3>20));
        alumnos[i].corteF = alumnos[i].corte1 + alumnos[i].corte2 + alumnos[i].corte3;
        alumnos[i].promedio = alumnos[i].corteF / 3;
        //TODO: mayor promedio
        if ( alumnos[i].promedio>mayor)
        {
            mayor =  alumnos[i].promedio;
        }
    }
    //TODO: viendo si son iguales los promedios
    for (int i = 0; i < n && iguales == false; i++)
    {
        iguales = true;
        for (int j = 0; j < n-1; j++)
        {
            if ( alumnos[j].promedio==alumnos[j+1].promedio)
            {
                iguales = true;
            }
            else
            {
                diferente = true;
            }
        }
    }
    if ((iguales==true)&&(diferente==false))
    {
        cout<<"\nPromedios\n"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Alumno "<<i+1<<": "<<alumnos[i].promedio<<endl;
        }
        cout<<"\nTodos los promedios son iguales"<<endl;
        cout<<"\n";
    }
    else
    {
        cout<<"\nPromedios\n"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<"Alumno "<<i+1<<": "<<alumnos[i].promedio<<endl;
        }
        cout<<"\nEl promedio mas alto es de "<<mayor<<endl;
        cout<<"\n";
    }
    getch();
}