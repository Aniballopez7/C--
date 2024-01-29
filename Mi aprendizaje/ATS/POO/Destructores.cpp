#include<iostream>
using namespace std; 
class Perro
{
    private:
        string nombre,raza;
    public:
        Perro(string _nombre, string _raza); //Constructor
        ~Perro(); //Destructor
        void mostrarDatos();
        void jugar();
};
Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}
//Destructor
Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
}
void Perro::jugar()
{
    cout<<"\nEl perro "<<nombre<<" esta jugando"<<endl;
}
int main()
{
    Perro p1("Firulays","Lobo");
    p1.mostrarDatos();
    p1.jugar();
    //p1.~Perro(); //el destructor lo que hace es eliminar el objeto
    system("\nread -p '\nPresiona Enter para continuar...' var");
}