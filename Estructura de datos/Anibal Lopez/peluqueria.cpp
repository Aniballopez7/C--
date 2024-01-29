//mauricio vargas c.i:30746124

#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct Nodo
{
    int num;
    Nodo *sig;
};
void insertarCola(Nodo *&front, Nodo *&back, int num)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->num = num;
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
    cout<<"\nSe inserto un nodo el numero "<<num<<"\n";
}
void mostrarNodos(Nodo *&front)
{
    while (front != NULL)
    {
        cout<<front->num<<endl;
        front = front->sig;
    }
}
void eliminarNodo(Nodo *&front, Nodo *&back, int &num)
{
    num = front->num;
    Nodo *aux = front;
    if (front == back)
    {
        front = NULL;
        back = NULL;
    }
    else
    {
        front = aux->sig;
    }
    delete aux;
}
void buscarCola(Nodo *&front, Nodo *&back, int num)
{

}
void menu()
{
    Nodo *front = NULL, *back = NULL, *front1 = NULL, *back1 = NULL,*front2 = NULL, *back2 = NULL;
	int opc, num;
    char r;
    bool salir = false;
    srand(time(NULL));
    do
    {
        system("cls");
        cout<<"\t\t\t\t*********************"<<endl;
        cout<<"\t\t\t\t* PELUQUERIA *"<<endl; 
        cout<<"\t\t\t\t*********************\n"<<endl;
        cout<<"1. GENERAR VENTAS DE PELUQUEROS\n"<<endl;
        cout<<"2. VENTAS SEGUN PELUQUERO\n"<<endl;
        cout<<"3. ELIMINAR\n"<<endl;
        cout<<"4. CUAL PELUQUERO VENDE MAS\n"<<endl;
        cout<<"5. SALIR\n"<<endl;
        cout<<"INGRESAR UNA OPCION: ";cin>>opc;
        cout<<"\n";
        system("cls");
        if ((opc < 1)||(opc > 5))
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
                        num = rand() % 3;
                        insertarCola(front,back,num);
                        srand(time(NULL));
                        num = rand() % 3;
                        insertarCola(front1,back1,num);
                        if ((r == 's') || (r == 'S'));
                        {
                            cout<<"\nDesea ingresar otro dato a la cola (s/n): ";cin>>r;
                        }
                    } while ((r == 's') || (r == 'S'));
                }break;
            case 2:
                {
                    cout<<"\nLos datos de la cola son:\n"<<endl;
                    cout<<"\nCola 1:\n"<<endl;
                    mostrarNodos(front);
                    cout<<"\nCola 1:\n"<<endl;
                    mostrarNodos(front1);
                }break;
            case 3:
                {
                    eliminarNodo(front,back,num);
                }break;
            case 4:
                {
                    salir = true;
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
        cout<<"\n";
        system("pause");
    } while (salir != true);
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
}
