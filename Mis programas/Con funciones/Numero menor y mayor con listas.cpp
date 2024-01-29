#include<iostream>
using namespace std;
struct Lista
{
    int dato;
    Lista *siguiente;
};
void insertarLista(Lista *&lista,int numero);
void mostrarLista(Lista *&lista);
void numeroMayorMenor(Lista *&lista);
int main()
{
    Lista *lista = NULL;
    int numero;
    char respuesta;
    bool salir = false;
    do
    {
        cout<<"Ingrese un numero: ";cin>>numero;
        insertarLista(lista,numero);
        cout<<"Desea ingresar otro numero (s/n): ";cin>>respuesta;
        if ((respuesta == 's') || (respuesta == 'S'))
        {
            cout<<"\n";
            salir = false;
        }
        else
        {
            salir = true;
        }
    } while (salir != true);
    mostrarLista(lista);
    numeroMayorMenor(lista);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarLista(Lista *&lista,int numero)
{
    Lista *nuevoNodo = new Lista();
    Lista *aux;
    nuevoNodo->dato = numero;
    nuevoNodo->siguiente = NULL;
    if (lista == NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        aux = lista;
        while (aux->siguiente != NULL)
        {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevoNodo;
    }
    cout<<"\nSe a ingresado el numero "<<numero<<" a la lista\n"<<endl;
}
void mostrarLista(Lista *&lista)
{
    Lista *clon = new Lista();
    clon = lista;
    int i = 0;
    cout<<"\n";
    while (clon != NULL)
    {
        cout<<"Elemento "<<i+1<<": "<<clon->dato<<endl;
        clon = clon->siguiente;
    }
    cout<<"\n";   
}
void numeroMayorMenor(Lista *&lista)
{
    int auxMayor = -99999,auxMenor = 999999;
    while (lista != NULL)
    {
        if (lista->dato > auxMayor)
        {
            auxMayor = lista->dato;
        }
        if (lista->dato < auxMenor)
        {
            auxMenor = lista->dato;
        }
        lista = lista->siguiente;
    }
    cout<<"El numero mayor de la lista es: "<<auxMayor<<endl;
    cout<<"El numero menor de la lista es: "<<auxMenor<<endl;
}