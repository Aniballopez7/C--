#include <iostream>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista,int dato);
void mostrarNodoLista(Nodo *&lista);
bool buscarNodoLista(Nodo *&lista,int buscar);
int main(){
    int dato;
    char respuesta;
    Nodo *lista=NULL;
    do
    {
        cout<<"Deseas insertar otro dato (s/n):";cin>>respuesta;
        if((respuesta=='s') || (respuesta=='S'))
        {
        cout<<"\nIngresa un dato en la lista: ";cin>>dato;
        cout<<"\n";
        insertarNodoLista(lista,dato);
        cout<<"\n";
        }
    } while ((respuesta=='s') || (respuesta=='S'));
    cout<<"\n";
    mostrarNodoLista(lista);
    cout<<"\nNumero a buscar: ";cin>>dato;
    cout<<"\n";
    if(buscarNodoLista(lista,dato)==true)
    {
        cout<<"El valor "<<dato<<" si esta en la lista\n";
    }
    else
    {
        cout<<"El valor "<<dato<<" no esta en la lista\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}
void insertarNodoLista(Nodo *&lista,int dato)
{
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    Nodo *aux1=lista;
    Nodo *aux2;
    while ((aux1!=NULL)&&(aux1->dato<dato))
    {
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lista==aux1)
    {
        lista=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }
    else
    {
        aux2->siguiente=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }
    cout<<"El dato "<<dato<<" se ha insertado\n";
}
void mostrarNodoLista(Nodo *&lista){
    Nodo *actual=new Nodo();
    actual=lista;
    while (actual!=NULL)
    {
        cout<<"Valor del nodo es "<<actual->dato<<"\n";
        actual=actual->siguiente;
    }
} 
bool buscarNodoLista(Nodo *&lista,int buscar)
{
    //TODO: asi se busca un elemento en una lista
    bool encontrado=false;
    Nodo *actual=new Nodo();
    actual=lista;
    while ((actual!=NULL)&&(actual->dato<=buscar))
    {
        if (actual->dato==buscar)
        {
            encontrado=true;
        }
        actual = actual->siguiente;
    }
    return encontrado;
}