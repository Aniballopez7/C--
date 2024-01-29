/*
Llenar un Vector A de 6 elementos numéricos y determinar la suma de todos sus elementos. 
Realice la búsqueda de un numero e indique la posición donde se encuentra.
*/

#include<iostream>
using namespace std; 
int main()
{
    int vecA[6], suma = 0, valor, pos = 0;
    bool encontrar = false;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecA[i];
        suma += vecA[i];
    }
    cout<<"\nIngrese el elemento que desea buscar: ";cin>>valor;
    cout<<"\n";
    while (encontrar == false && pos < 6)
    {
        if (valor == vecA[pos])
        {
            encontrar = true;
            break;
        }
        pos++;
    }
    if (encontrar==true)
    {
        cout<<"El valor fue encontrado "<<" en la posicion: "<<pos<<endl;
    }
    else
    {
        cout<<"El valor no fue encontrado"<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}