#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int dato);
void mostrarLista(Nodo *&lista);
int main()
{
    Nodo *lista = NULL;
    insertarNodoLista(lista,7);
    insertarNodoLista(lista,6);
    insertarNodoLista(lista,4);
    mostrarLista(lista);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodoLista(Nodo *&lista, int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    Nodo *aux = lista;
    Nodo *aux2;
    while ((aux!=NULL)&&(aux->dato<dato))
    {
        aux2 = aux;
        aux = aux->siguiente;
    }
    if (lista==aux)
    {
        lista = nuevoNodo;
        nuevoNodo->siguiente = aux;
    }
    else
    {
        aux2 = nuevoNodo;
        nuevoNodo->siguiente = aux;
    }
    cout<<"El dato "<<dato<<" se a insertado correctamente"<<endl;
}
void mostrarLista(Nodo *&lista)
{
    //TODO: asi se muestran los datos de una lista
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual!=NULL)
    {
        cout<<"Dato: "<<actual->dato<<endl;
        actual = actual->siguiente; //TODO: para que pase al siguiente elemento de la lista
    }
}