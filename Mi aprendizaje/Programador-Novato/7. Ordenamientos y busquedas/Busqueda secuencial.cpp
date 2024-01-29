#include <iostream>
using namespace std; 
int main()
{
    int lista[]={1,2,3,4,5},valor,pos = 0;
    bool encontrado = false;
    cout<<"Ingresar un numero de la siguiente lista:\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<lista[i]<<" ";
    }
    cout<<"\nIngresa un numero ";cin>>valor;
    while ((encontrado == false) && (pos < 5))
    {
        if(valor == lista[pos]){
            encontrado = true;
            break;
        }
        pos++;
    }
    if(encontrado == false)
    {
        cout<<"\nEl numero ingresaste no esta en la lista intenta de nuevo: \n";
        pos = 0;
    }
    else
    {
        cout<<"\nBien hecho \n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}