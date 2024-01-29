/*
La herencia permite que se puedan definir nuevas clases basadas de unas ya existentes a fin 
de reutilizar el código, generando así una jerarquía de clases dentro de una aplicación. Si 
una clase deriva de otra, esta hereda sus atributos y métodos y puede añadir nuevos atributos, 
métodos o redefinir los heredados.
*/
#include<iostream>
using namespace std; 
class Persona
{
    private:
        int edad;
        char *nombre;
    public:
        Persona(int _edad,char _nombre[]);
        void mostrarPersona();
};

Persona::Persona(int _edad,char _nombre[])
{
    edad = _edad;
    nombre = _nombre;
}
void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
class Alumno:public Persona //TODO: aqui alumno esta heredando los datos publicos de Persona
{
    private:
        char *codigo;
        float calificacion;
    public:
        Alumno(int _edad,char _nombre[],char _codigo[],float _calificacion);
        void mostrarAlumno();
};
Alumno::Alumno(int _edad,char _nombre[],char _codigo[],float _calificacion):Persona(_edad,_nombre)
{
    codigo = _codigo;
    calificacion = _calificacion;
}
void Alumno::mostrarAlumno()
{
    mostrarPersona(); //TODO: mostrando a la persona nombre y edad
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
}
int main()
{
    Alumno a1(20,"anibal","123",10);
    a1.mostrarAlumno();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}