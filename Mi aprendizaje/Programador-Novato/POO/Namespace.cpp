/*
Un namespace, no es más que una forma de crear un bloque , y que todas las funciones que estén dentro del mismo, 
estén asociadas a ese namespace (o espacio de nombres), al cual se le asigna un nombre para identificarlo.
*/
#include<iostream>
using namespace std; 
namespace trigonometria
{
    int suma(int a,int b)
    {
        return a+b;
    }
} // namespace trigonometria
namespace aritmetica
{
    int suma(int a,int b)
    {
        return a-b;
    }
} // namespace aritmetica

int main()
{
    cout<<"La suma trigonometrica: "<<trigonometria::suma(5,5)<<endl;
    cout<<"La suma aritmetica: "<<aritmetica::suma(5,6)<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}