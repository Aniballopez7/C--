#include<iostream>
using namespace std; 
int main()
{
    int nelementos, numeros[nelementos], *arreglo;
    int menor = 999999, mayor = -999999;
    do
    {
        cout<<"Cuantos elementos va a ingresar: ";cin>>nelementos;
        if (nelementos < 1)
        {
            cout<<"Debe ser mayor a 1"<<endl;
        }
    } while (nelementos<1);
    for (int i = 0; i < nelementos; i++)
    {
        cout<<"Ingresa un numero "<<i+1<<": ";cin>>numeros[i];
    }
    arreglo = numeros;
    cout<<"\n";
    for (int i = 0; i < nelementos; i++)
    {
        if (*arreglo < menor)
        {
            menor = *arreglo;
        }
        if (*arreglo > mayor)
        {
            mayor = *arreglo;
        }
        arreglo++;
    }
    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}