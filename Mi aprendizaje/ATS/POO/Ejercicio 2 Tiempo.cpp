#include<iostream>
using namespace std; 
class Tiempo
{
    private:
        int horas,minutos,segundos;
    public:
        Tiempo(int _horas,int _minutos,int _segundos); //Constructor 1
        Tiempo(int); //Constructor 2
        void mostrarTiempo();
};
Tiempo::Tiempo(int _horas,int _minutos,int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}
Tiempo::Tiempo(int tiempoSeg)
{
    horas = tiempoSeg / 3600 ; //Extrayendo las horas
    tiempoSeg %= 3600; //saber exactamente cuantas horas son
    minutos = tiempoSeg / 60; //Extrayendo los minutos
    segundos = tiempoSeg % 60; //Extraer los segundos
}   
void Tiempo::mostrarTiempo()
{
    cout<<"Horas: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
int main()
{
    Tiempo t(1,41,59);
    t.mostrarTiempo();
    Tiempo t2(3645);
    t2.mostrarTiempo();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}