#include<iostream>
#include<string.h>
#include <clocale>
using namespace std;
struct Vendedores
{
    char nombre[100];
    int codigo;
}vendedores[10];

struct Productos
{
    char nombre[100];
    char descripcion[100];
    int codigo;
    int cantidad;
}productos[10];

void agregarVendedor(int &nVendedores);
void agregarProducto(int &nProductos);
void consultarVendedor(int &nVendedores);
void listarProductos(int &nProductos);
void menu();
int nProductos, nVendedores;
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    
    int opc;
    bool regresar = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"*********************\n"<<endl;
        cout<<"1. Registrar vendedores"<<endl;
        cout<<"2. Registrar productos"<<endl;
        cout<<"3. Consultar datos de vendedores"<<endl;
        cout<<"4. Listar productos"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>5))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc)
        {
            case 1:
                {
                    cout<<"NO DEJE ESPACIOS ENTRE NOMBRE Y APELLIDO"<<endl;
                    cout<<"\n¿ Cuantos Vendedores desea agregar ? : ";cin>>nVendedores;
                    cout<<"\n";
                    agregarVendedor(nVendedores);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    cout<<"NO DEJE ESPACIOS EN LA DESCRIPCION PONGA DESCRIPCIONES CORTAS\n"<<endl;
                    cout<<"¿ Cuantos Productos desea agregar ? : ";cin>>nProductos;
                    cout<<"\n";
                    agregarProducto(nProductos);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    
                    consultarVendedor(nVendedores);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    listarProductos(nProductos);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    regresar = true;
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
        }
    } while (regresar != true);
}
void agregarVendedor(int &nVendedores)
{
    for (int i = 0; i < nVendedores; i++)
    {
        cout<<"Ingrese el nombre del vendedor: ";cin>>vendedores[i].nombre;
        vendedores[i].codigo = rand()%100;
    }
        if (nVendedores == 1)
    {
        cout<<"\nVendedores agregados correctamente\n"<<endl;
    }
    else
    {
        cout<<"\nVendedores agregados correctamente\n"<<endl;
    }
}
void agregarProducto(int &nProductos)
{
    for (int i = 0; i < nProductos; i++)
    {
        cout<<"Ingrese el nombre del producto: ";cin>>productos[i].nombre;
        cout<<"Ingrese la cantidad (Stock) del producto: ";cin>>productos[i].cantidad;
        cout<<"Ingrese la descripcion del producto: ";cin>>productos[i].descripcion;
        productos[i].codigo = rand()%100;
        cout<<"\n";
    }
    if (nProductos == 1)
    {
        cout<<"\nProducto agregado correctamente"<<endl;
    }
    else
    {
        cout<<"\nProductos agregados correctamente"<<endl;
    }
}
void consultarVendedor(int &nVendedores)
{
    cout<<"Vendedores:\n"<<endl;
    for (int i = 0; i < nVendedores; i++)
    {
        cout<<"Nombre: "<<vendedores[i].nombre<<" - Codigo: "<<vendedores[i].codigo<<endl;
    }
}
void listarProductos(int &nProductos)
{
    cout<<"Productos:\n"<<endl;
    for (int i = 0; i < nProductos; i++)
    {
        cout<<"Nombre: "<<productos[i].nombre<<" - Codigo: "<<productos[i].codigo;
        cout<<" - Cantidad: "<<productos[i].cantidad<<" - Descripcion: "<<productos[i].descripcion<<endl;
    }
}