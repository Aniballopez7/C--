//todo Programa que realice una lista de empleados. Mostrar los registros cuyos sueldos son menores que 500$,aumentar
//todo en u n 7% el sueldo de los empleados que ganan menos de 500. Eliminar a los empleados con mas de 35 años de antiguedad
#include<iostream>
#include<string.h>
#include<cstring>
#include<stdlib.h>
#include <clocale>
using namespace std;
struct Nodo
{
    float sueldo;
    int year;
    Nodo *sig;
};
void insertarDatos(Nodo *&lista, float sueldo, int year)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->sueldo = sueldo;
    nuevoNodo->year = year;
    Nodo *aux = lista, *aux2;
    while (aux != NULL)
    {
        aux2 = aux;
        aux = aux->sig;
    }
    if (lista == aux)
    {
        lista = nuevoNodo;
        nuevoNodo->sig = aux;
    }
    else
    {
        aux2->sig = nuevoNodo;
        nuevoNodo->sig = aux;
    }
}
void mostrarLista(Nodo *&lista)
{
    Nodo *actual=new Nodo();
    actual=lista;
    while (actual!=NULL)
    {
        cout<<"\nSueldo: "<<actual->sueldo<<endl;
        cout<<"Año: "<<actual->year<<endl;
        actual=actual->sig;
    }
}
void eliminarElemento35(Nodo *&lista)
{
    bool encontrado = false;
    Nodo *aux=lista,*anterior=NULL;
    if(lista!=NULL){
        while ((aux != NULL) && (aux->year > 35) )
        {
            anterior = aux;
            aux=  aux->sig;
        }
        if(aux==NULL)
        {
            encontrado = false;
        }
        else if(anterior == NULL)
        {

            lista=lista->sig;
            delete aux;
            encontrado=true;   
        }
        else
        {
            anterior->sig = aux->sig;
            delete aux;
            encontrado=true;
        }
    }
    if (encontrado = true)
    {
        cout<<"\nSe eliminaron los empleados\n"<<endl;
    }
    else
    {
        cout<<"\nNo se encontraron empleados\n"<<endl;
    }
    encontrado = false;
}
void aumentarSueldo(Nodo *&lista)
{
    bool encontrado = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual != NULL)
    {
        if (actual->sueldo < 500)
        {
            encontrado = true;
            if (encontrado == true)
            {
                actual->sueldo = ((actual->sueldo * 0.07) + actual->sueldo);
            }
        }
        actual = actual->sig;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se encontraron empleados con un sueldo menor a 500\n"<<endl;
    }
}
void menu()
{
    Nodo *lista = NULL;
    bool salir = false;
    int opc, year;
    float sueldo;
    char r;
    do
    {
        system("cls");
        cout<<"1. Ingresar Datos"<<endl;
        cout<<"2. Mostrar datos"<<endl;
        cout<<"3. Eliminar mayores de 35"<<endl;
        cout<<"4. Aumentar 7\n"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        switch (opc)
        {
            case 1:
            {
                cout<<"Ingrese el sueldo: ";cin>>sueldo;
                cout<<"Ingrese años trabajados: ";cin>>year;
                insertarDatos(lista,sueldo,year);
                do
                {
                    cout<<"Desea ingresar otro trabajador (s/n) ? : ";cin>>r;
                    if ((r=='s')||(r=='S'))
                    {    
                        cout<<"Ingrese el sueldo: ";cin>>sueldo;
                        cout<<"Ingrese años trabajados: ";cin>>year;
                        insertarDatos(lista,sueldo,year);
                    }
                } while ((r=='s')||(r=='S'));
            }break;
            case 2:
            {
                mostrarLista(lista);
            }break;
            case 3:
            {
                eliminarElemento35(lista);
            }break;
            case 4:
            {
                aumentarSueldo(lista);
            }break;
            case 5:
            {
                salir = true;
            }break;
        }
        system("pause");
    } while (salir != true);
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
}