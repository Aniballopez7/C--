#include <iostream>
using namespace std;
int main()
{
    int numero;
    do
    {
        cout<<"Ingresa un numero entre 1 y 5 o 6 para terminar: ";cin>>numero;
        cout<<"\n";
        switch (numero)
        {
        case 1:
            cout<<"Presionaste el numero uno\n";
            break;
        case 2:
            cout<<"Presionaste el numero dos\n";
            break;
        case 3:
            cout<<"Presionaste el numero tres\n";
            break;
        case 4:
            cout<<"Presionaste el numero cuatro\n";
            break;
        case 5:
            cout<<"Presionaste el numero cinco\n";
            break;
        case 6:
            cout<<"Te voy a extrañar\n";
            system("\nread -p '\nPresiona Enter para continuar...' var");
            return 0;
            break;   
        }      
    }while (numero != 6);   
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
