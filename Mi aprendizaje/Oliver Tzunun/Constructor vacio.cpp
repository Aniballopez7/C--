#include<iostream>
#include<string>
using namespace std; 
//Alumno - Atrubutos: nombew y carnet
//Metodos: Constructor Vacio - Insertar - Imprimir
class Alumno
{
    public:
        string nombre;
        string carnet;
        //int carnet;
        //COnstructor vacio
        Alumno()
        {
            nombre = ""; //si se inicializa en cadena se iguala a ""
            carnet = "";
            //carnet = 0; //si se inicializa en numero es igual a 0
        }
        void insertar(string nombre,string carnet)
        {
            nombre = nombre;
            carnet = carnet;
        }
        string imprimir()
        {
            return "Nombre: " + nombre + " - " + carnet + "\n";
        }
};
int main()
{
    string nombre, carnet;
    Alumno a1 = Alumno();
    cout<<"Ingrese el nombre del Alumno: ";cin>>nombre;
    cout<<"Ingrese el numero de carnet: ";cin>>carnet;
    a1.insertar(nombre,carnet);
    cout<< a1.imprimir();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}