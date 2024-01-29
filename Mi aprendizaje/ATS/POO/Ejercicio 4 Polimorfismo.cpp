#include<iostream>
using namespace std;
//TODO: Clase Animal 
class Animal
{
    private:
        int edad;
    public:
        Animal(int _edad);
        virtual void comer();
};
//TODO: Clase Humano
class Humano:public Animal
{
    private:
        string nombre;
    public:
        Humano(int _edad,string _nombre);
        void comer();
};
//TODO: Clase Perro
class Perro:public Animal
{
    private:
        string nombre,raza;
    public:
        Perro(int _edad,string _nombre,string _raza);
        void comer();
};
//TODO: constructor de Animal
Animal::Animal(int _edad)
{
    edad = _edad;
}
void Animal::comer()
{
    cout<<"Yo como";
}
//TODO: constructor de Humano
Humano::Humano(int _edad,string _nombre):Animal(_edad)
{
    nombre = _nombre;
}
void Humano::comer()
{
    Animal::comer();
    cout<<" en una mesa, sentado en una silla"<<endl;
}
//TODO: constructor de Perro
Perro::Perro(int _edad,string _nombre,string _raza):Animal(_edad)
{
    nombre = _nombre;
    raza = _raza;
}
void Perro::comer()
{
    Animal::comer();
    cout<<" en el suelo, con un plato"<<endl;
}
int main()
{
    Animal *animales[2];
    animales[0] = new Perro(5,"Boby","Pastor Aleman");
    animales[0]->comer();
    animales[1] = new Humano(18,"Pedro");
    animales[1]->comer();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}