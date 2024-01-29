#include<iostream>
#include<cmath>
using namespace std; 
int a,b;
void pedirDatos();
int retornarExpo(int a,int b);
void mostrarExpo(int a,int b);
//TODO: pedir datos
void pedirDatos()
{
    regresar:
    cout<<"Ingrese un numero: ";cin>>a;
    cout<<"Ingrese el exponente: ";cin>>b;
    if (a < 0)
    {
        cout<<"El numero no es positivo"<<endl;
        cout<<"\n";
        goto regresar;
    }
    if (b < 0)
    {
        cout<<"El numero no es positivo"<<endl;
        cout<<"\n";
        goto regresar;
    }
}
//TODO: retornar
int retornarExpo(int a,int b)
{
    long resultado = 1;
    for (int i = 1; i <= b; i++)
    {
        resultado *= a;
    }
    return resultado;
}
//TODO: mostrar
void mostrarExpo(int a, int b)
{
    long resultado = retornarExpo(a,b);
    cout<<"Resultado: "<<resultado<<endl;
}
//TODO: Funcion principal main
int main()
{
    int resultado;
    pedirDatos();
    resultado = retornarExpo(a,b);
    cout<<"El resultado de la elevacion es: "<<resultado<<endl;
    mostrarExpo(a,b);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}