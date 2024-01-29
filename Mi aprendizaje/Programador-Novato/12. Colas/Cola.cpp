//TODO: las colas son una estructura de datos FIFO first in first out 
//TODO: quiere decir que el primero que entra en el primero que sale
//TODO: las pilas se usar en algoritmos de busqueda en anchura (BFS)
#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front, Nodo *&back,int dato);
int main()
{
    Nodo *front = NULL;
    Nodo *back = NULL;
    insertarNodo(front,back,5);
    insertarNodo(front,back,8);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodo(Nodo *&front, Nodo *&back,int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front==NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"Se inserto un nodo con el dato "<<dato<<endl;
}
