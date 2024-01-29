#include<iostream>
using namespace std;
//TODO: estructura del nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&pila,int n);
void eliminarNodo(Nodo *&pila,int &n);
void mostrarNodo(Nodo *&pila);
int main()
{
    Nodo *pila = NULL; //TODO: asi se crea una pila
    int n;
    insertarNodo(pila,5);
    insertarNodo(pila,6);
    insertarNodo(pila,7);
    cout<<"\n";
    cout<<"Elementos de la pila\n"<<endl;
    mostrarNodo(pila);
    while (pila!=NULL)
    {
        eliminarNodo(pila,n);
    }
    mostrarNodo(pila);
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodo(Nodo *&pila,int n)
{
    //TODO: asi se crea un nodo...
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
    cout<<"Se ha insertado el numero "<<n<<" correctamente al nodo"<<endl;
}
void eliminarNodo(Nodo *&pila,int &n)
{
    //TODO: asi se borra un elemento de un nodo
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
void mostrarNodo(Nodo *&pila)
{
    while (pila!=NULL)
    {
        cout<<pila->dato<<endl;
        pila = pila->siguiente; //TODO: para que pase al siguiente elemento de la pila
    }
}