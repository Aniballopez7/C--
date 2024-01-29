#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};
Nodo *arbol = NULL;
Nodo *crearNodo(int dato);
void insertarNodo(Nodo *&arbol,int dato);
void mostrarArbol(Nodo *&arbol,int cont);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    int dato,opc;
    bool salir = false;
    do
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Insertar un numero"<<endl;
        cout<<"2. Mostrar arbol"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        switch (opc)
        {
        case 1:
            {
                cout<<"Ingresa un numero: ";cin>>dato;
                insertarNodo(arbol,dato);
            }break;
        case 2:
            {
                cout<<"Motrando arbol\n"<<endl;
                mostrarArbol(arbol,0);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 5:
            {
                salir = true;
            }break;
        }
    } while (salir != true);
}
Nodo *crearNodo(int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;
}
void insertarNodo(Nodo *&arbol,int dato)
{
    if (arbol == NULL)
    {
        Nodo *nuevoNodo = crearNodo(dato);
        arbol = nuevoNodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (dato < valorRaiz)
        {
            insertarNodo(arbol->izq,dato);
        }
        else
        {
            insertarNodo(arbol->der,dato);
        }
    }
}
void mostrarArbol(Nodo *&arbol,int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der,cont+1);
        for (int i = 0; i < cont; i++)
        {
            cout<<"         ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);
    }
}