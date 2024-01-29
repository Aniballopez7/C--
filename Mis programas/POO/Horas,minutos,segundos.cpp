#include<iostream>
using namespace std;
class Tiempo
{
    private:
        int horas,minutos,segundos,tiempoSeg;
    public:
        Tiempo();
        void ingresarSeg();
        void convertirTiempo();
        void mostrarTiempo();
};

Tiempo::Tiempo()
{
    horas = 0;
    minutos = 0;
    segundos = 0;
}
void Tiempo::ingresarSeg()
{
    cout<<"Ingresa la cantidad de segundos: ";cin>>tiempoSeg;
}
void Tiempo::convertirTiempo()
{
    horas = tiempoSeg / 3600;
    tiempoSeg %= 3600;
    minutos = tiempoSeg / 60;
    segundos = tiempoSeg % 60; 
}
void Tiempo::mostrarTiempo()
{
    cout<<"\nTiempo: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
int main()
{
    Tiempo t;
    t.ingresarSeg();
    t.convertirTiempo();
    t.mostrarTiempo();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}