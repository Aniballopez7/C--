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
void insertarNodo(Nodo *&arbol, int dato);
void mostrarArbol(Nodo *&arbol,int cont);
bool buscarArbol(Nodo *&arbol,int num);
void preOrden(Nodo *&arbol);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    int dato,opc,num;
    bool salir = false;
    do
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Insertar un numero"<<endl;
        cout<<"2. Mostrar arbol"<<endl;
        cout<<"3. Bucar numero en el arbol"<<endl;
        cout<<"4. Mostrar arbol en pre-orden"<<endl;
        cout<<"8. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        switch (opc)
        {
        case 1:
            {
                cout<<"Ingresa un numero: ";cin>>dato;
                insertarNodo(arbol,dato);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 2:
            {
                cout<<"Motrando arbol\n"<<endl;
                mostrarArbol(arbol,0);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 3:
            {
                cout<<"Ingrese el numero que desea buscar: ";cin>>num;
                cout<<"\n";
                if (buscarArbol(arbol,num) == true)
                {
                    cout<<"El numero "<<num<<" fue encontrado en el arbol"<<endl;
                }
                else
                {
                    cout<<"El numero "<<num<<" no fue encontrado en el arbol"<<endl;
                }
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 4:
            {
                cout<<"\nArbol en pre-orden"<<endl;
                preOrden(arbol);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 8:
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
    nuevoNodo->der =  NULL;
    nuevoNodo->izq = NULL;
}
void insertarNodo(Nodo *&arbol, int dato)
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
bool buscarArbol(Nodo *&arbol,int num)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == num)
    {
        return true;
    }
    else if (num < arbol->dato)
    {
        return buscarArbol(arbol->izq,num);
    }
    else
    {
        return buscarArbol(arbol->der,num);
    }
}
void preOrden(Nodo *&arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}