#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    cout<<"Hola mundo"<<endl;
    system("\nread -p '\nPresiona Enter para salir del programa' var");
}

