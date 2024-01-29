#include <iostream>
#include <clocale>
#include<stdlib.h>
using namespace std;
void  menu()
{
    int opc;
    bool salir = false;
    char r;
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t***********************"<<endl;
        cout<<"\t\t\t\t\t*        MENU         *"<<endl;
        cout<<"\t\t\t\t\t***********************\n"<<endl;
        cout<<" 1. \n"<<endl;
        cout<<" 2. \n"<<endl;
        cout<<" 3. \n"<<endl;
        cout<<" 4. \n"<<endl;
        cout<<" 5. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin>>opc;
        system("cls");
        if ((opc<1)||(opc>5))
        {
            system("COLOR 4");
            cout<<"\n\n\n\t\t\t\t\t********************"<<endl;
            cout<<"\t\t\t\t\t* OPCION INVALIDA. *"<<endl;
            cout<<"\t\t\t\t\t********************\n\b"<<endl;
        }
        switch (opc)
        {
            case 1: 
                {
                    do
                    {
                        //codigo
                        if ((r == 's') || (r == 'S'));
                        {
                            cout<<"\nDesea ingresar otro dato a la pila (s/n): ";cin>>r;
                        }
                    } while ((r == 'S') || (r == 's'));
                    cout<<endl;
                }break;
            case 2:
                {
                    cout<<"\nLos datos de la pila de datos son:\n"<<endl;
                }break;
            case 3:
                {
                    
                }break;
            case 4:
                {
                    
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
        system("pause");
    }while(salir != true)
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
}
