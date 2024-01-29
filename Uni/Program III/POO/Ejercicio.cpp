#include<iostream>
using namespace std; 
//TODO clase persona
class Persona
{
    private:
        string nombre,apellido,direccion;
        int cedula,telefono;
    public:
        Persona();
        virtual void insertarDatos();
        virtual void mostrarDatos();
};
//TODO Constructor de persona
Persona::Persona()
{
    nombre = "";
    apellido = "";
    direccion = "";
    cedula = 0;
    telefono = 0;
}

void Persona::insertarDatos() 
{
    cout<<"Inserte el nombre: ";cin>>nombre;
    cout<<"Inserte el apellido: ";cin>>apellido;
    cout<<"Inserte la direccion: ";cin>>direccion;
    cout<<"Inserte la cedula: ";cin>>cedula;
}

void Persona::mostrarDatos()
{
    cout<<"\n";
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Cedula: "<<cedula<<endl;
}
//TODO Empleado
class Empleado:public Persona
{
    private:
        int anios;
        float salario;
    public:
        Empleado();
        void insertarDatos();
        void mostrarDatos();
};

Empleado::Empleado():Persona()
{
    anios = 0;
    salario = 0;
}

void Empleado::insertarDatos() 
{
    Persona::insertarDatos();
    cout<<"Inserte años de trabajo: ";cin>>anios;
    cout<<"Inserte Salario: ";cin>>salario;
}

void Empleado::mostrarDatos() 
{
    Persona::mostrarDatos();
    cout<<"Años de trabajo: "<<anios<<endl;
    cout<<"Salario: "<<salario<<"$"<<endl;
}
//TODO Secretario
class Secretario:public Persona
{
    private:
        int numero_fax;
        float salario;
    public:
        Secretario();
        void insertarDatos();
        void mostrarDatos();
};

Secretario::Secretario():Persona()
{
    numero_fax = 0;
    salario = 0;
}

void Secretario::insertarDatos()
{
    Persona::insertarDatos();
    cout<<"Numero de fax: ";cin>>numero_fax;
    cout<<"Inserte Salario: ";cin>>salario;
}

void Secretario::mostrarDatos() 
{
    Persona::mostrarDatos();
    cout<<"Numero de fax: "<<numero_fax<<endl;
    cout<<"Salario: "<<salario<<"$"<<endl;
}

//TODO Vendedor
class Vendedor:public Persona
{
    private:
        string matricula,marca,modelo,area_de_venta;
        long telefono,porcentaje;
    public:
        Vendedor();
        virtual void insertarDatos();
        virtual void mostrarDatos();
};

Vendedor::Vendedor():Persona()
{
    matricula = "";
    marca = "";
    modelo = "";
    area_de_venta = "";
    telefono = 0;
    porcentaje = 0;
}

void Vendedor::insertarDatos()
{
    Persona::insertarDatos();
    cout<<"Ingrese la matricula del carro: ";cin>>matricula;
    cout<<"Ingrese la marca del vehiculo: ";cin>>marca;
    cout<<"Ingrese el modelo de vehiculo: ";cin>>modelo;
    cout<<"Ingrese el area de venta del vehiculo: ";cin>>area_de_venta;
    cout<<"ingrese el telefono: ";cin>>telefono;
}

void Vendedor::mostrarDatos()
{
    Persona::mostrarDatos();
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Marca del vehiculo: "<<marca<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Area de venta del vehiculo: "<<area_de_venta<<endl;
    cout<<"Telefono: "<<telefono<<endl;
}

//TODO Jefe
class Jefe:public Vendedor
{
    private:
        string despacho;
    public:
        Jefe();
        void insertarDatos();
        void mostrarDatos();
};

Jefe::Jefe():Vendedor()
{
    despacho = "";
}

void Jefe::insertarDatos()
{
    Vendedor::insertarDatos();
    cout<<"Ingrese la ubicacion del despacho: ";cin>>despacho;
}
void Jefe::mostrarDatos()
{
    Vendedor::mostrarDatos();
    cout<<"Despacho: "<<despacho<<endl;
}
void menu();

int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}

void menu() 
{
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Empleado"<<endl;
        cout<<"2. Secretario"<<endl;
        cout<<"3. Vendedor"<<endl;
        cout<<"4. Jefe de zona"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 6))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        //system("clear"); //si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    Empleado a;
                    a.insertarDatos();
                    a.mostrarDatos();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    Secretario s;
                    s.insertarDatos();
                    s.mostrarDatos();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    Vendedor v;
                    v.insertarDatos();
                    v.mostrarDatos();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    Jefe j;
                    j.insertarDatos();
                    j.mostrarDatos();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}