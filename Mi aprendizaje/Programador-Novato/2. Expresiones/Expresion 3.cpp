#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x,y,res,cuadrado;
    cout<<"Digita lo que se te pida\n"<<endl;
    do
    {
        cout<<"Valor de x: ";cin>>x;
        cout<<"Valor de y: ";cin>>y;
        cuadrado = (pow(y,2)-1);
        if(cuadrado == 0)
        {
            cout<<"\nEl valor de x o y es invalido\n";
        }
    } while (cuadrado == 0);
    res = (sqrt(x)) / cuadrado;
    cout<<"\nAqui esta tu resultado: "<<res<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}