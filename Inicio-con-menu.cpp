//Este inicio viene con el inicio en español de una vez
#include <iostream>
#include <clocale>
#include<stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Spanish");
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
            system("pause");
        }
        //system("clear"); //si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    system("pause");
                }break;
            case 2:
                {
                    system("pause");
                }break;
            case 3:
                {
                    system("pause");
                }break;
            case 4:
                {
                    system("pause");
                }break;
            case 5:
            {
                system("pause");
            }break;
            case 6:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
