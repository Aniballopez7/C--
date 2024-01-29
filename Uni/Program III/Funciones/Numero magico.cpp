#include<iostream>
using namespace std; 
int pedirDatos(int& nm,int d,int m,int a);
void DividirNumeros(int fecha[],int& x,int nm);
void sumarNumeros(int fecha[],int& x,int& nm);
void DividirNumeros(int fecha1[],int& y,int nm);
void sumarnumeros(int fecha1[],int& y,int nm);
int main()
{
    int nm,d,m,a,x=0,y=0,s;
    int fecha[4],fecha1[2];
    nm = pedirDatos(nm,d,m,a);
    DividirNumeros(fecha,x,nm);
    sumarNumeros(fecha,x,nm);
    DividirNumeros(fecha1,y,nm);
    sumarnumeros(fecha1,y,nm);
    system("\nread -p 'Presione enter para continuar' var");
}
int pedirDatos(int& nm,int d,int m,int a){
    cout<<"Ingrese su dia de nacimiento: ";cin>>d;
    cout<<"Ingrese su mes de nacimiento: ";cin>>m;
    cout<<"Ingrese su año de nacimiento: ";cin>>a;
    nm = d + m + a;
    return nm;
}
void DividirNumeros(int fecha[],int& x,int nm){
    while (nm>0)
    {
        fecha[x] = nm%10;
        nm /= 10;
        x++;
    }
}
void sumarNumeros(int fecha[],int& x,int& nm){
    nm = 0;
    for (int i = x-1; i >= 0; i--)
    {
        nm += fecha[i];
    }
    if (nm < 10)
    {
        cout<<"\nTu numero magico es: "<<nm<<endl;
    }
    cout<<"\n";
}
void dividirNumero(int fecha1[],int& y,int& nm){
    while (nm > 0)
    {
        fecha1[y] = nm % 10;
        nm /= 10;
        y++;
    }
}
void sumarnumeros(int fecha1[],int& y,int nm){
    if (nm >= 10)
    {
        nm = 0;
        for (int s = y-1; s >= 0; s--)
        {
            nm += fecha1[s];
        }
        cout<<"Tu numero magico es: "<<nm<<endl;
    }
    cout<<"\n";
}