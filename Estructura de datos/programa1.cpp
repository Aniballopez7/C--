#include<iostream>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarNodo(Nodo *&pila,int numero){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = numero;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}
void mostrarNodo(Nodo *&pila)
{
    if (pila == NULL)
    {
        cout<<"No hay elementos en la pila\n"<<endl;
    }
    else
    {
        while(pila != NULL)
        {
            cout<<pila->dato<<endl;
            pila = pila->siguiente;
        }
    }
}
int main() 
{
    Nodo *pila = NULL, *pila2 = NULL, *pila3 = NULL;
    int numero;
    cout<<"Elementos de Pila 1:\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Ingrese un numero: ";cin>>numero;
        insertarNodo(pila,numero);
    }
    cout<<"\nElementos de Pila 2:\n"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Ingrese un numero: ";cin>>numero;
        insertarNodo(pila2,numero);
    }
    while (pila2 != NULL)
    {
        insertarNodo(pila3, pila2->dato);
        pila2 = pila2->siguiente;
    }
    
    while (pila != NULL)
    {
        insertarNodo(pila3, pila->dato);
        pila = pila->siguiente;
    }
    cout<<"\nMostrando pila 3 anidada:\n"<<endl;
    mostrarNodo(pila3);
    cout<<endl;
    system("pause");
}