#include<iostream>
using namespace std; 
void segundosTiempo(int,int&,int&,int&);
int main()
{
    int segundos=0,horas=0,min=0,sretornar=0;
    cout<<"Ingrese la cantidad de segundos: ";cin>>segundos;
    segundosTiempo(segundos,horas,min,sretornar);
    cout<<"\nTus segundos equivalen a:\n"<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<sretornar<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void segundosTiempo(int segundos,int& horas,int& min,int& sretornar)
{
    horas = segundos / 3600;
    segundos %= 3600;
    min = segundos / 60;
    segundos %= 60;
    sretornar = segundos; 
}