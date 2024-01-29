#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front,Nodo *&back,int dato);
void mostrarModo(Nodo *&front);
int main(){
    Nodo *front = NULL;
    Nodo *back = NULL;
    int opc,dato;
    do
    {
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"1. Insetar Nodo a la cola"<<endl;
        cout<<"2. Mostrar cola"<<endl;
        cout<<"3. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>3))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc){
            case 1:
                {
                    cout<<"Ingrese un numero: ";cin>>dato;
                    cout<<"\n";
                    insertarNodo(front,back,dato);
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 2:
                {
                    cout<<"Elementos de la cola:\n"<<endl;
                    mostrarModo(front);
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 3:
                {
                    return 0;
                }break;
        }
    } while ((opc<=1)||(opc>3));
}
void insertarNodo(Nodo *&front,Nodo *&back,int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front==back)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"Se inserto el nodo "<<dato<<endl;
}
void mostrarModo(Nodo *&front)
{
    while (front!=NULL)
    {
        cout<<front->dato<<endl;
        front=front->siguiente;
    }
    
}