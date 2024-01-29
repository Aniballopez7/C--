#include<iostream>
using namespace std;
class Carro //TODO: clase 
{
    private: //TODO: datos el cual el usuario no puede acceder
        //TODO: Atributos:
        int llave;
        int numeroSerie;
        int velocidad;
        bool acceso;
    public: //TODO: los constructores se crean con el mismo nombre de la clase
        Carro(int _llave,int _numeroSerie); //TODO: constructor, se les coloca guion bajo a los parametros del constructor
        //TODO: metodos:
        void encender(int _llave);
        void acelerar();
        void frenar();
        string marca;
        string modelo;
};
Carro::Carro(int _llave,int _numeroSerie) //TODO: constructor
{
    llave = _llave;
    numeroSerie = _numeroSerie;
    acceso = false;
    velocidad = 0;
}
void Carro::encender(int _llave)
{
    if (_llave == llave)
    {
        acceso = true;
        cout<<"Carro encendio\n"<<endl;
    }
    else
    {
        acceso = false;
        cout<<"Acceso denegado"<<endl;
    }
}
void Carro::acelerar()
{
    if (acceso == true)
    {
        if (velocidad >= 0)
        {
            velocidad += 10;
            cout<<"Tu velocidad es "<<velocidad<<endl;
        }
    }
    else
    {
        cout<<"No tienes acceso al vehiculo"<<endl;
    }
}
void Carro::frenar()
{
    if (acceso == true)
    {
        if (velocidad == 0)
        {
            cout<<"El vehiculo no tiene velocidad"<<endl;
        }
        else
        {     
            velocidad -= 10;
            cout<<"Tu velocidad es "<<velocidad<<endl;
        }
    }
    else
    {
        cout<<"No tienes acceso al vehiculo"<<endl;
    }
}
int main()
{
    Carro volvaguen = Carro(123,55);
    Carro volvaguen2 = Carro(1234,555);
    Carro volvaguen3 = Carro(12345,5555);
    volvaguen.encender(123);
    volvaguen.acelerar();
    volvaguen.acelerar();
    volvaguen.frenar();
    volvaguen.frenar();
    volvaguen.frenar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}