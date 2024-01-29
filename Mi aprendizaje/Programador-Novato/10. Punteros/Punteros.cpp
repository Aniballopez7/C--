#include<iostream>
using namespace std; 
int main()
{
    int num = 2;
    int *p; 
    p = &num;
    cout<<"Valor: "<<*p<<endl;
    cout<<"Direccion: "<<p<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}