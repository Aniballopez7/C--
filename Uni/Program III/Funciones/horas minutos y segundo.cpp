#include<iostream>
using namespace std; 
void segundosTiempo(int,int&,int&,int&);
void segundosTiempo1(int,int&,int&,int&);
int main()
{
    char opc;
    int segundos=0,horas=0,min=0,sretornar=0;
    int segundos1=0,horas1=0,min1=0,sretornar1=0;
    int segundos2=0,horas2=0,min2=0,sretornar2=0;
    cout<<"Ingrese la cantidad de segundos: ";cin>>segundos;
    segundosTiempo(segundos,horas,min,sretornar);
    cout<<"\nTus segundos equivalen a:\n"<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<sretornar<<endl;
    if (sretornar >= 60)
    {
        sretornar = 0;
        min += 1;
    }
    if (min >= 60)
    {
        min = 0;
        horas += 1;
    }
    if (horas > 23)
    {
        sretornar = 0;
        min = 0;
        horas = 0;
    }
    cout<<"\nDesea sumarle mas segundos a su hora actual (s/n): ";cin>>opc;
    cout<<"\n";
    if ((opc == 's')||(opc == 'S'))
    {
        cout<<"Ingrese la cantidad de segundos: ";cin>>segundos1;
        cout<<"\n";
        segundosTiempo1(segundos1,horas1,min1,sretornar1);
            if (sretornar1 >= 60)
        {
            sretornar1 = 0;
            min1 += 1;
        }
        if (min1 >= 60)
        {
            min1 = 0;
            horas1 += 1;
        }
        if (horas1 > 23)
        {
            sretornar1 = 0;
            min1 = 0;
            horas1 = 0;
        }
        cout<<horas1<<":"<<min1<<":"<<sretornar1<<endl;
        cout<<horas<<":"<<min<<":"<<sretornar<<endl;
        horas2 = horas +horas1;
        min2 = min1+min;
        sretornar2 = sretornar1+sretornar;
        if (sretornar2 >= 60)
        {
            sretornar2 -= 60;
            sretornar2 += 0;
            min2 += 1;
        }
        if (min2 >= 60)
        {
            min2 -= 60;
            min2 += 0;
            horas2 += 1;
        }
        if (horas2 > 23)
        {
            horas2 -= 24;
            horas2 += 0;
            min2 = 0;
            sretornar2 = 0;
        }
        cout<<"\nLa suma de ambas horas es: "<<endl;
        cout<<"\n"<<horas2<<":"<<min2<<":"<<sretornar2<<endl;
    }
    else{
        cout<<"\n"<<horas<<":"<<min<<":"<<sretornar<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void segundosTiempo(int segundos,int& horas,int& min,int& sretornar){
    horas = segundos / 3600;
    segundos %= 3600;
    min = segundos / 60;
    segundos %= 60;
    sretornar = segundos; 
}
void segundosTiempo1(int segundos1,int& horas1,int& min1,int& sretornar1){
    horas1 = segundos1 / 3600;
    segundos1 %= 3600;
    min1 = segundos1 / 60;
    segundos1 %= 60;
    sretornar1 = segundos1; 
}