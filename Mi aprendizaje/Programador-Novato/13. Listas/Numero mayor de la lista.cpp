#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&lista,int numero);
void mostrarNodo(Nodo *&lista);
int numeroMayorMenor(Nodo *&lista,int &mayor,int &menor);
int main()
{
    Nodo *lista=NULL;
    int numero,mayor,menor;
    char r;
    bool salir=false;
    do
    {
        cout<<"Ingresa un numero: ";cin>>numero;
        insertarNodo(lista,numero);
        cout<<"Desea ingresar mas numeros (s/n): ";cin>>r;
        if ((r=='s')||(r=='S'))
        {
            cout<<"\n";
            salir = false;
        }
        else
        {
            salir = true;
        }
    } while (salir!=true);
    mostrarNodo(lista);
    numeroMayorMenor(lista,mayor,menor);
    cout<<"Numero mayor: "<<mayor<<endl;
    cout<<"Numero menor: "<<menor<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodo(Nodo *&lista,int numero)
{
    Nodo *nuevoNodo = new Nodo();
    Nodo *aux;
    nuevoNodo->dato=numero;
    nuevoNodo->siguiente=NULL;
    if (lista==NULL) //TODO: en caso de que la lista este vacia
    {
        lista = nuevoNodo;
    }
    else
    {
        aux=lista; 
        while (aux->siguiente!=NULL) //TODO: siempre y cuando aux siguiente sea diferente de nulo 
        {                            //TODO: esto es para cuando hay un solo elemento en la lista
            aux=aux->siguiente;
        }
        aux->siguiente=nuevoNodo;
    }
    cout<<"\nSe inserto el elemnto "<<numero<<" a la lista\n"<<endl;
}
void mostrarNodo(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    cout<<"\n";
    while (clon!=NULL)
    {
        cout<<"Datos: "<<clon->dato<<endl;;
        clon=clon->siguiente;
    }
}
int numeroMayorMenor(Nodo *&lista,int &mayor,int &menor)
{
    int auxMayor=-99999,auxMenor=99999;
    while (lista!=NULL)
    {
        if (lista->dato > auxMayor)
        {
            auxMayor = lista->dato;
        }
        if (lista->dato < auxMenor)
        {
            auxMenor = lista->dato;
        }
        lista=lista->siguiente;
    }
    cout<<"\n";
    mayor = auxMayor;
    menor = auxMenor;
}