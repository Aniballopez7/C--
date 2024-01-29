/*Crear una lista de N elementos de tipo real, mostrar todos los elementos ingresados a la lista, primitivas a usar 

crear nodo
estructura del nodo
insertar nodos en la lista
mostrar elemetnos de la lista

*/
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
void numeroMayorMenor(Nodo *&lista,int &mayor,int &menor);
bool eliminarNodoLista(Nodo *&lista,int numeroBorrar);
int main(){
    Nodo *lista = NULL;
    bool repetir = false;
	int mayor, menor;
    int opc,n,buscar;
    char r;
        do{
			system("cls");
			cout<<"* MENU DEL PROGRAMA *"<<endl;
			cout<<"1. Insetar Nodo a la lista"<<endl;
			cout<<"2. Mostrar la lista"<<endl;
			cout<<"3. Buscar en la lista"<<endl;
			cout<<"4. Eliminar elemento de la lista"<<endl;
			cout<<"5. Numero mayor de la lista"<<endl;
			cout<<"6. Salir\n"<<endl;
			cout<<"Ingrese una opcion: ";cin>>opc;
			cout<<"\n";
			if ((opc<1)||(opc>6))
			{
				cout<<"Opcion invalida..."<<endl;
				system("pause");
				system("cls");
			}
			system("cls");  
			switch (opc){
				case 1:
					{
						cout<<"Ingrese un numero: ";cin>>n;
						do
						{
							cout<<"\nDesea insertar un numero: (s/n): ";cin>>r;
							if ((r=='s')||(r=='S'))
							{
								cout<<"\nIngrese un numero: ";cin>>n;
								insertarNodoLista(lista,n);
							}
						} while ((r=='s')||(r=='S'));
						system("pause");
						system("cls");
					}break;
				case 2:
					{
						cout<<"Lista\n"<<endl;
						mostrarLista(lista);
						system("pause");
						system("cls");
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
						system("pause");
						system("cls");
					}break;
				case 4:
					{
						cout<<"Ingrese el numero que desea eliminiar: ";cin>>n;
						if(eliminarNodoLista(lista,n)==true)
						{
							cout<<"El numero "<<n<<" ha sido eliminado de la lista\n";
						}
						else
						{
							cout<<"El numero "<<n<<" no ha sido encontrado\n";
						}
						system("pause");
						system("cls");
					}break;
				case 5:
					{
						numeroMayorMenor(lista,mayor,menor);
						cout<<"Numero mayor: "<<mayor<<endl;
						cout<<"Numero menor: "<<menor<<endl;
						system("pause");
					}break;
				case 6:
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
void numeroMayorMenor(Nodo *&lista,int &mayor,int &menor)
{
    int auxMayor=-99999,auxMenor=99999;
    while (lista!=NULL)
    {
        if (lista->dato > auxMayor)
        {
            auxMayor = lista->dato;
        }
        if (lista->dato < auxMenor)
        {
            auxMenor = lista->dato;
        }
        lista=lista->siguiente;
    }
    cout<<"\n";
    mayor = auxMayor;
    menor = auxMenor;
}
bool eliminarNodoLista(Nodo *&lista,int numeroBorrar){
    bool encontrado=false;
    if(lista!=NULL){
        Nodo *aux=lista,*anterior=NULL;
        while ( (aux!=NULL) && (aux->dato!=numeroBorrar) )
        {
            anterior=aux;
            aux=aux->siguiente;
        }
        if(aux==NULL)
        {
            encontrado=false;
        }
        else if(anterior==NULL)
        {
            lista=lista->siguiente;
            delete aux;
            encontrado=true;
        }
        else
        {
            anterior->siguiente=aux->siguiente;
            delete aux;
            encontrado=true;
        }
    }
    return encontrado;
} 