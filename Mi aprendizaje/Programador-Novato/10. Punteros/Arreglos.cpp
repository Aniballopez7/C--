#include<iostream>
using namespace std; 
int main()
{
    int numeros[]={1,2,3,4,5},*a;
    a = numeros;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Numeros: "<<numeros[i]<<" Direccion de memoria: "<<a++<<endl;
        cout<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}