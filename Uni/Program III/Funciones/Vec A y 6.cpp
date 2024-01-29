/*
Llenar un Vector A de 6 elementos numéricos y determinar la suma de todos sus elementos. 
Realice la búsqueda de un numero e indique la posición donde se encuentra.

Con funciones
*/

#include<iostream>
using namespace std;
void insertarVec(int vecA[6]);
void busqueda(int vecA[6]);
int main()
{
    int vecA[6];
    insertarVec(vecA);
    busqueda(vecA);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarVec(int vecA[6])
{
    int suma=0;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecA[i];
        suma += vecA[i];
    }
    cout<<"\nSuma de todos los elementos del vector: "<<suma<<endl;
}
void busqueda(int vecA[6])
{
    int pos = 0, valor;
    bool encontrar = false;
    cout<<"\nIngrese el valor que desea buscar: ";cin>>valor;
    while ((encontrar == false )&& (pos < 6))
    {
        if (valor == vecA[pos])
        {
            encontrar = true;
            break;
        }
        pos++;
    }
    if (encontrar == true)
    {
        cout<<"\nEl valor "<<valor<<" se encontro en la posicion "<<pos<<" del vector"<<endl;
    }
    else
    {
        cout<<"\nEl valor no se encontro"<<endl;
    }
    
    
}