#include<iostream>
using namespace std; 
class Rectangulo
{
    private:
        int alto;
        int ancho;
    public:
        Rectangulo(int _alto,int _ancho);
        void perimetro();
        void area();
};
Rectangulo::Rectangulo(int _alto,int _ancho)
{
    alto = _alto;
    ancho = _ancho;
}
void Rectangulo::perimetro()
{
    int perimetro;
    perimetro = (alto*2) + (ancho*2);
    cout<<"Perimetro: "<<perimetro<<endl;
}
void Rectangulo::area()
{
    int area;
    area = alto * ancho;
    cout<<"Area: "<<area<<endl;
}
int main()
{
    //TODO: Rectangulo r1 = Rectangulo(5,5); manera larga
    Rectangulo r1(5,5); //TODO: manera corta
    r1.perimetro();
    r1.area();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}