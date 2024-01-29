
#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int dato);
int main()
{
    Nodo *lista = NULL;
    insertarNodoLista(lista,7);
    insertarNodoLista(lista,78);
    insertarNodoLista(lista,4);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodoLista(Nodo *&lista, int dato)
{
    Nodo *nuevoNodo = new Nodo;
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
    cout<<"EL dato "<<dato<<" se a insertado correctamente"<<endl;
}