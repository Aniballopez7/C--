//? realic una funcion que de
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};
Nodo *arbol = NULL;
Nodo *crearNodo(int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->der =  NULL;
    nuevoNodo->izq = NULL;
}
void insertarNodo(Nodo *&arbol, int dato)
{
    if (arbol == NULL)
    {
        Nodo *nuevoNodo = crearNodo(dato);
        arbol = nuevoNodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (dato < valorRaiz)
        {
            insertarNodo(arbol->izq,dato);
        }
        else
        {
            insertarNodo(arbol->der,dato);
        }
    }
    cout<<"Se Ingreso el numero "<<arbol->dato<<endl;
}
void mostrarArbol(Nodo *&arbol,int cont)
{
    int suma = 0;
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der,cont+1);
        for (int i = 0; i < cont; i++)
        {
            cout<<"         ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);
    }
}
bool buscarArbol(Nodo *&arbol,int num)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == num)
    {
        return true;
    }
    else if (num < arbol->dato)
    {
        return buscarArbol(arbol->izq,num);
    }
    else
    {
        return buscarArbol(arbol->der,num);
    }
}
//* primera funcion
void niverlArbol(Nodo *&arbol,int numero)
{

}
//* segunda funcion
int sumarArbol(Nodo *&arbol)
{
    int suma;
    if (arbol == NULL)
    {
        suma = 0;
    }
    else
    {
        suma = arbol->dato + sumarArbol(arbol->der) + sumarArbol(arbol->izq);
    }
    return suma;
}
//todo menu ----------------------------------------------------
void  menu()
{
    int opc, numero, suma = 0;
    bool salir = false;
    char r;
    srand(time(NULL));
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t***********************"<<endl;
        cout<<"\t\t\t\t\t*        MENU         *"<<endl;
        cout<<"\t\t\t\t\t***********************\n"<<endl;
        cout<<" 1. INSERTAR UN NUMERO AL ARBOL\n"<<endl;
        cout<<" 2. MOSTRAR ARBOL\n"<<endl;
        cout<<" 3. BUSCAR UN NUMERO EN EL ARBOL\n"<<endl;
        cout<<" 4. NIVEL DE UN NUMERO EN EL ARBOL\n"<<endl;
        cout<<" 5. SUMAR TODOS LOS NUMEROS DEL ARBOL\n"<<endl;
        cout<<" 6. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin>>opc;
        system("cls");
        if ((opc<1)||(opc>5))
        {
            system("COLOR 4");
            cout<<"\n\n\n\t\t\t\t\t********************"<<endl;
            cout<<"\t\t\t\t\t* OPCION INVALIDA. *"<<endl;
            cout<<"\t\t\t\t\t********************\n\b"<<endl;
        }
        switch (opc)
        {
            case 1: 
                {
                    numero = rand() % 500;
                    insertarNodo(arbol,numero);
                }break;
            case 2:
                {
                    mostrarArbol(arbol,0);
                }break;
            case 3:
                {
                    cout<<"Ingrese el numero que desea buscar en el arbol ";cin>>numero;
                    buscarArbol(arbol,numero);
                }break;
            case 4:
                {
                    cout<<"Ingrese el nivel que desea bu";
                }break;
            case 5:
                {
                    mostrarArbol(arbol,0);
                    cout<<"\n\n"<<endl;
                    if (arbol != NULL)
                    {
                        suma = sumarArbol(arbol);
                        cout<<"Suma del arbol: "<<suma<<endl;
                    }
                    else
                    {
                        cout<<"No hay numeros en el arbol"<<endl;
                    }
                    
                }break;
            case 6:
                {
                    salir = true;
                }break;
        }
        system("pause");
    }while(salir != true);
}
int main() 
{
    menu();
}