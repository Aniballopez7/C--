/*
Los métodos getters y setters en C++ son métodos de acceso, lo que indica que son siempre declarados 
públicos (public) y permiten establecer un valor o recuperar un valor ya establecido. 
crearemos una función en la que pondremos y leeremos valores desde estos métodos.
*/
#include<iostream>
using namespace std;
class Numero
{
    private:
        int x,y;
    public:
        Numero();
        void setx(int _x);
        void sety(int _y);
        int getx();
        int gety();
};
Numero::Numero()
{

}
void Numero::setx(int _x)
{
    x = _x;
}
void Numero::sety(int _y)
{
    y = _y;
}
int Numero::getx()
{
    return x;
}
int Numero::gety()
{
    return y;
}
int main()
{
    Numero n;
    n.setx(5);
    n.sety(5);
    cout<<"x = "<<n.getx()<<" y = "<<n.gety()<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}