/*
libreria a usar "fstream" que nos ofrece las clases:
ifstream = imput file stream meter archivos y leerlos.
ostream = ouput escribir archivos.
fstream = files stream se leen y se escriben.
*/
#include<iostream>
#include<fstream>
using namespace std;
void crearArchivo(); 
int main()
{
    crearArchivo();
    system("\nread -p '\nPresiona Enter para continuar...' var");
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