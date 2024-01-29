#include<iostream>
using namespace std; 
//TODO: Clase Persona
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(string _nombre,int _edad);
        virtual void mostrar(); //Funcion de poliformismo virtual va en la clase padre
};
//TODO: Clase Alumno
class Alumno:public Persona
{
    private:
        float notaFinal;
    public:
        Alumno(string _nombre,int edad,float _notafinal);
        void mostrar();
};
class Profesor:public Persona
{
private:
    string materia;
public:
    Profesor(string _nombre,int _edad,string _materia);
    void mostrar();
};
//TODO:Constructor de Persona
Persona::Persona(string _nombre,int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//TODO: Constructor de Alumno
Alumno::Alumno(string _nombre,int _edad,float _notafinal):Persona(_nombre,_edad)
{
    notaFinal = _notafinal;
}
void Alumno::mostrar()
{
    Persona::mostrar(); //Indicamos que este mostrar es de la clase persona
    cout<<"Nota Final: "<<notaFinal<<endl;
}
//TODO:Constructor de Profesor
Profesor::Profesor(string _nombre,int _edad,string _materia):Persona(_nombre,_edad)
{
    materia = _materia;
}
void Profesor::mostrar()
{
    Persona::mostrar();
    cout<<"Materia: "<<materia<<endl;
}
int main()
{
    Persona *vector[3];
    vector[0] = new Alumno("Alejandro",20,18.9);
    vector[0]->mostrar();
    cout<<"\n";
    vector[1] = new Alumno("Maria",19,15);
    vector[1]->mostrar();
    cout<<"\n";
    vector[2] = new Profesor("Jose",25,"Algoritmos");
    vector[2]->mostrar();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}