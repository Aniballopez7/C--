/*
Algunas veces hay una necesidad de inicializar un objeto de diferentes maneras. Esto se puede 
hacer usando la sobrecarga de constructor. Hacerlo le permite construir objetos de varias maneras.
*/
#include<iostream>
using namespace std; 
class Fecha
{
    private:
        int dia,mes,anio;
    public:
        Fecha(int _dia,int _mes,int _anio);
        Fecha(long _fecha);
        void mostrarFecha();
};
Fecha::Fecha(int _dia,int _mes,int _anio)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
Fecha::Fecha(long _fecha)
{
    anio = (_fecha / 10000);
    mes = ((_fecha - anio * 10000) / 100);
    dia = (_fecha - anio * 10000 - mes * 100);
}
void Fecha::mostrarFecha()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main()
{
    Fecha fhoy(20,01,2021);
    Fecha fhoy2(20210120);
    fhoy.mostrarFecha();
    fhoy2.mostrarFecha();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}