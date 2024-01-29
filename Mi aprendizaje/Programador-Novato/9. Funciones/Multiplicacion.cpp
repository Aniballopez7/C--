#include<iostream>
using namespace std; 
int dato1,dato2;
void pideDatos();
int retornaMul(int a, int b);
void muestraMul(int a, int b);
int main()
{
    int resultado;
    pideDatos();
    resultado = retornaMul(dato1,dato2);
    cout<<"Resultado: "<<resultado<<endl;
    muestraMul(dato1,dato2);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pideDatos()
{
    regresar:
    cout<<"Ingrese 2 numeros enteros positivos:\n"<<endl;
    cout<<"Ingrese un numero: ";cin>>dato1;
    cout<<"Ingrese un numero: ";cin>>dato2;
    if(dato1 < 0)
    {
        cout<<"Un numero positivo"<<endl;
        goto regresar;
    }
    if(dato2 < 0)
    {
        cout<<"Un numero positivo"<<endl;
        goto regresar;
    }
}
//Retornar 
int retornaMul(int a,int b)
{
    /*int resultado;
    resultado = a*b;
    return resultado;
    */
    return a*b;
}
//Desde la funcion muestraMul
void muestraMul(int a,int b)
{
    int resultado;
    resultado = a*b;
    cout<<"Resultado de la multiplicacion: "<<resultado<<endl;
}