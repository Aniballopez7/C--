#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Zapato
{
    private:
        string color;
        double precio;
    public:
        Zapato()
        {
            color = "";
            precio = 0;
        }
        string retornarColor()
        {
            return color;
        }
        void insertar(string _color,float _precio)
        {
            color = _color;
            precio = _precio;
        }
        void mostrar()
        {
            cout<<"Color: "<<color<<" - "<<precio<<endl;
        }
};
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    vector<Zapato> zapatos;    
    //Declaro el vector colocandole el nombre de la clase y luego el nombre de este mismo
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"1. Ingresar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Eliminar"<<endl;
        cout<<"4. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        if ((opc < 1)||(opc > 6))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        system("clear");
        switch (opc)
        {
            case 1:
                {
                    string color;
                    double precio;
                    Zapato z; //Creando objeto
                    cout<<"Color: ";cin>>color;
                    cout<<"Precio: ";cin>>precio;
                    z.insertar(color,precio);
                    zapatos.push_back(z); 
                    //push.back permite insertar un nuevo elemento al vector con el nombre del objeto
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    cout<<"Objetos\n"<<endl;
                    for (int i = 0; i < zapatos.size(); i++) //zapatos.size() permite saber cuantos elementos hay en el vector
                    {
                        zapatos[i].mostrar();
                    }
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    string nombre;
                    cout<<"Ingrese el color a eliminar: ";cin>>nombre;
                    for (int i = 0; i < zapatos.size(); i++)
                    {
                        if (zapatos[i].retornarColor() == nombre)
                        {
                            //Ya se elimina el elemento por posicion
                            //para eliminar el objeto de una pocicion usamos objeto.begin() + i
                            zapatos.erase(zapatos.begin() + i);
                            break;
                        }
                    }
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}