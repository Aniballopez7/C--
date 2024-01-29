#include<iostream>
using namespace std;
class Nodo
{
    public:
        int dato;
        Nodo *siguiente;
        Nodo()
        {
            dato = 0;
            siguiente = NULL;
        }
};
class Pilas
{
    public:
        Nodo *pila = NULL;
        int tam;
        void insertar(int dato)
        {
            Nodo *nuevoNodo = new Nodo();
            nuevoNodo->dato = dato;
            nuevoNodo->siguiente = pila;
            pila = nuevoNodo;
            cout<<"\nNodo "<<dato<<" insertado correctamente"<<endl;
            tam++;
        }
        void imprimir()
        {
            Nodo *aux = pila;
            int i = tam;
            if (aux == NULL)
            {
                cout<<"La pila esta vacia\n"<<endl;
            }
            else
            {
                cout<<"Pila:\n"<<endl;
                while (aux != NULL)
                {
                    cout<<"Elemento "<<i--<<": "<<aux->dato<<endl;
                    aux = aux->siguiente;
                }
            }
        }
        void encontrar(int n)
        {
            Nodo *aux = pila;

            while (aux != NULL)
            {
                if (aux->dato == n)
                {
                    cout<<"\nSe encontro el numero "<<n<<" en la pila"<<endl;
                }
                else if (aux->dato != n)
                {
                    cout<<"\nNo se encontro el numero "<<n<<" en la pila"<<endl;
                }
                aux = aux->siguiente;
            }
            
        }
};
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    Pilas pila;
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"1. Ingresar elemento"<<endl;
        cout<<"2. Imprimir elementos"<<endl;
        cout<<"3. Buscar elemento"<<endl;
        cout<<"4. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 4))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        switch (opc)
        {
            case 1:
                {
                    int dato;
                    cout<<"Ingrese un numero: ";cin>>dato;
                    pila.insertar(dato);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    pila.imprimir();
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    int n;
                    cout<<"Ingresa el numero que desea buscar: ";cin>>n;
                    pila.encontrar(n);
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}