#include<iostream>
#include<stdlib.h>
using namespace std; 
class Rectangulo
{
    private: //Atributos
        float largo,ancho;
    public: //Metodos
        Rectangulo(float _largo,float _ancho); //Constructor vacio
        void area();
        void perimetro();
};
Rectangulo::Rectangulo(float _largo,float _ancho)
{
    largo = _largo;
    ancho = _ancho;
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
    Rectangulo r1(6,6); //Creando objeto o instanciar una clase
    r1.area();
    r1.perimetro();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}