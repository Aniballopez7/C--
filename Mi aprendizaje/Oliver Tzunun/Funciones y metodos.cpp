#include<iostream>
using namespace std; 
class Numero
{
    public:
        int numero;
        Numero(int _numero)
        {
            numero = _numero;
        }
        int Factorial()
        {
            int resultado = 1;
            for (int i = 1; i <= numero; i++)
            {
                resultado *= i;
            }
            return resultado;
        }
        string imprimir() //convirtiendo un numero a cadena
        {
            string cadena = "";
            cadena = to_string(numero); //funcion para convertir
            return "El numero es: " + cadena;
        }
        void secuencia()
        {
            for (int i = 0; i <= numero; i++)
            {
                cout<<i;
            }
            cout<<endl;
        }
};

int main()
{
    Numero n1 = Numero(4);
    cout<<"Factorial: "<<n1.Factorial()<<endl;
    cout<<n1.imprimir()<<endl;
    n1.secuencia();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}