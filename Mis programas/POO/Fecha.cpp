#include<iostream>
#include <clocale>
using namespace std; 
class Fecha
{
    private: //Atributos
        int dia,mes,anio;
        long fecha;
    public: //Metodos
        Fecha(int _dia,int _mes,int _anio); //Constructor
        Fecha(long _fecha); //Constructor 2
        void ingresarFecha();
        void ingresarFechaLarga();
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
    fecha = _fecha;
}
void Fecha::ingresarFecha()
{
    cout<<"Ingrese una fecha:\n"<<endl;
    cout<<"Dia: ";cin>>dia;
    cout<<"Mes: ";cin>>mes;
    cout<<"Año: ";cin>>anio;
}
void Fecha::ingresarFechaLarga()
{
    cout<<"Ingrese una fecha año,mes y dia: ";cin>>fecha;
    anio = int(fecha/10000); //Extraer el año
    mes = int((fecha - anio * 10000) / 100); //Extraer el mes
    dia = int(fecha - anio * 10000 - mes * 100); //Extraer el dia
}
void Fecha::mostrarFecha()
{
    cout<<"\nLa fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<"\n"<<endl;
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int dia,mes,anio;
    long fecha;
    Fecha hoy(dia,mes,anio); //Dia,mes,año
    hoy.ingresarFecha();
    hoy.mostrarFecha();
    Fecha larga(fecha);
    larga.ingresarFechaLarga();
    larga.mostrarFecha();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}