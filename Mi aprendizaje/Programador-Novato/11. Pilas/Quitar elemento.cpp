#include<iostream>
using namespace std; 
//TODO: estructura del nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&pila,int n);
void quitarNodo(Nodo *&pila,int &n);
int main()
{
    Nodo *pila = NULL; //TODO: asi se crea una pila
    int n;
    insertarNodo(pila,5);
    insertarNodo(pila,6);
    insertarNodo(pila,7);
    cout<<"\n";
    while (pila != NULL)
    {
        quitarNodo(pila,n);
        if (pila!=NULL)
        {
            cout<<n<<", ";
        }
        else{
            cout<<n<<". ";
        }
    }
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
    cout<<"EL dato "<<n<< " fue ingresado correctamente"<<endl;
}
void quitarNodo(Nodo *&pila,int &n)
{
    //TODO: asi se borra un elemento de un nodo
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}