#include <iostream>
using namespace std;
int main()
{
    float practicas,particiapcion,examen,res;
    cout<<"Ingresa los datos que se te piden a continuacion\n";
    cout<<"Calificacion de las practicas: ";cin>>practicas;
    cout<<"Calificacion de la particiapcion: ";cin>>particiapcion;
    cout<<"Calificacion deL examen: ";cin>>examen;
    practicas *= 0.40;
    particiapcion *= 0.20;
    examen *= 0.40;
    res = practicas + particiapcion + examen;
    cout<<"\nAqui esta tu piche calificacion "<<res<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}