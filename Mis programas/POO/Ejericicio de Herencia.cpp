#include<iostream>
using namespace std; 
//TODO:Clase Persona
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona();
        void insertarPersona();
        void mostrarPersona();
};
Persona::Persona()
{
    nombre = "";
    edad = 0;
}
void Persona::insertarPersona()
{
    cout<<"Ingrese su nombre: ";cin>>nombre;
    cout<<"Ingrese su edad: ";cin>>edad;
}
void Persona::mostrarPersona()
{
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//TODO:Clase Empleado
class Empleado:public Persona
{
    private:
        int salario;
    public:
        Empleado();
        void insertarEmpleado();
        void mostrarEmpleado();
};
Empleado::Empleado():Persona()
{
    salario = 0;
}
void Empleado::insertarEmpleado()
{
    insertarPersona();
    cout<<"Ingrese el salario del empleado: ";cin>>salario;
}
void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout<<"Salario: "<<salario<<endl;
}
//TODO:Clase alumno
class Estudiante:public Persona
{
    private:
        long codigoEstudiante;
        float notaFinal;
    public:
        Estudiante();
        void insertarEstudiante();
        void mostrarEstudiante();
};
Estudiante::Estudiante():Persona()
{
    insertarPersona();
    codigoEstudiante = 0;
    notaFinal = 0;
}
void Estudiante::insertarEstudiante()
{
    cout<<"Codigo de Estudiante: ";cin>>codigoEstudiante;
    cout<<"Nota Final: ";cin>>notaFinal;
}
void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout<<"Codigo del Estudiante: "<<codigoEstudiante<<endl;
    cout<<"Nota Final: "<<notaFinal<<endl;
}
//TODO:Clase universitario
class Universitario:public Estudiante
{
    private:
        string carrera,semestre;
    public:
        Universitario();
        void insertarUniversitario();
        void mostrarUniversitario();
};
Universitario::Universitario():Estudiante()
{
    carrera = "";
    semestre = "";
}
void Universitario::insertarUniversitario()
{
    cout<<"Ingrese la carrera: ";cin>>carrera;
    cout<<"Ingrese el semestre: ";cin>>semestre;
    cout<<"\n";
}
void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Semestre: "<<semestre<<endl;
    cout<<"\n";
}
int main()
{
    cout<<"Empleado:\n"<<endl;
    Empleado e;
    e.insertarEmpleado();
    e.mostrarEmpleado();
    cout<<"\nEstudiante:\n"<<endl;
    Estudiante a;
    a.insertarEstudiante();
    a.mostrarEstudiante();
    cout<<"\nUniversitario\n"<<endl;
    Universitario u;
    u.insertarUniversitario();
    u.mostrarUniversitario();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}