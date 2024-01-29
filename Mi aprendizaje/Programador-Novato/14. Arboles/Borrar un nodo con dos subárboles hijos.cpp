#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;  //TODO: se le agrega un nodo padre
};
Nodo *arbol = NULL;
Nodo *crearNodo(int dato, Nodo *padre);  //TODO: se le agrega un puntero padre
void insertarNodo(Nodo *&arbol, int dato, Nodo *padre);  //TODO: se le agrega un puntero padre
void mostrarArbol(Nodo *&arbol,int cont);
bool buscarArbol(Nodo *&arbol,int num);
void preOrden(Nodo *&arbol);
void inOrden(Nodo *&arbol);
void postOrden(Nodo *&arbol);
void buscarParaEliminar(Nodo *&arbol, int eliminar);
void eliminarNodo(Nodo *&arbol);
Nodo *minimoNodo(Nodo *&arbol);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    int dato,opc,num;
    bool salir = false;
    do
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Insertar un numero"<<endl;
        cout<<"2. Mostrar arbol"<<endl;
        cout<<"3. Bucar numero en el arbol"<<endl;
        cout<<"4. Mostrar arbol en pre-orden"<<endl;
        cout<<"5. Mostrar arbol en In-orden"<<endl;
        cout<<"6. Mostrar arbol en Post-orden"<<endl;
        cout<<"7. Ingresar datos de ejemplo"<<endl;
        cout<<"8. Eliminar un elemento del arbol"<<endl;
        cout<<"9. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        switch (opc)
        {
        case 1:
            {
                cout<<"Ingresa un numero: ";cin>>dato;
                insertarNodo(arbol,dato,NULL);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 2:
            {
                cout<<"Motrando arbol\n"<<endl;
                mostrarArbol(arbol,0);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 3:
            {
                cout<<"Ingrese el numero que desea buscar: ";cin>>num;
                cout<<"\n";
                if (buscarArbol(arbol,num) == true)
                {
                    cout<<"El numero "<<num<<" fue encontrado en el arbol"<<endl;
                }
                else
                {
                    cout<<"El numero "<<num<<" no fue encontrado en el arbol"<<endl;
                }
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 4:
            {
                cout<<"Arbol en Pre-orden\n"<<endl;
                preOrden(arbol);
                cout<<"\n";
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 5:
            {
                cout<<"Arbol en In-orden\n"<<endl;
                inOrden(arbol);
                cout<<"\n";
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 6:
            {
                cout<<"Arbol en Post-orden\n"<<endl;
                postOrden(arbol);
                cout<<"\n";
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 7:
            {
                insertarNodo(arbol,10,NULL);
                insertarNodo(arbol,5,NULL);
                insertarNodo(arbol,3,NULL);
                insertarNodo(arbol,8,NULL);
                insertarNodo(arbol,6,NULL);
                insertarNodo(arbol,9,NULL);
                insertarNodo(arbol,7,NULL);
                insertarNodo(arbol,15,NULL);
                insertarNodo(arbol,12,NULL);
                insertarNodo(arbol,20,NULL);
                insertarNodo(arbol,30,NULL);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 8:
            {
                cout<<"Ingresa el valor que quieres eliminar: ";cin>>dato;
                buscarParaEliminar(arbol,dato);
                system("\nread -p '\nPresiona Enter para continuar...' var");
                system("clear");
            }break;
        case 9:
            {
                salir = true;
            }break;
        }
    } while (salir != true);
}
Nodo *crearNodo(int dato, Nodo *padre)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->der =  NULL;
    nuevoNodo->izq = NULL;
    nuevoNodo->padre = padre; // TODO: se le agrega padre
}
void insertarNodo(Nodo *&arbol, int dato, Nodo *padre)
{
    if (arbol == NULL)
    {
        Nodo *nuevoNodo = crearNodo(dato,padre); // TODO: se le agrega padre
        arbol = nuevoNodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (dato < valorRaiz)
        {
            insertarNodo(arbol->izq,dato,arbol);
        }
        else
        {
            insertarNodo(arbol->der,dato,arbol);
        }
    }
}
void mostrarArbol(Nodo *&arbol,int cont)
{
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
void preOrden(Nodo *&arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}
void inOrden(Nodo *&arbol)
{
     //TODO: este metodo de recorrido se hace de izquierda a derecha
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
    
}
void postOrden(Nodo *&arbol)
{
     //TODO: este metodo de recorrido se hace nodo izquierdo luego el derecho y por ultimo la raiz
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
    
}
void buscarParaEliminar(Nodo *&arbol, int eliminar)
{
    if (arbol == NULL)
    {
        return;
    }
    else if (eliminar < arbol->dato)
    {
        buscarParaEliminar(arbol->izq,eliminar);
    }
    else if (eliminar > arbol->dato)
    {
        buscarParaEliminar(arbol->der,eliminar);
    }
    else
    {
        eliminarNodo(arbol);
    }
}
void eliminarNodo(Nodo *&arbol)
{
    if (arbol->izq && arbol->der)
    {
        Nodo *minimo = minimoNodo(arbol->der);
        arbol->dato = minimo->dato;
        eliminarNodo(minimo);
    }
    
}
Nodo *minimoNodo(Nodo *&arbol)
{
    if (arbol == NULL)
    {
        return NULL;
    }
    else if(arbol->izq)
    {
        return minimoNodo(arbol->izq);
    }
    else
    {
        return arbol;
    }
}