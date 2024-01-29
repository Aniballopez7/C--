#include<iostream>
using namespace std; 
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(string _nombre,int _edad);
        void mostrarPersona();
};
class Empleado:public Persona
{
    private:
        float sueldo;
    public:
        Empleado(string _nombre,int _edad,float _sueldo);
        void mostrarEmpleado();
};
class Estudiante:public Persona
{
    private:
        float notaFinal;
    public:
        Estudiante(string _nombre,int _edad,float _notaFinal);
        void mostrarEstudiante();
};
class Universitario:public Estudiante
{
    private:
        string carrera;
    public:
        Universitario(string _nombre,int _edad,float _notaFinal,string _carrera);
        void mostrarUniversitario();
};
//TODO: Constructor Persona (clase padre)
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
//TODO: Constructor Empleado
Empleado::Empleado(string _nombre,int _edad,float _sueldo):Persona(_nombre,_edad)
{
    sueldo = _sueldo;
}
void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout<<"Sueldo: "<<sueldo<<endl;
}
//TODO: constructor de estudiante
Estudiante::Estudiante (string _nombre,int _edad,float _notaFinal):Persona(_nombre,_edad)
{
    notaFinal = _notaFinal;
}
void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout<<"Nota Final: "<<notaFinal<<endl;
}
//TODO: Constructor de universitario
Universitario::Universitario(string _nombre,int _edad,float _notaFinal,string _carrera):Estudiante(_nombre,_edad,_notaFinal)
{
    carrera = _carrera;
}
void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout<<"Carrera: "<<carrera<<endl;
}
int main()
{
    Empleado e("Jose",18,1300);
    cout<<"-Empleado-\n"<<endl;
    e.mostrarEmpleado();
    Estudiante a("Anibal",18,16);
    cout<<"\n-Estudiante-\n"<<endl;
    a.mostrarEstudiante();
    Universitario u("Maria",19,17.8,"Sistemas");
    cout<<"\n-Universitaria-\n"<<endl;
    u.mostrarUniversitario();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}