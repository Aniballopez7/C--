//todo: cree un programa donde se guarda informacion sobre colas de un cine, la pelicula es titanic 2, la ira de rose, hay 2 colas de personas. acomodar es el encargado de dejar entrar a las personasl sus instruciones son dejar pasar a las personas de mayor edad, si tienen la misma edad las personas de la cola 1 tienen preferencia.
#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Nodo
{
    int edad;
    Nodo *sig;
};
void insertarCola(Nodo *&front, Nodo *&back, int edad)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->edad = edad;
    nuevoNodo->sig = NULL;
    if (front == NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->sig = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"\nSe inserto un nodo el numero "<<edad<<"\n";
}
void mostrarNodos(Nodo *&front,Nodo *&front1)
{
    Nodo *clon = front, *clon1 = front1;
    cout<<"\nCola 1:\n"<<endl;
    while (clon != NULL)
    {
        cout<<clon->edad<<endl;
        clon = clon->sig;
    }
    cout<<"\nCola 2:\n"<<endl;
    while (clon1 != NULL)
    {
        cout<<clon1->edad<<endl;
        clon1 = clon1->sig;
    }
}
void pasoMayores(Nodo *&front,Nodo *&back,Nodo *&front1,Nodo *&back1, int edad)
{
    edad = front->edad;
    Nodo *aux = front, *aux1 = front1;
    if (front == back)
    {
        front = NULL;
        back = NULL;
    }
    else if(front->edad > 60)
    {
        front = aux->sig;
    }
}
void  menu()
{
    Nodo *front = NULL, *back = NULL, *front1 = NULL, *back1 = NULL;
    int opc,edad;
    bool salir = false;
    char r;
    srand(time(NULL));
    do
    {
        system("COLOR F");
        system("cls");
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t***********************"<<endl;
        cout<<"\t\t\t\t\t*        MENU         *"<<endl;
        cout<<"\t\t\t\t\t***********************\n"<<endl;
        cout<<" 1. INGRESAR EDADES A LA COLAS\n"<<endl;
        cout<<" 2. MOSTRAR EDADES\n"<<endl;
        cout<<" 3. PASO\n"<<endl;
        cout<<" 4. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin>>opc;
        system("cls");
        if ((opc<1)||(opc>4))
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
                    do
                    {
                        //codigo
                        edad = 20 + rand() % (101 - 20);
                        insertarCola(front,back,edad);
                        srand(time(NULL));
                        edad = 20 + rand() % (101 - 20);
                        insertarCola(front1,back1,edad);
                        if ((r == 's') || (r == 'S'));
                        {
                            cout<<"\nDesea ingresar otro dato a la pila (s/n): ";cin>>r;
                        }
                    } while ((r == 'S') || (r == 's'));
                    cout<<endl;
                }break;
            case 2:
                {
                    cout<<"\nLos datos de la pila de datos son:\n"<<endl;
                    mostrarNodos(front,front1);
                }break;
            case 3:
                {
                    pasoMayores(front,back,front1,back1,edad);
                }break;
            case 4:
                {
                    salir = true;
                }break;
        }
        system("pause");
    }while(salir != true);
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
}
