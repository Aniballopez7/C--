/* 
TODO: ejercicio 1
Codificar un procedimiento en C++ que, recibiendo como parámetros una pila del tipo Pila y un número 
entero N, devuelva la misma pila, en la que cada elemento de la pila original se repita n veces. 
Cada entero de la pila sólo podrá ser sacado una única vez. No se permite la utilización de estructuras 
de datos auxiliares. *

TODO: ejercicio 2
Se pide codificar un procedimiento en C++ que, recibiendo como parámetro una pila, inserte en el fondo 
de dicha pila el elemento más pequeño que en ella esté contenido, eliminando además todos aquellos 
elementos que coincidan con dicho elemento más pequeño. No se permite la utilización de estructuras 
de datos auxiliares. Cada elemento de la pila solamente podrá ser desapilado y apilado una vez. *

TODO: ejercicio 3

Se pide codificar un procedimiento en C++ que reciba como parámetro una cola y un numero X, 
inserte ese numero entre dos números pares de la cola, si existen.

TODO: ejercicio 4

Implementar un método booleano en C++ que, recibiendo como parámetros una cola y una pila e inicializadas 
ambas con un conjunto idéntico de números, devuelva true si el citado conjunto de números están en la 
pila y en la cola en el mismo orden. Al finalizar el proceso tanto la pila como la cola deberán permanecer 
con la estructura y contenidos iniciales. No se permite utilizar ninguna estructura de datos auxiliar.

*/

#include <iostream>
#include <clocale>
using namespace std;
struct Pila
{
    int dato;
    Pila *siguiente;
};
struct Cola
{
    int dato;
    Cola *siguiente;
};

//TODO: Variables universales
Pila *pila = NULL;
int dato;
char r;
//TODO: utilizado en el ejericicio 1
int n;
void ejericici1(Pila *&pila,int dato,int &n);
void insertarPila(Pila *&pila,int dato);
void mostrarPila(Pila *&pila,int &n);
//TODO: utilizado en el ejericicio 2
void ejercicio2(Pila *&pila,int dato);
void insertarPila2(Pila *&pila,int dato);
void mostrarPila2(Pila *&pila);
void menor(Pila *&pila,int &dato);
//TODO: utilizado en el ejericicio 3
//TODO: utilizado en el ejericicio 4
void menu();
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
void menu()
{
    int opc;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Ejercicio 1"<<endl;
        cout<<"2. Ejercicio 2"<<endl;
        cout<<"3. Ejercicio 3"<<endl;
        cout<<"4. Ejercicio 4"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 5))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        system("clear"); //si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    ejericici1(pila,dato,n);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    ejercicio2(pila,dato);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}
//TODO: Ejercicio 1
void insertarPila(Pila *&pila,int dato)
{
    Pila *nuevoNodo = new Pila();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
    cout<<"\nEl elemento "<<dato<< " fue ingresado correctamente"<<endl;
}
void mostrarPila(Pila *&pila,int &n)
{
    while (pila != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<pila->dato<<" ";
        }
        pila = pila->siguiente;
    }
    cout<<"\n";
}
void ejericici1(Pila *&pila,int dato,int &n)
{
    cout<<"Ingrese el numero de veces que se va a repetir la pila: ";cin>>n;
    do
    {
        cout<<"\nIngrese un elemento al nodo: ";cin>>dato;
        insertarPila(pila,dato);
        cout<<"\n¿ Quiere ingresar otro elemento al nodo (s/n) ?: ";cin>>r; 
        cout<<"\n";                       
    } while ((r == 's') || (r == 'S'));
    mostrarPila(pila,n);
}
//TODO: Ejercicio 2
void insertarPila2(Pila *&pila,int dato)
{
    Pila *nuevoNodo = new Pila();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}
void mostrarPila2(Pila *&pila)
{
    Pila *aux = pila;
    while (aux != NULL)
    {
        cout<<"Elemento: "<<aux->dato<<endl;
        aux = aux->siguiente;
    }
}
void menor(Pila *&pila,int &dato)
{
    int menor = 99999;
    Pila *aux = pila;
    while (aux  != NULL)
    {
        if (aux ->dato < menor) //Sacando el menor
        {
            menor = aux ->dato;
        }
        aux = aux->siguiente;
    }
    aux = pila;
    Pila *anterior = NULL;
        while ( (aux != NULL) && (aux->dato != menor) )
        {
            anterior = aux;
            aux = aux->siguiente;
        }
        if(anterior==NULL)
        {
            pila = pila->siguiente;
            delete aux;
        }
        else
        {
            anterior->siguiente = aux->siguiente;
            delete aux;
        }
}
void ejercicio2(Pila *&pila,int dato)
{
    insertarPila2(pila,5);
    insertarPila2(pila,-1);
    insertarPila2(pila,-2);
    insertarPila2(pila,6);
    insertarPila2(pila,7);
    mostrarPila2(pila);
    cout<<"\nPila quitandole el numero menor\n"<<endl;
    menor(pila,dato);
    mostrarPila2(pila);
}