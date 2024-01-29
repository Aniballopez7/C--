#include<iostream>
using namespace std; 
class Saludo
{
    public:
        string nombre, saludo;
        //Constructor 1
        Saludo(string nombre)
        {
            nombre = nombre;
            saludo = "Hola " + nombre;
            cout<< saludo << endl;
        }
        //Constructor 2
        Saludo()
        {
            saludo = "Hola";
            cout<< saludo <<endl;
        }
};
int main()
{
    Saludo s1 = Saludo("Anibal");
    Saludo s2 = Saludo();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}