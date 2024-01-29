/*
Árbol Lleno: Es aquel que el que todos los nodos tiene cero o 2 hijos con excepción de la Raíz.

Árbol Completo: Árbol lleno hasta el penúltimo nivel. En el último nivel los nodos están agrupados 
a la izquierda.

Árbol degenerado: Es aquél en el que cada nodo sólo tiene un subárbol. Equivale a una lista.
*/
#include<iostream>
using namespace std;
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};
Nodo *arbol = NULL;
Nodo *crearNodo(int dato);
void insertarNodo(Nodo *&arbol,int dato);
void menu();
int main()
{
    menu();
    system("\nread -p 'Presione continuar para continuar...' var");
}
void menu()
{
    int dato,opc;
    bool salir = false;
    do
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Insertar un numero"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        switch (opc)
        {
        case 1:
            {
                cout<<"Ingresa un numero: ";cin>>dato;
                insertarNodo(arbol,dato);
            }break;
        case 5:
            {
                salir = true;
                break;
            }
        }
    } while (salir != true);
}
Nodo *crearNodo(int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;
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
