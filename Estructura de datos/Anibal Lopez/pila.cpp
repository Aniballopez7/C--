
//TODO: las pilas son una estructura de datos LIFO list in first out 
//TODO: quiere decir que el ultimo que entra es primero que sasle
//TODO: las pilas se usar en algoritmos de busqueda profundidad (DFS)
#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void crearNodo(Nodo *&pila,int n);
void mostrarNodo(Nodo *&pila);
int main()
{
    Nodo *pila = NULL;
    int dato;
    char r;
    do
    {
        cout<<"Ingresa un numero: ";cin>>dato;
        crearNodo(pila,dato);
        cout<<"Desea ingresar datos o mas datos (s/n): ";cin>>r;
        cout<<"\n";
    } while ((r=='s')||(r=='S'));
    cout<<"\nDatos de la pila:\n"<<endl;
    mostrarNodo(pila);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void crearNodo(Nodo *&pila,int dato)
{
    Nodo *nuevonodo = new Nodo();
    nuevonodo->dato = dato;
    nuevonodo->siguiente = pila;
    pila = nuevonodo;
}
void mostrarNodo(Nodo *&pila)
{
    while (pila != NULL)
    {
        cout<<pila->dato<<endl;
        pila = pila->siguiente;
    }
}