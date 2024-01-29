/*Función C++ que concatena dos cadenas de caracteres.*/

#include <iostream>
using namespace std;
void concatena(char *, char *);
int main ()
{
char cadena[100],cadena2[25];
cout << "Escriba una cadena de caracteres ";
cin.getline(cadena,80);
cout << "Escriba otra cadena ";
cin.getline(cadena2,80);
concatena(cadena,cadena2);
cout << cadena << endl;
system("pause");
}

void concatena(char *a, char *b) //añade la segunda cadena al final de la primera
{
while(*a)
{
a++;
//llevamos el puntero hasta el final de la primera cadena
}
while(*b) //mientras no lleguemos al final de la segunda cadena
{
*a=*b; //copiamos el caracter
a++;
//siguiente posición de la primera cadena
b++; //siguiente posición de la segunda cadena
}
*a='\0'; //añadimos el nulo al final
}