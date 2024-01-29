#include<iostream>
#include<string.h>
#include <typeinfo>
using namespace std; 
template <class Tipo1, class Tipo2>
void Mostrar(Tipo1 dato1,Tipo2 dato2);
int main()
{
    int e = 6;
    float f = 35.453;
    char x = 'x';
    Mostrar(f,x);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
template <class Tipo1, class Tipo2>
void Mostrar(Tipo1 dato1,Tipo2 dato2)
{
    if (string(typeid(dato1).name()) == "c" || string(typeid(dato2).name()) == "c")
    {
        cout<<"La concatenacion es: "<<dato1<<dato2<<"\n";
    }
    else{
        cout<<"La suma es: "<<dato1 + dato2 <<endl;
    }
}