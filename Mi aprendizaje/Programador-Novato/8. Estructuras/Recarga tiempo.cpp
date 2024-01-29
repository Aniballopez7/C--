#include<iostream>
using namespace std; 

struct clientes
{
    char nombres[65];
    int tiempoAire;
}cliente[3]={{"Juana"},{"Maria"},{"Kuso"}};

int main()
{
    int tiempoAire=0,id;
    char opc;
    cout<<"Lista de clientes\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Id: "<<i<<" Nombre: "<<cliente[i].nombres<<endl;
    }
    regresar:
    cout<<"\nIngresa el Id del empleado que se le recargara: ";cin>>id;
    if (cliente[id].nombres[0]=='\n')
    {
        cout<<"\nEste cliente no existe\n"<<endl;
        goto regresar;
    }
    else{
        cout<<"\nIngresa el saldo del cliente "<<cliente[id].nombres<<": ";cin>>tiempoAire;
        cliente[id].tiempoAire = cliente[id].tiempoAire + tiempoAire;
        cout<<"\nSi desea recargar mas tiempo aire a otros clientes (s)\n";
        cout<<"Si desea ver la lista de los clientes y salir (n o cualquier letra): ";cin>>opc;
        if (opc=='s')
        {
            goto regresar;
        }
        else{
            cout<<"Tiempo aire de los clientes\n"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout<<"Nombre: "<<cliente[i].nombres<<" Id: "<<i<<" Tiempo aire: "<<cliente[i].tiempoAire<<endl;
            }
        }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
}