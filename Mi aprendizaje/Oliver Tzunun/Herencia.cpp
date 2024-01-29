#include<iostream>
using namespace std; 
class Alumnos
{
    private:
        string nombre;
        string carnet;
    public:
        Alumnos() //constructor vacio
        {
            nombre = "";
            carnet = "";
        }
        void insertar(string _nombre,string _carnet)
        {
            nombre = _nombre;
            carnet = _carnet;
        }
        string imprimir()
        {
            return "Nombre: " + nombre + " - " + carnet;
        }
};
class Lista:public Alumnos
{
    public:
        void listar()
        {
            cout<<imprimir()<<endl;
        }
};
int main()
{
    Lista secciona;
    secciona.insertar("Anibal","123");
    secciona.listar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}