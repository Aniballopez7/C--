#include<iostream>
using namespace std; 
struct clientes
{
    char nombres[65];
    int tiempoAire;
}cliente[3];
int main()
{
    int tiempoAire=0,id,n;
    char opc;
    cout<<"Ingrese cuantos clientes van a estar en la siguiente lista: ";cin>>n;
    cout<<"\n";
    for (int i = 1; i < n+1; i++)
    {
        cout<<"Id: "<<i<<" Ingrese un nombre: ";cin>>cliente[i].nombres;
    }
    regresar:
    cout<<"\n";
    cout<<"Ingresa el id del empleado: ";cin>>id;
    if (cliente[id].nombres[0]=='\n')
    {
        cout<<"Este cliente no existe"<<endl;
        goto regresar;
    }
    else{
        cout<<"\nIngresa el saldo del cliente "<<cliente[id].nombres<<": ";cin>>tiempoAire;
        cliente[id].tiempoAire += tiempoAire;
        cout<<"\nSi desea recargar mas tiempo aire a otros clientes (s)\n";
        cout<<"Si desea ver la lista de los clientes y salir (n o cualquier letra): ";cin>>opc;
        if (opc=='s')
        {
            goto regresar;
        }
        else{
            cout<<"Tiempo aire de los clientes\n"<<endl;
            for (int i = 1; i < n+1; i++)
            {
                cout<<"Nombre: "<<cliente[i].nombres<<" Id: "<<i<<" Tiempo de aire: "<<cliente[i].tiempoAire<<endl;
            }
            
        }
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}