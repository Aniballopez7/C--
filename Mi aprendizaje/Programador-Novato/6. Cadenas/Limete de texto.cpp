/*
Pedir al humano que ingrese un texto de más de 10 letras.
si tiene menos de 10 letras regañamos 😈 al humano.
Si tiene más de 10 letras felicitarlo.
*/
#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
    char texto[10];
    int longitud = 0;
    do
    {
        cout<<"Ingresa un texto con un minimo de 10 letras: ";cin.getline(texto,10,'\n');
        longitud = strlen(texto);
        if(longitud >= 10)
        {
            cout<<"Felicidades humano\n";
        }
        else
        {
            cout<<"Dije que mas de 10 letras, intentalo de nuevo\n";
        }
    } while (longitud >= 10);
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}