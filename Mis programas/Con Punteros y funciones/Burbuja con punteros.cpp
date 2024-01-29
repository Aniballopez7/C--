#include<iostream>
#include<stdlib.h>
using namespace std;
int cantidad,*numeros;
void pedirDatos();
void ordenar(); 
void mostrar();
void mostrarMenor();
int main()
{
    pedirDatos();
    cout<<"\nDatos ordenados de menor a mayor\n"<<endl;
    ordenar(); 
    mostrar();
    cout<<"\nDatos ordenados de mayor a menor\n"<<endl;
    mostrarMenor();
    delete[] numeros;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(){
    do{
        cout<<"Ingrese el tamaño de su arreglo: ";cin>>cantidad;
        if(cantidad<=1){
            cout<<"EL arreglo no puede ser de este tamaño\n"<<endl;
        }
    }while(cantidad<=1);
    numeros = new int[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"Numero "<<i+1<<": ";cin>>*(numeros+i);
    }
}
void ordenar(){
    int aux;
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < cantidad-1; j++)
        {
            if (*(numeros+j)>*(numeros+j+1))
            {
                aux = *(numeros+j);
                *(numeros+j) = *(numeros+j+1);
                *(numeros+j+1) = aux;
            }
        }
    }
}
void mostrar(){
    for (int i = 0; i < cantidad; i++)
    {
        cout<<"Numero "<<i+1<<": "<<*(numeros+i)<<endl;
    }
}
void mostrarMenor(){
    for (int i = cantidad-1; i >= 0; i--)
    {
        cout<<"Numero "<<i+1<<": "<<*(numeros+i)<<endl;
    }
    
}