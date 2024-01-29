#include<iostream>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarCola(Nodo *&front, Nodo *&back, int dato);
void mostrarCola(Nodo *&front);
int main()
{
    Nodo *front=NULL;
    Nodo *back=NULL;
    insertarCola(front,back,5);
    insertarCola(front,back,8);
    insertarCola(front,back,9);
    mostrarCola(front);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarCola(Nodo *&front, Nodo *&back, int dato)
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
void mostrarCola(Nodo *&front)
{
    while (front != NULL)
    {
        cout<<"Datos: "<<front->dato<<endl;
        front = front->siguiente; //TODO: para que pase al siguiente elemento de la cola
    }
}