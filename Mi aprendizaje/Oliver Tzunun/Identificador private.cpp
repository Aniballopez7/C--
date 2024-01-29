#include<iostream>
using namespace std; 
class Documentos
{
    private:
        //Atributos
        string titulo;
        string contenido;
    public:
        Documentos()
        {
            titulo = "Private";
            contenido = "Identificador en C++";
        }
        void imprimir()
        {
            cout<<titulo<<endl;
            cout<<contenido<<endl;
        }
};

int main()
{
    Documentos word;
    word.imprimir();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}