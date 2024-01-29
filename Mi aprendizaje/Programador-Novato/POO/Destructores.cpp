/*
Un destructor es una función miembro que se invoca automáticamente cuando el objeto se sale 
del alcance o se destruye explícitamente mediante una llamada para eliminar. Un destructor 
tiene el mismo nombre que la clase, precedido por una tilde (~). Por ejemplo, el destructor 
para la clase Persona se declara: ~Persona().
*/
#include<iostream>
using namespace std; 
int numeroPersonas;
class Persona
{
    private:
        int NSS; //TODO: numero de seguro social
    public:
        Persona(int _NSS);
        ~Persona(); //TODO: destructor se coloca el ~
        void mostrar();
};

Persona::Persona(int _NSS)
{
    NSS = _NSS;
    numeroPersonas++;
    cout<<"\nSe creo la persona con NSS "<<NSS<<endl;
}
Persona::~Persona()
{
    numeroPersonas--;
    cout<<"Se destruyo la persona con NSS"<<NSS<<endl;
}
void Persona::mostrar()
{
    cout<<"Persona con NSS "<<NSS<<endl;
}
void llama();
int main()
{
    llama();
    cout<<"\nNumero de personas: "<<numeroPersonas<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void llama()
{
    Persona p1(1);
    p1.mostrar();
    Persona p2(2);
    p2.mostrar();
}