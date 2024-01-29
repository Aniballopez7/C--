#include <iostream>
using namespace std; 
int main()
{
    int lista[] = {1,2,3,4,5},valor,con,inf,sup,mitad,tam;
    bool encontrado = false;
    tam = sizeof(lista)/sizeof(*lista);
    con = 0;
    inf = 0;
    sup = tam;
    cout<<"Ingresa un valor de la siguiente lista: ";
    for (int i = 0; i < tam; i++)
    {
        cout<<lista[i]<<" ";
    }
    cout<<"\nIngresa el valor:";cin>>valor;
    while ( (inf <= sup) && (con < tam) )
    {
        mitad = (inf + sup) / 2;
        if(lista[mitad] == valor)
        {
            encontrado = true;
            break;
        }
        if(lista[mitad] > valor)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if(lista[mitad] < valor)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
        con++;
    }
    if( encontrado==false )
    {
        cout<<"Intentalo de nuevo:\n ";
    }
    if(encontrado==true)
    {
        cout<<"El valor fue encontrado en la posicion: "<<mitad+1<<"\n ";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}