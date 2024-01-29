#include <iostream>
using namespace std;
int main()
{
    float a,b,res;
    cout<<"Por favor ingresa los iguiente:\n";
    cout<<"valor a:";cin>>a;
    cout<<"valor b:";cin>>b;
    //exp,raiz,*,/,+,-
    res = (a / b) + 1;
    cout.precision(3);
    //1.83333
    cout<<"\nAqui esta tu resultado:"<<res<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}