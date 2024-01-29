#include<iostream>
#include<fstream>
#include<clocale>
#include<string.h>
using namespace std; 
class Archivos
{
    public:
        ofstream archivo;
        void crearArchivo()
        {
            char nombre[100];
            cout<<"Ingrese el nombre del archivo: ";cin>>nombre;
            archivo.open(nombre,ios::out); //out crear o abrir archivo
            if (archivo.fail())
            {
                cout<<"\nError al crear archivo"<<endl;
            }
            else
            {
                cout<<"\nSe a creado el archivo correctamente"<<endl;
                archivo.close();
            }   
        }
        void agregar(char nombre[])
        {
            string cadena;
            archivo.open(nombre,ios::app); //app es abrir el archivo
            if (archivo.fail())
            {
                cout<<"\nNo se a encontrado ningun archivo"<<endl;
            }
            else
            {
                cout<<"\nIngresa una frase: ";cin>>cadena;
                cout<<"Texto añadido"<<endl;
                archivo<<cadena<<endl;
                archivo.close();
            }
            cout<<"\n";
        }
};
void menu();
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    Archivos a1;
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
        cout<<"1. Crear un archivo"<<endl;
        cout<<"2. Agregar texto al archivo"<<endl;
        cout<<"3. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        if ((opc < 1)||(opc > 6))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        system("clear");
        switch (opc)
        {
            case 1:
                {
                    a1.crearArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    char nombre[100];
                    cout<<"Nombre del archivo desea agregarle texto: ";cin>>nombre;
                    a1.agregar(nombre);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}