/*
Realice un programa guiado por menús, que contenga una clase para almacenar 
información sobre una lista de países con sus correspondientes capitales 
y numero de habitantes, permita que el programa realice las siguientes
operaciones: 
a) Determinar la capital de un país especificado. 
b) Determinar el país cuya capital se especifica 
c) el pais con mayor numero de habitantes d) Finalizar el programa. *
*/
#include <iostream>
#include <clocale>
using namespace std;

void menu();
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
void menu()
{
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. "<<endl;
        cout<<"2. "<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. "<<endl;
        cout<<"6. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 6))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        //system("clear"); //si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}
