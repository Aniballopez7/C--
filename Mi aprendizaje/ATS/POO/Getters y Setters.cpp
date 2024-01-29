/*
Setters en para establecer los valores a atributos
Getters es para mostrar los valores
*/
#include<iostream>
using namespace std; 
class Punto
{
    private:
        int x,y;
    public:
        Punto();
        void setPunto(int _x,int _y);
        int getPuntoX();
        int getPuntoY();
};
Punto::Punto()
{
}
//Establecemos valores a los atributos
void Punto::setPunto(int _x,int _y)
{
    x = _x;
    y = _y;
}
int Punto::getPuntoX()
{
    return x;
}
int Punto::getPuntoY()
{
    return y;
}

int main()
{
    Punto p;
    p.setPunto(6,7);
    cout<<p.getPuntoX()<<endl;
    cout<<p.getPuntoY()<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}