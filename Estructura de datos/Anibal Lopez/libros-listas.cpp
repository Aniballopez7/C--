#include<iostream>
#include<string.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
struct Nodo
{
    int codigo;
    char titulo[30], autor[30];
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista, int codigo, char titulo[30], char autor[30])
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->codigo = codigo;
    strcpy(nuevoNodo->titulo,titulo);
    strcpy(nuevoNodo->autor,autor);
    Nodo *aux = lista;
    Nodo *aux2;
    while (aux != NULL)
    {
        aux2 = aux;
        aux = aux->siguiente;
    }
    if (lista == aux)
    {
        lista = nuevoNodo;
        nuevoNodo->siguiente = aux;
    }
    else
    {
        aux2->siguiente = nuevoNodo;
        nuevoNodo->siguiente = aux;
    }
    cout<<"\nSe registro el libro correctamente\n"<<endl;
}
void mostrarLista(Nodo *&lista)
{
    Nodo *actual = new Nodo();
    actual = lista;
    if (actual == NULL)
    {
        cout<<"\nNo se han registrado libros\n"<<endl;
    }
    else
    {    
        cout<<"Libros\n"<<endl;    
        while (actual != NULL)
        {
            cout<<"Titulo: "<<actual->titulo<<endl;
            cout<<"Autor: "<<actual->autor<<endl;
            cout<<"Codigo: "<<actual->codigo<<endl;
            cout<<"\n";
            actual =  actual->siguiente;
        }
    }
}
void buscarLibroCodigo(Nodo *&lista, int buscar)
{
    bool encontrado = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual != NULL) && (actual->codigo))
    {
        if (actual->codigo == buscar)
        {
            encontrado = true;
            if (encontrado == true)
            {
                cout<<"\nEl Libro se encontro\n"<<endl;
                cout<<"Informacion del libro:\n"<<endl;
                cout<<"Titulo: "<<actual->titulo<<endl;
                cout<<"Autor: "<<actual->autor<<endl;
                cout<<"Codigo: "<<actual->codigo<<endl;
                cout<<"\n";
            }
        }
        actual = actual->siguiente;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se encontro ese libro en la lista\n"<<endl;
    }
}
void buscarLibroAutor(Nodo *&lista, char autor[30])
{
    bool encontrado = false;
    int comparacion;
    Nodo *actual = new Nodo();
    actual = lista;
    cout<<"\nLibros del autor: "<<autor<<endl;
    while ((actual != NULL) && (actual->autor))
    {
        comparacion = strcmp(actual->autor, autor);
        if (comparacion == 0)
        {
            encontrado = true;
            if (encontrado == true)
            {
                cout<<"\nInformacion del libro:\n"<<endl;
                cout<<"Titulo: "<<actual->titulo<<endl;
                cout<<"Autor: "<<actual->autor<<endl;
                cout<<"Codigo: "<<actual->codigo<<endl;
            }
        }
        actual = actual->siguiente;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se encontraron libros de este autor\n"<<endl;
    }
    cout<<endl;
}
//? ver si se puede borrar un libro por autor y que se especifique cual exactamente por su nombre o codigo (agregar esta interesante)
void borrarLibroCodigo(Nodo *&lista, int borrar)
{
    bool encontrado = false;
    if (lista == NULL)
    {
        cout<<"\nNo se han registrado libros\n"<<endl;
    }
    else
    {        
        if (lista != NULL)
        {
            Nodo *aux = lista, *anterior = NULL;
            while ((aux != NULL) && (aux->codigo != borrar))
            {
                anterior = aux;
                aux = aux->siguiente;
            }
            if (aux == NULL)
            {
                encontrado = false;
            }
            else if (anterior == NULL)
            {
                lista = lista->siguiente;
                delete aux;
                encontrado = true;
            }
            else
            {
                anterior->siguiente = aux->siguiente;
                delete aux;
                encontrado = true;
            }
        }
        if (encontrado == true)
        {
            cout<<"\nEl libro se elimino de la lista\n"<<endl;
        }
        else
        {
            cout<<"\nEl libro no se encuentra en la lista\n"<<endl;
        }
    }
}
/*
void borrarLibroAutor(Nodo *&lista, char autor[30])
{
    int comparacion;
    bool encontrado = false;
    if (lista == NULL)
    {
        cout<<"\nNo se han registrado libros\n"<<endl;
    }
    else
    {        
        if (lista != NULL)
        {
            Nodo *aux = lista, *anterior = NULL;
            while ((aux != NULL) && (aux->autor != autor))
            {
                anterior = aux;
                aux = aux->siguiente;
            }
            if (aux == NULL)
            {
                encontrado = false;
            }
            else if (anterior == NULL)
            {
                lista = lista->siguiente;
                delete aux;
                encontrado = true;
            }
            else
            {
                anterior->siguiente = aux->siguiente;
                delete aux;
                encontrado = true;
            }
        }
        if (encontrado == true)
        {
            cout<<"\nEl libro se elimino de la lista\n"<<endl;
        }
        else
        {
            cout<<"\nEl libro no se encuentra en la lista\n"<<endl;
        }
    }
}
*/
void menu()
{
    Nodo *lista = NULL;
    bool repetir = false;
    int opc,buscar;
    int codigo;
    char r, titulo[30], autor[30];
    do
    {
        system("cls");
        cout<<"* MENU DEL PROGRAMA *\n"<<endl;
        cout<<"1. Insetar Libro a la lista"<<endl;
        cout<<"2. Mostrar Libros de la lista"<<endl;
        cout<<"3. Buscar Libro en la lista"<<endl;
        cout<<"4. Eliminar un libro de la lista"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>=6))
        {
            cout<<"Opcion invalida..."<<endl;
            system("pause");
            system("cls");
        }
        system("cls");  
        fflush(stdin);
        switch (opc)
        {
            case 1:
                {
                    cout<<"Ingrese el Titulo del libro: ";cin.getline(titulo,30,'\n');
                    cout<<"Ingrese el Autor del libro: ";cin.getline(autor,30,'\n');
                    cout<<"Ingrese el Codigo del libro: ";cin>>codigo;
                    insertarNodoLista(lista,codigo,titulo,autor);
                    do
                    {
                        cout<<"Desea ingresar otro libro: (s/n): ";cin>>r;
                        if ((r=='s')||(r=='S'))
                        {
                            fflush(stdin);
                            cout<<"\nIngrese el Titulo del libro: ";cin.getline(titulo,30,'\n');
                            cout<<"Ingrese el Autor del libro: ";cin.getline(autor,30,'\n');
                            cout<<"Ingrese el Codigo del libro: ";cin>>codigo;
                            insertarNodoLista(lista,codigo,titulo,autor);
                        }
                    } while ((r =='s')||(r=='S'));
                    cout<<"\n";
                }break;
            case 2:
                {
                    mostrarLista(lista);
                }break;
            case 3:
                {
                    if (lista == NULL)
                    {
                        cout<<"\nNo se han registrado libros\n"<<endl;
                    }
                    else
                    {    
                        do
                        {
                            system("cls");
                            cout<<"Que desea buscar ?\n"<<endl;
                            cout<<"1. Un solo libro"<<endl;
                            cout<<"2. Varios libros"<<endl;
                            cout<<"3. Salir\n"<<endl;
                            cout<<"Ingrese una opcion: ";cin>>opc;
                            cout<<endl;
                            fflush(stdin);
                            switch (opc)
                            {
                                case 1:
                                {
                                    cout<<"Ingrese el codigo del libro: ";cin>>buscar;
                                    buscarLibroCodigo(lista,buscar);
                                    system("pause");
                                }break;
                                case 2:
                                {
                                    fflush(stdin);
                                    cout<<"Ingrese el nombre del autor de los libros: ";cin.getline(autor,30,'\n');
                                    buscarLibroAutor(lista,autor);
                                    system("pause");
                                }break;
                                case 3:
                                {
                                    repetir = true;
                                }break;
                            }
                        } while (repetir != true);     
                        repetir = false;
                    }
                }break;
            case 4:
                {
                    if (lista == NULL)
                    {
                        cout<<"\nNo se han registrado libros\n"<<endl;
                    }
                    else 
                    {    
                        do
                        {
                            system("cls");
                            cout<<"Que desea eliminar ?\n"<<endl;
                            cout<<"1. Un solo libro"<<endl;
                            cout<<"2. Varios libros (En desarrollo)"<<endl;
                            cout<<"3. Salir\n"<<endl;
                            cout<<"Ingrese una opcion: ";cin>>opc;
                            cout<<endl;
                            fflush(stdin);
                            switch (opc)
                            {
                                case 1:
                                {
                                    cout<<"Ingrese el codigo del libro: ";cin>>buscar;
                                    borrarLibroCodigo(lista,buscar);
                                    system("pause");
                                }break;
                                /*
                                case 2:
                                {
                                    fflush(stdin);
                                    cout<<"Ingrese el nombre del autor de los libros: ";cin.getline(autor,30,'\n');
                                    borrarLibroAutor(lista,autor);
                                    system("pause");
                                }break;
                                */
                                case 3:
                                {
                                    repetir = true;
                                }break;
                            }
                        } while (repetir != true);     
                        repetir = false;
                    }
                }break;
            case 5:
                {
                    repetir = true;
                }break;
        }
        system("pause");
    } while (repetir != true);
}
int main()
{
    menu();
}