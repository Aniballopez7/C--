#include<iostream>
using namespace std; 
//No hace falta pasarle parametros a los objetos mientras esten en la misma clase
class Persona
{
    private: //Atributos o caracteristicas
        int edad;
        string nombre;
    public: //Metodos o acciones
        Persona(int,string);
        void leer();
        void correr();
};
//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad,string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout<<"Soy "<<nombre<<" y estor leyendo un libro y tengo "<<edad<<" años"<<endl;
}

void Persona::correr()
{
    cout<<"Soy "<<nombre<<" y estoy corriendo en un maraton y tengo "<<edad<<" años"<<endl;
}

int main()
{
    Persona p1 = Persona(18,"Pedro");
    p1.leer();

    cout<<"\n";

    Persona p2(19,"Juhamaris");
    p2.correr();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}