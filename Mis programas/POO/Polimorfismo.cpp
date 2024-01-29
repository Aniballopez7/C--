#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
//TODO: Clase Persona
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona();
        virtual void insertarDatos(); //Funcion de poliformismo virtual va en la clase padre
        virtual void mostrar(); 
};
//TODO: Clase Alumno
class Alumno:public Persona
{
    private:
        float notaFinal;
    public:
        Alumno();
        void insertarDatos();
        void mostrar();
};
//TODO: Clase Profesor
class Profesor:public Persona
{
private:
    string materia;
public:
    Profesor();
    void insertarDatos();
    void mostrar();
};
//TODO: Constructor de persona
Persona::Persona()
{
    nombre = "";
    edad = 0;
}
void Persona::insertarDatos()
{
    cout<<"Ingrese un nombre: ";cin>>nombre;
    cout<<"Ingrese una edad: ";cin>>edad;
}
void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//TODO: Constructor de alumno
Alumno::Alumno():Persona()
{
    notaFinal = 0;
}
void Alumno::insertarDatos()
{
    Persona::insertarDatos();
    cout<<"Ingrese nota final: ";cin>>notaFinal;
}
void Alumno::mostrar()
{
    Persona::mostrar();
    cout<<"Nota Final: "<<notaFinal<<endl;
}
//TODO: constructor de Profesor
Profesor::Profesor():Persona()
{
    materia = "";
}
void Profesor::insertarDatos()
{
    Persona::insertarDatos();
    cout<<"Ingrese la materia: ";cin>>materia;
}
void Profesor::mostrar()
{
    Persona::mostrar();
    cout<<"Materia: "<<materia<<endl;
}
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    vector<Alumno> alumnos;
    vector<Profesor> profesores;
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Agregar un Alumno"<<endl;
        cout<<"2. Agregar un Profesor"<<endl;
        cout<<"3. Mostrar Alumnos"<<endl;
        cout<<"4. Mostrar Profesores"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 5))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        //system("clear"); si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    Alumno a;
                    a.insertarDatos();
                    alumnos.push_back(a);                   
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    Profesor p;
                    p.insertarDatos();
                    profesores.push_back(p);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    cout<<"Alumnos:\n"<<endl;
                    for (int i = 0; i < alumnos.size(); i++)
                    {
                        alumnos[i].mostrar();
                        cout<<"\n";
                    }
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    cout<<"Profesores\n"<<endl;
                    for (int i = 0; i < profesores.size(); i++)
                    {
                        profesores[i].mostrar();
                        cout<<"\n";
                    }
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    cout<<"Saliendo del programa\n"<<endl;
                    salir = true;
                }break;
        }
    } while (salir != true);
}