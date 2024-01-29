#include<iostream>
using namespace std; 
//Definimos de la clase libroCalificaciones
class LibroCalificaciones
{
    public:
        void mostrarMensaje() //Muestra un mensaje de bienvenida para el usuario
        {
            cout<<"Bienvenido al libro de calificaciones!"<<endl;
        }
};
int main()
{
    LibroCalificaciones miLibroCalificaciones; //Creando un objeto
    miLibroCalificaciones.mostrarMensaje();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}