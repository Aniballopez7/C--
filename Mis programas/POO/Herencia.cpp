#include<iostream>
using namespace std; 
//Clase Persona
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona();
        void insertarDatos();
        void mostrarPersona();
};
Persona::Persona()
{
    nombre = "";
    edad = 0;
}
void Persona::insertarDatos()
{
    cout<<"Ingrese su nombre: ";cin>>nombre;
    cout<<"Ingrese su edad: ";cin>>edad;
}
void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//Clase alumno
class Alumno:public Persona
{
    private:
        long codigoAlumno;
        float notaFinal;
    public:
        Alumno();
        void insertarAlumno();
        void mostrarAlumno();
};
Alumno::Alumno():Persona()
{
    insertarDatos();
    codigoAlumno = 0;
    notaFinal = 0;
}
void Alumno::insertarAlumno()
{
    cout<<"Codigo de alumno: ";cin>>codigoAlumno;
    cout<<"Nota Final: ";cin>>notaFinal;
    cout<<"\n";
}
void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout<<"Codigo del alumno: "<<codigoAlumno<<endl;
    cout<<"Nota Final: "<<notaFinal<<endl;
    cout<<"\n";
}
int main()
{
    Alumno a;
    a.insertarAlumno();
    a.mostrarAlumno();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}