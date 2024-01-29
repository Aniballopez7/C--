#include<iostream>
#include<string.h>
using namespace std;
int n,*num;
char a = 0,e = 0,i = 0,o = 0,u = 0; 
void pedirDatos(char *nombre);
int contar(char *nombre);
int main()
{
    char nombre[30];
    pedirDatos(nombre);
    int cont = contar(nombre);
    cout<<"\nEl nombre tiene "<<cont<<" vocales"<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(char *nombre){
    cout<<"Ingresa un nombre: ";cin>>nombre;
}
int contar(char *nombre){
    int contador = 0;
    strupr(nombre);
    while (*nombre)//*noombre != null
    {
        switch (*nombre)
        {
        case 'A': contador++;break;
        case 'E': contador++;break;
        case 'I': contador++;break;
        case 'O': contador++;break;
        case 'U': contador++;break;
        }
        nombre++;
    }
    return contador;
}