#include <iostream>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int n);
void mostrarLista(Nodo *&lista);
bool buscarNodo(Nodo *&lista, int buscar);
int main(){
    Nodo *lista = NULL;
    bool repetir = false;
    int opc,n,buscar;
    char r;
        do{
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"1. Insetar Nodo a la lista"<<endl;
        cout<<"2. Mostrar la lista"<<endl;
        cout<<"3. Buscar en la lista"<<endl;
        cout<<"4. Eliminar elemento de la lista"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>=6))
        {
            cout<<"Opcion invalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc){
            case 1:
                {
                    do
                    {
                        cout<<"\nDesea insertar un numero: (s/n): ";cin>>r;
                        if ((r=='s')||(r=='S'))
                        {
                            cout<<"Ingrese un numero: ";cin>>n;
                            insertarNodoLista(lista,n);
                        }
                    } while ((r=='s')||(r=='S'));
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 2:
                {
                    cout<<"Lista\n"<<endl;
                    mostrarLista(lista);
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 3:
                {
                    int buscar;
                    cout<<"Ingrese el numero que desea buscar: ";cin>>buscar;
                    cout<<"\n";
                    if (buscarNodo(lista,buscar)==true)
                    {
                        cout<<"El valor "<<buscar<<" esta en la lista"<<endl;
                    }
                    else
                    {
                        cout<<"El valor "<<buscar<<" no esta en la lista"<<endl;
                    }
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para volver al menu...' var");
                    system("clear");
                }break;
            case 5:
                {
                    repetir = true;
                    return 0;
                }break;
        }
    } while (repetir!=true);
}
void insertarNodoLista(Nodo *&lista, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    Nodo *aux = lista;
    Nodo *aux2;
    while ( (aux!=NULL) && (aux->dato<n) )
    {
        aux2=aux;
        aux=aux->siguiente;
    }
    if(lista==aux)
    {
        lista=nuevoNodo;
        nuevoNodo->siguiente=aux;
    }
    else
    {
        aux2->siguiente=nuevoNodo;
        nuevoNodo->siguiente=aux;
    }
    cout<<"\nEl numero "<<n<<" se a insertado correctamente"<<endl;
}
void mostrarLista(Nodo *&lista)
{
    Nodo *actual=new Nodo();
    actual=lista;
    while (actual!=NULL)
    {
        cout<<"Valor del nodo es: "<<actual->dato<<"\n";
        actual=actual->siguiente;
    }
}
bool buscarNodo(Nodo *&lista, int buscar)
{
    bool encontrado = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual!=NULL)&&(actual->dato<=buscar))
    {
        if (actual->dato==buscar)
        {
            encontrado = true;
        }
        actual = actual->siguiente;
    }
    return encontrado;
}