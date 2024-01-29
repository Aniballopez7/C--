//Tengo un programa igual a este pero ingresado valores en la parte de Mis programas en la carpeta POO
#include<iostream>
#include <clocale>
using namespace std; 
class Fecha
{
    private: //Atributos
        int dia,mes,anio;
    public: //Metodos
        Fecha(int _dia,int _mes,int _anio); //Constructor
        Fecha(long); //Constructor 2
        void mostrarFecha();

};

Fecha::Fecha(int _dia,int _mes,int _anio)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
Fecha::Fecha(long fecha)
{
    anio = int(fecha/10000); //Extraer el año
    mes = int((fecha - anio * 10000) / 100); //Extraer el mes
    dia = int(fecha - anio * 10000 - mes * 100); //Extraer el dia
}
void Fecha::mostrarFecha()
{
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    Fecha hoy(20,5,2021); //Dia,mes,año
    hoy.mostrarFecha();
    Fecha ayer(20210519); //Año,mes,dia
    ayer.mostrarFecha();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}