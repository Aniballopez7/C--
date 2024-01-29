#include<iostream>
#include<string>
using namespace std;
class Personas
{
    private:
        string nombre;
        int telefono;
    public:
        Personas()
        {
            nombre = "";
            telefono = 0; 
        }
        void getPersonas(string _nombre,int _telefono)
        {
            nombre = _nombre;
            telefono = _telefono;
        }
        string setPersona()
        {
            return "Nombre: " + nombre + " - " + to_string(telefono);
        }
};
int main()
{
    Personas personas[5];
    int telefono;
    string nombre;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Nombre: ";cin>>nombre;
        cout<<"Telefono: ";cin>>telefono;
        cout<<"\n";
        personas[i].getPersonas(nombre,telefono);
    }
    //Visualizar objetos
    for (int i = 0; i < 5; i++)
    {
        cout<<personas[i].setPersona()<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}