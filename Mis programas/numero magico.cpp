#include<iostream>
using namespace std; 
int main()
{
    int nm,d,m,a,x=0,i,y=0,s;
    int fecha[4],fecha1[2];
    cout<<"Ingrese su dia de nacimiento: ";cin>>d;
    cout<<"Ingrese su mes de nacimiento: ";cin>>m;
    cout<<"Ingrese su año de nacimiento: ";cin>>a;
    nm = d + m + a;
    //Dividiendo los numeros
    while(nm>0){
        fecha[x] = nm%10;
        nm /= 10;
        x++;
    }
    cout<<"\n";
    cout<<"Dia + Mes + Año:"<<endl;
    //Sumando los numeros
    for (int i = x-1; i >= 0; i--)
    {
        cout<<fecha[i];
        nm += fecha[i];
    }
    cout<<"\n\nSuma de los numeros que contiene el año: "<<nm<<endl;
    if(nm < 10){
        cout<<"\nSu numero magico es: "<<nm<<"\n"<<endl;
    }
    else{
        cout<<"\n";
        //Divido los numeros
        while (nm>0)
        {
            fecha1[y] = nm%10;
            nm /= 10;
            y++;
        }
        //Sumo los numeros
        for ( s = y-1; s >= 0; s--)
        {
            nm += fecha1[s];
        }
        cout<<"Su numero magico es: "<<nm<<"\n"<<endl;
        }
    system("\nread -p 'Presione enter para continuar' ...var");
}