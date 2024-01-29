#include<iostream>
#include<string>
using namespace std; 
class LibroCalificaciones
{
    public:
        void mostrarMensaje(string _nombreCurso)
        {
            cout<<"Bienvenido al libro de calificaciones para \n\n"<<_nombreCurso<<" !"<<endl;
        }
};
int main()
{
    string nombreCurso;
    LibroCalificaciones miLibroCalificaciones;
    cout<<"Escriba el nombre del curso: ";getline(cin,nombreCurso); //lee le nombre de un curso con espacion en blanco
    miLibroCalificaciones.mostrarMensaje(nombreCurso);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}