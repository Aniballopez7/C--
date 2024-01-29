/*
Proyecto:
Realice un programa en C++ que permita elegir al usuario sobre la ejecución de un grupo de 
opciones.
1. Cargar un arreglo de n caracteres y mostrarlos en Mayúsculas (usar función predefinida)
2. Cargar un arreglo de n caracteres y mover a las primeras posiciones de ese mismo vector 
todas las vocales que se cargaron. Mostrar cómo quedó el arreglo.
3. Ingresar un valor numérico entero de 5 cifras e invertirlo(ejm: 12345 a 54321)
4. Salir del programa.

Para entrar al programa el usuario debe ingresar con el siguiente acceso:
Login: prog2
Password: 12345
Solo tendrá tres intentos para entrar, si con los tres no puede accesar, el programa deberá 
cerrarse.
*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include <clocale>
using namespace std; 
int pass;
string user;
char palabras[5],vocales[5];
bool entrar=false;
//Protodipos de funciones
bool login();
void menu();
void mayusculas(char palabra[]);
void invertirNumero();
void extraerVocales(char palabra[],char vocales[]);
//Fin de los prototipos
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    login();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}

bool login()
{
    int cont=0,oportinidad=3;
    do
    {
        cout<<"Tienes "<<oportinidad<<" intentos para ingresar al programa\n"<<endl;
        cout<<"Ingrese el usuario: ";cin>>user;
        cout<<"Ingrese la contraseña: ";cin>>pass;
        if (user == "prog2" && pass == 12345)
        {
            cout<<"\nBienvenido al programa"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
            system("clear");
            menu();
            break;
        }
        else
        {
            cout<<"\nDatos incorrectos"<<endl;
            cont++;
            oportinidad--;
            getch();
            cout<<"\n";
        }
    } while (cont<3);
    return 0;
}
void menu()
{
    int opc;
    bool regresar = false;
    do
    {
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"*********************\n"<<endl;
        cout<<"1. Mostrar un arreglo en mayusculas"<<endl;
        cout<<"2. Mover las vocales del arreglo a otro"<<endl;
        cout<<"3. Invertir valor numero de 5 cifras"<<endl;
        cout<<"4. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>4))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc)
        {
            case 1:
                mayusculas(palabras);
                break;
            case 2:
                extraerVocales(palabras,vocales);
                break;
            case 3:
                invertirNumero();
                break;
            case 4:
                regresar = true;
                break;
        }
    } while (regresar!=true);
}
void mayusculas(char palabra[])
{
    cout<<"Ingrese una palabra: ";cin>>palabra;
    //strupr(palabra);
    cout<<"\n"<<palabra<<endl;
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
    system("clear");
}
void extraerVocales(char palabra[],char vocales[])
{
    int longitud,pos=0,x=0;
    cout<<"Ingrese una palabra: ";cin>>palabra;
    longitud = strlen(palabra);
    for (int i = 0; i < longitud; i++)
    {
        if ((palabra[i]=='a')||(palabra[i]=='e')||(palabra[i]=='i')
        ||(palabra[i]=='o')||(palabra[i]=='u'))
        {
            vocales[i] = palabra[i];
        }
    }
    cout<<"\nLas vocales del palabra "<<palabra<<" son: ";
    for (int i = 0; i < longitud; i++)
    {
        cout<<vocales[i];
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
    system("clear");
}
void invertirNumero()
{
    int numero,intercambio[5],i=0;
    cout<<"Ingrese un numero de 5 digitos: ";cin>>numero;
    while (numero!=0)
    {
        intercambio[i] = numero % 10;
        numero /= 10;
        i++;
    }
    cout<<"\nNumero invertido: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<intercambio[i];
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
    system("clear");
}