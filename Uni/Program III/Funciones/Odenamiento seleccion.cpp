#include <iostream>
using namespace std; 
void pedirDatos(int vec[],int& n);
void mostrarSinOrdenar(int vec[],int& n);
void ordenar(int vec[],int& n);
void mostrarAscendente(int vec[],int& n);
void mostrarDescendente(int vec[],int& n);
int main(){
    int numeros[20],min,aux,n=0;
    pedirDatos(numeros,n);
    mostrarSinOrdenar(numeros,n);
    ordenar(numeros,n);
    mostrarAscendente(numeros,n);
    mostrarDescendente(numeros,n);
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
void pedirDatos(int vec[],int& n){
    int numeros[20];
    do
    {
        cout<<"Ingresa cuantos numeros enteros tendra el arreglo: ";cin>>n;
        cout<<"\n";
        for (int i = 0; i < n; i++)
        {
            cout<<"Numero "<<i+1<<": ";cin>>numeros[i];
        }
    } while (n <= 1);
    cout<<"\n";
}
void mostrarSinOrdenar(int vec[],int& n){
    cout<<"Numero sin ordenar:\n"<<endl;
    int numeros[20];
    for (int i = 0; i < n; i++)
    {
        cout<<numeros[i]<<"\n";
    }
}
void ordenar(int vec[],int& n){
    int numeros[20],min,aux;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if(numeros[min]>numeros[j]){
                min=j;
            }
        }
        aux=numeros[i];
        numeros[i]=numeros[min];
        numeros[min]=aux;
    }
}
void mostrarAscendente(int vec[],int& n){
    int numeros[20];
    cout<<"\nNumero ordenados de menor a mayor:\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<numeros[i]<<"\n";
    }
}
void mostrarDescendente(int vec[],int& n){
    int numeros[20];
    cout<<"\nNumero ordenados de mayor a menor:\n"<<endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout<<numeros[i]<<"\n";
    }
}