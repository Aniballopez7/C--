#include<iostream>
#include<stdlib.h>
using namespace std; 
class Rectangulo
{
    private: //Atributos
        float largo,ancho;
    public: //Metodos
        Rectangulo(); //Constructor vacio
        void insertarDatos();
        void area();
        void perimetro();
};
Rectangulo::Rectangulo()
{
    largo = 0;
    ancho = 0;
}
void Rectangulo::insertarDatos()
{
    cout<<"Ingrese el largo del rectangulo: ";cin>>largo;
    cout<<"Ingrese el ancho del rectangulo: ";cin>>ancho;
    cout<<"\n";
}
void Rectangulo::area()
{
    float area;
    area = largo * ancho;
    cout<<"Area: "<<area<<endl;
}
void Rectangulo::perimetro()
{
    float perimetro;
    perimetro =  ((2 * largo) + (2 * ancho));
    cout<<"Perimetro: "<<perimetro<<endl;
}
int main()
{
    Rectangulo r1; //Creando objeto o instanciar una clase
    r1.insertarDatos();
    r1.area();
    r1.perimetro();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}