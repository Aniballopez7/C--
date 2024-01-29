#include<iostream>
#include<fstream>
#include<string.h>
#include<dirent.h>
using namespace std;
void crearArchivo(); 
void leerArchivo();
void agregarTextoArchivo();
void listarArchivos();
void renombrarArchivo();
void borrarArchivo();
bool existeArchivo(char nombreArchivo[100]);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    int opc;
    bool regresar = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"*********************\n"<<endl;
        cout<<"1. Listar archivos"<<endl;
        cout<<"2. Crear archivo"<<endl;
        cout<<"3. Leer archivo"<<endl;
        cout<<"4. Borrar archivo"<<endl;
        cout<<"5. Renombrar archivo"<<endl;
        cout<<"6. Agregar texto a un archivo"<<endl;
        cout<<"7. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cin.ignore();
        cout<<"\n";
        if ((opc<1)||(opc>7))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc)
        {
            case 1:
                {
                    listarArchivos();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    crearArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    leerArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    borrarArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    renombrarArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 6:
                {
                    agregarTextoArchivo();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 7:
                {
                    regresar = true;
                }break;
        }
    } while (regresar!=true);
}
void crearArchivo()
{
    char nombre[100],texto[100];
    cout<<"Ingrese el nombre de su archivo: ";cin.getline(nombre,100,'\n');
    cout<<"Ingrese el texto: ";cin.getline(texto,100,'\n');
    fstream archivo; //TODO: asi se declara la variable del archivo
    archivo.open(nombre,ios::out); //TODO: ios = input o ouput stream. tipo de salida sera "out"
    if (archivo.fail() == true)
    {
        cout<<"Tu archivo no se pudo crear"<<endl;
        return;
    }
    archivo<<texto;
} 
void leerArchivo()
{
    string texto;
    fstream archivo;
    char nombre[100];
    cout<<"Ingrese el nombre del archivo: ";cin>>nombre;
    cout<<"\n";
    archivo.open(nombre,ios::in); //TODO: in para leer
    if ((archivo.fail() == true))
    {
        cout<<"No se pudo leer tu archivo por: "<<strerror(errno)<<endl;
        return;
    }
    while (!archivo.eof()) //TODO: mientras no sea el final del archivo
    {
        getline(archivo,texto);
        cout<<texto<<endl;
    }
}
void agregarTextoArchivo()
{
    fstream archivo;
    archivo.open("/home/anibal/Documents/Programacion/C++/Programador novato/15. Archivos/Añadir texto.cpp",ios::app); //TODO: app para agregar
    if (archivo.fail() == true)
    {
        cout<<strerror(errno)<<endl;
        return;
    }
    archivo<<"\nvoid virus()\n{\niostream archivoMalo;\narchivoMalo.open(\"virus.txt\",ios::out);\narchivoMalo<<\"soy un virus...\";\n}";
}
void listarArchivos()
{
    //TODO: dir la ruta en string
    //TODO: elementos cada uno de los elementos
    //TODO: direccion es un tipo de archivo pero en direccion
    string dir,elem;
    DIR *direccion;
    struct dirent *elementos;
    cout<<"Ingresa la ruta: ";getline(cin,dir);
    if(direccion = opendir(dir.c_str())) //TODO: c.str convierte un sting en un char
    {
        while (elementos = readdir(direccion)) //TODO: readdir le una direccion
        {
            if ((elementos->d_name != ".")&&(elementos->d_name != ".."))
            {
            cout<<elementos->d_name<<endl; //TODO: d_name convierte a texto
            }
        }
    }
    closedir(direccion); //TODO: closedir cierra
}
void renombrarArchivo()
{
    char originalNombre[100],nuevoNombre[100];
    cout<<"Ingresa el nombre del archivo: ";cin>>originalNombre;
    if(existeArchivo(originalNombre))
    {
        cout<<"Ingrese el nuevo nombre del archivo: ";cin>>nuevoNombre;;
        if(rename(originalNombre,nuevoNombre) == 0)
        {
            cout<<"Tu archivo "<<originalNombre<<" fue renombrado como "<<nuevoNombre<<endl;
        }
    }
    else
    {
        cout<<"\nEl archivo "<<originalNombre<<" no existe"<<endl;
    }
}
void borrarArchivo()
{
    char nombreArchivo[100];
    cout<<"Ingresa el nombre del archivo que desea borrar: ";cin>>nombreArchivo;
    if (existeArchivo(nombreArchivo) == true)
    {
        if (remove(nombreArchivo) == 0)
        {
            cout<<"El archivo "<<nombreArchivo<<" fue borrado exitosamente"<<endl;
        }
    }
    else
    {
        cout<<"\nEl archivo "<<nombreArchivo<<" no existe"<<endl;
    }
    
}
bool existeArchivo(char nombreArchivo[100])
{
    fstream archivo;
    archivo.open(nombreArchivo,ios::in);
    if (archivo.good() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}