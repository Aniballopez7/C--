#include<iostream>
using namespace std; 
//Clase
class Persona
{
    private: //Atributos
        string nombre;
        int edad;
    public:
        Persona(string _nombre,int _edad);
        void mostrarPersona();
};
//Constructor de la clase persona (clase padre)
Persona::Persona(string _nombre,int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//Clase Alumno
class Alumno:public Persona
{
    private:
        string codigoAlumno;
        float notaFinal;
    public:
        Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal); 
        void mostrarAlumno();
};
//contructor clase alumno
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal):Persona(_nombre,_edad)
{
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}
void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}
int main()
{
    Alumno a1("Jorge",18,"3245",10);
    a1.mostrarAlumno();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}