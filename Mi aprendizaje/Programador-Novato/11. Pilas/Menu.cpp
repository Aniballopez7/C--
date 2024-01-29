#include<iostream>
#include<conio.h>
using namespace std; 
struct Nodo
{
    char dato;
    Nodo *siguiente;
};
void crearNodos(Nodo *&pila,char r);
void mostrarNodos(Nodo *&pila);
int main()
{
    Nodo *pila = NULL;
    char r;
    int opc;
    do
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Insertar un numero a la pila"<<endl;
        cout<<"2. Mostrar la pila"<<endl;
        cout<<"3. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        if ((opc<1)||(opc>3))
        {
            cout<<"\nEsta opcion no es valida...."<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
            system("clear");
        }
        switch (opc)
        {
            case 1:
                {
                    cout<<"\nIngresa la letra que deseas agregar a la pila: ";cin>>r;
                    crearNodos(pila,r);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                    break;
                }
            case 2:
                {
                    cout<<"\nLos datos de la pila de datos son:\n"<<endl;
                    mostrarNodos(pila);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                    break;
                }
            case 3:
                {
                    return 0;
                    break;
                }
        }
    } while ((opc<=1)||(opc>=3));
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void crearNodos(Nodo *&pila,char r)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = r;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
    cout<<"\nSe inserto la letra "<<"'"<<r<<"'"<<" en la pila"<<endl;
}
void mostrarNodos(Nodo *&pila)
{
    while (pila != NULL)
    {
        cout<<pila->dato<<endl;
        pila = pila->siguiente;
    }
}