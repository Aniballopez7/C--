#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,res;
    cout<<"Ingresa los valores numericos que se te pida\n";
    cout<<"Valor a: ";cin>>a;
    cout<<"Valor b: ";cin>>b;
    cout<<"Valor c: ";cin>>c;
    cout<<"Valor d: ";cin>>d;
    cout<<"Valor e: ";cin>>e;
    cout<<"Valor f: ";cin>>f;
    res = (a + (b / c)) / (d + (e / f));
    cout<<"\nResultado: "<<res<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}