#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int numero,aleatorio,contador = 0;
    srand(time(NULL));
    aleatorio = 1 + rand() % 100;
    do
    {
        cout<<"Ingresa un numero entre 1 y 100 ("<<aleatorio<<"): ";cin>>numero;
        if(numero < aleatorio)
        {
            cout<<"El numero que ingresaste es menor\n";
        }
        if(numero > aleatorio)
        {
            cout<<"El numero que ingresaste es mayor\n";
        }
        contador++;
    } while (numero != aleatorio);
    cout<<"Feliciades lograste encontrar el numero despues de "<<contador<<" intentos\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
