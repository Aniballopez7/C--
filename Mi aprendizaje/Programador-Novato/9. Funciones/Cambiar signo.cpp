#include<iostream>
using namespace std; 
const int tam = 5;
void pedirDatos(int vec[]);
void cambioSigno(int vec[]);
void mostrarVec(int vec[]);
int main()
{
    int vec[tam];
    pedirDatos(vec);
    cout<<"\nVector Original\n"<<endl;
    mostrarVec(vec);
    cambioSigno(vec);
    cout<<"\nVector con el signo intercambiado:\n"<<endl;
    mostrarVec(vec);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(int vec[])
{
    cout<<"Ingresa los siguientes datos para el vector:\n"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Numero "<<i+1<<": ";cin>>vec[i];
    }
}
void cambioSigno(int vec[])
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
}
void mostrarVec(int vec[])
{
    for (int i = 0; i < tam; i++)
    {
        cout<<vec[i]<<endl;
    }
}