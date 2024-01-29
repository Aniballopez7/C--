/*
Definir un string.
Declarar un string con una medida de 10.
Copiar el primer string en el segundo.
*/
#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
    char texto1[] = "programador novato";
    char texto2[10];
    strcpy(texto2,texto1);
    cout<<texto2<<" "<<strlen(texto2)<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}