#include <iostream>
using namespace std; 
int main()
{
    char programador[] = "programador";
    char nombre[5];
    cout<<programador<<"\n"<<sizeof(programador)<<"\n";
    cout<<"Ingresa tu nombre: ";cin.getline(nombre,sizeof(nombre),'\n');
    cout<<nombre<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}