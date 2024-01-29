#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarCola(Nodo *&front, Nodo *&back, int dato,int &cont);
void mostrarCola(Nodo *&front);
void insertarCola2(Nodo *&front2, Nodo *&back2, int dato,int &cont2);
void mostrarCola2(Nodo *&front2);
void compararColas(Nodo *&front,Nodo *&front2,int cont,int cont2);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    Nodo *front = NULL;
    Nodo *back = NULL;
    Nodo *front2 = NULL;
    Nodo *back2 = NULL;
    int opc, dato, cont = 0, cont2 = 0;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Ingresar elementos en la cola 1"<<endl;
        cout<<"2. Ingresar elementos en la cola 2"<<endl;
        cout<<"3. Mostrar elementos de la cola 1 y cola 2"<<endl;
        cout<<"4. Comparar colas"<<endl;
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
                    do
                    {
                        cout<<"Ingrese un elemento al nodo: ";cin>>dato;
                        insertarCola(front,back,dato,cont);
                        cout<<"\n ¿ Quiere ingresar otro elemento al nodo (s/n) ?: ";cin>>r; 
                        cout<<"\n";                       
                    } while ((r == 's') || (r == 'S'));
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    do
                    {
                        cout<<"Ingrese un elemento al nodo: ";cin>>dato;
                        insertarCola2(front2,back2,dato,cont2);
                        cout<<"\n ¿ Quiere ingresar otro elemento al nodo (s/n) ?: ";cin>>r; 
                        cout<<"\n";  
                    } while ((r == 's') || (r == 'S'));
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    mostrarCola(front);
                    mostrarCola2(front2);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    compararColas(front,front2,cont,cont2);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}
//TODO: Cola 1
void insertarCola(Nodo *&front, Nodo *&back, int dato,int &cont)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front == NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"\nSe inserto el elemento correctamente el "<<dato<<endl;
    cont++;
}
void mostrarCola(Nodo *&front)
{
    Nodo *clon = new Nodo();
    clon = front;
    cout<<"Cola 1:\n"<<endl;
    while(clon != NULL)
    {
        cout<<"Datos: "<<clon->dato<<endl;
        clon = clon->siguiente;
    }
}
//TODO: Cola 2
void insertarCola2(Nodo *&front2, Nodo *&back2, int dato,int &cont2)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front2 == NULL)
    {
        front2 = nuevoNodo;
        back2 = nuevoNodo;
    }
    else
    {
        back2->siguiente = nuevoNodo;
        back2 = nuevoNodo;
    }
    cout<<"\nSe inserto el elemento correctamente"<<dato<<endl;
    cont2++;
}
void mostrarCola2(Nodo *&front2)
{
    Nodo *clon = new Nodo();
    clon = front2;
    cout<<"\nCola 2:\n"<<endl;
    while (clon != NULL)
    {
        cout<<"Dato: "<<clon->dato<<endl;
        clon = clon->siguiente;
    }
}
//TODO: Comparara colas
void compararColas(Nodo *&front,Nodo *&front2,int cont,int cont2)
{
    if (cont == cont2)
    {
        cout<<"Las colas pueden compararse porque tienen el mmismo numero de elementos"<<endl;
        while ((front != NULL)&&(front2 != NULL))
        {
            if ((front->dato == front2->dato))
            {
                front = front->siguiente;
                front2 = front2->siguiente;
                if ((front ==  NULL) && (front2 == NULL))
                {
                    cout<<"\nLas colas son iguales"<<endl;
                }
            }
            else
            {
                cout<<"\nLas colas no son iguales"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"Las colas no pueden compararse porque no tienen el mmismo numero de elementos"<<endl;
    }   
}