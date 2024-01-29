#include<iostream>
using namespace std; 
class Cuadrado //Clase
{
    //Identificador
    public:
        //Atributos 
        float base, altura;
        
        //Constructor siempre sera publico
        Cuadrado(float _base,float _altura)
        {
            base = _base;
            altura = _altura;
        } 
        //Calcular
        float calcularArea()
        {
            //A = b * h
            return base * altura;
        }
};
int main()
{
    float base, altura;
    cout<<"Ingrese la base del cuadrado: ";cin>>base;
    cout<<"Ingrese la altura del cuadrado: ";cin>>altura;
    Cuadrado c1 = Cuadrado(base,altura);
    c1.calcularArea();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}