#include<iostream>
using namespace std; 
class Persona //TODO: persona
{
    private:
        char *nombre;
        int edad;
    public:
        Persona(char _nombre[],int _edad);
        void mostrarPersona();
};

Persona::Persona(char _nombre[],int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
class Empleado:public Persona //TODO: empleado
{
    private:
        float sueldo;
    public:
        Empleado(char _nombre[],int _edad,float _sueldo);
        void mostrarEmpleado();
};

Empleado::Empleado(char _nombre[],int _edad,float _sueldo):Persona(_nombre,_edad)
{
    sueldo = _sueldo;
}
void Empleado::mostrarEmpleado()
{
    cout<<"Sueldo: "<<sueldo<<endl;
}
class Estudiante:public Persona //TODO: estudiante
{
    private:
        float calificaciones;
    public:
        Estudiante(char _nombre[],int _edad,float _calificaciones);
        void mostrarEstudiante();
};

Estudiante::Estudiante(char _nombre[],int _edad,float _calificaciones):Persona(_nombre,_edad)
{
    calificaciones = _calificaciones;
}
void Estudiante::mostrarEstudiante()
{
    cout<<"Calificaciones: "<<calificaciones<<endl;
}
class Universitario:public Estudiante //TODO: universitario
{
    private:
        char *carrera;
    public:
        Universitario(char _nombre[],int _edad,float _calificaciones,char _carrera[]);
        void mostrarUniversitario();
};

Universitario::Universitario(char _nombre[],int _edad,float _calificaciones,char _carrera[]):Estudiante(_nombre,_edad,_calificaciones)
{
    carrera = _carrera;
}
void Universitario::mostrarUniversitario()
{
    cout<<"Carrera: "<<carrera<<endl;
}
int main()
{
    Persona p1("Anibal",18);
    p1.mostrarPersona();
    cout<<"______________________\n"<<endl;
    Empleado e1("Juhanmaris",19,350);
    e1.mostrarPersona();
    e1.mostrarEmpleado();
    cout<<"______________________\n"<<endl;
    Estudiante es1("Maria",17,10);
    es1.mostrarPersona();
    es1.mostrarEstudiante();
    cout<<"______________________\n"<<endl;
    Universitario u1("Antonio",18,9,"Sistema");
    u1.mostrarPersona();
    u1.mostrarEstudiante();
    u1.mostrarUniversitario();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}