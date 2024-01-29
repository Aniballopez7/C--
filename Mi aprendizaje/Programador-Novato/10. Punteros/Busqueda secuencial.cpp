#include<iostream>
#include<stdlib.h>
using namespace std;
int n,*numeros,numeroBuscar;
void pedirDatos(); 
void pedirNumero();
void busqueda();
int main()
{
    pedirDatos(); 
    pedirNumero();
    busqueda();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(){
    cout<<"Cuantos numeros va a tener tu arreglo: ";cin>>n;
    numeros = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Numeros "<<i+1<<": ";cin>>*(numeros+i);
    }
}
void pedirNumero(){
    cout<<"\nIngrese el numero que desea buscar: ";cin>>numeroBuscar;
}
void busqueda(){
    bool encontrado = false;
    int cont=0;
    while (cont < n && encontrado == false)
    {
        if (*(numeros+cont)==numeroBuscar)
        {
            encontrado = true;
        }
        cont++;
    }
    if (encontrado == true)
    {
        cout<<"\nEL numero "<<numeroBuscar<<" fue encontrado en el arreglo"<<endl;
    }
    else{
        cout<<"\nEL numero "<<numeroBuscar<<" no fue encontrado en el arreglo"<<endl;
    }
    
}