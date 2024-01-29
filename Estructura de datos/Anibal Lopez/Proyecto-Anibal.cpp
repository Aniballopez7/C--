#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include<fstream>
#include<dirent.h>
using namespace std;
struct NodoJuegos
{
    string nombreJuego, genero;
    float precio;
    int stock, idJuego;
    NodoJuegos *siguiente;
};
struct juegosCliente
{
    int idJuego;
    string nombre, genero, usuario;
    juegosCliente *siguiente;
};
struct NodoClientes
{
    string password, usuario;
    int idCliente;
    float saldo;
    NodoClientes *siguiente;
    juegosCliente listaJuegosCliente;
};
NodoJuegos *listaJuegos = NULL;
NodoClientes *listaClientes = NULL;
juegosCliente *listajuegosClientes = NULL;
int idJuegos = 78, idCliente = 1309, contC = 0,cont = 0;
string Minusculas(string nombreJuego)
{
    for (int i = 0; i < nombreJuego.length(); i++)
    {
        nombreJuego[i] = tolower(nombreJuego[i]);
    }
    return nombreJuego;
}
// TODO JUEGOS --------------------------------------------------
void insertarJuego(NodoJuegos *&listaJuegos, string nombreJuego, string genero, float precio, int stock, int idJuegos)
{
    NodoJuegos *nuevoJuego = new NodoJuegos();
    nuevoJuego->nombreJuego = nombreJuego;
    nuevoJuego->genero = genero;
    nuevoJuego->precio = precio;
    nuevoJuego->stock = stock;
    nuevoJuego->idJuego = idJuegos;
    NodoJuegos *clonLista = listaJuegos, *clonLista2;
    while (clonLista != NULL)
    {
        clonLista2 = clonLista;
        clonLista = clonLista->siguiente;
    }
    if (listaJuegos == clonLista)
    {
        listaJuegos = nuevoJuego;
        nuevoJuego->siguiente = clonLista;
    }
    else
    {
        clonLista2->siguiente = nuevoJuego;
        nuevoJuego->siguiente = clonLista;
    }
    cout<<"\nSe registro el juego "<<nuevoJuego->nombreJuego<<" correctamente\n"<<endl;
}
void mostrarJuegos(NodoJuegos *&listaJuegos)
{
    NodoJuegos *clonLista = new NodoJuegos();
    clonLista = listaJuegos;
    cout<<"\n\t\t\t\tJUEGOS\n"<<endl;
    cout<<"\tNombre\t\tGenero\t\tPrecio\t\tStock\t\tId del Juego\n"<<endl;
    while (clonLista != NULL)
    {
        cout<<"\t"<<clonLista->nombreJuego<<"\t";
        cout<<"\t"<<clonLista->genero<<"\t";
        cout<<"\t"<<clonLista->precio<<"$\t";
        if (clonLista->stock == 0)
        {
            cout<<"\t"<<"No disponible"<<"\t";
        }
        else
        {
            cout<<"\t"<<clonLista->stock<<"\t";
        }
        cout<<"\t"<<clonLista->idJuego<<endl;
        cout<<"\n";
        clonLista = clonLista->siguiente;
    }
}
void eliminarJuegos(NodoJuegos *&listaJuegos, int idJuegos)
{
    bool encontrado = false;
    string nombre;
    NodoJuegos *clonLista = listaJuegos, *anterior = NULL;
    while ((clonLista != NULL) && (clonLista->idJuego != idJuegos))
    {
        anterior = clonLista;
        clonLista = clonLista->siguiente;
    }
    if (clonLista == NULL)
    {
        encontrado = false;
    }
    else if (anterior == NULL)
    {
        listaJuegos = listaJuegos->siguiente;
        nombre = clonLista->nombreJuego;
        delete clonLista;
        encontrado = true;
        cout<<"\nEl juego "<<nombre<<" se elimino correctamente\n"<< endl;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se encontró el juego\n"<< endl;
    }
}
void buscarJuego(NodoJuegos *&listaJuegos, int idJuegos)
{
    bool encontrado = false;
    NodoJuegos *clonLista = new NodoJuegos();
    clonLista = listaJuegos;
    while (clonLista != NULL)
    {
        if (clonLista->idJuego == idJuegos)
        {
            encontrado = true;
            if (encontrado = true)
            {
                cout<<"El juego de "<<clonLista->nombreJuego<<" se ha econtrado en el catalogo de juegos"<<endl;
                break;
            }
        }
        clonLista = clonLista->siguiente;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se ha econtrado en el catalogo de juegos\n"<<endl;
    }
}
void modificarJuego(NodoJuegos *&listaJuegos, int idJuegos)
{
    bool encontrado = false;
    NodoJuegos *clonLista = new NodoJuegos();
    clonLista = listaJuegos;
    while (clonLista != NULL)
    {
        if (clonLista->idJuego == idJuegos)
        {
            cout<<"\nSelecciono el juego "<<clonLista->nombreJuego<<endl;
            cout<<"\nIngrese el stock del juego: ";cin >> clonLista->stock;
            cout<<"\nIngrese el precio del juego: ";cin >> clonLista->precio;
            encontrado = true;
            break;
        }
        clonLista = clonLista->siguiente;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se ha encontrado el juego de "<<clonLista->nombreJuego<<"\n"<< endl;
    }
}
bool validarJuegoExistente(NodoJuegos *&listaJuego, string nombreJuego)
{
    bool encontrado = false;
    NodoJuegos *clonListaJuegos = new NodoJuegos();
    clonListaJuegos = listaJuego;
    while (clonListaJuegos != NULL)
    {
        if (clonListaJuegos->nombreJuego == nombreJuego)
        {
            encontrado = true;
            break;
        }
        clonListaJuegos = clonListaJuegos->siguiente;
    }
    return encontrado;
}
//TODO JUEGOS CLIENTES--------------------------------------------------
void listaJuegosClientes(juegosCliente *&listajuegosClientes, NodoJuegos *&listaJuegos, string nombre, string usuarioC)
{
    juegosCliente *nuevoJuego = new juegosCliente();
    nuevoJuego->nombre = nombre;
    nuevoJuego->genero = listaJuegos->genero;
    nuevoJuego->idJuego = listaJuegos->idJuego;
    nuevoJuego->usuario = usuarioC;
    juegosCliente *clonListaClientes = listajuegosClientes, *clonListaClientes2;
    while (clonListaClientes != NULL)
    {
        clonListaClientes2 = clonListaClientes;
        clonListaClientes = clonListaClientes->siguiente;
    }
    if (listajuegosClientes == clonListaClientes)
    {
        listajuegosClientes = nuevoJuego;
        nuevoJuego->siguiente = clonListaClientes;
    }
    else
    {
        clonListaClientes2->siguiente = nuevoJuego;
        nuevoJuego->siguiente = clonListaClientes;
    }
    cout<<"se a agregado a su lista de juegos\n"<<endl;
}
void mostrarListaJuegosClientes(juegosCliente *&listajuegosClientes, NodoClientes *&listaClientes, string usuarioC)
{
    juegosCliente *clonListaJuegosClientes = new juegosCliente();
    NodoClientes *clonListaClientes = new NodoClientes();
    clonListaJuegosClientes = listajuegosClientes;
    clonListaClientes = listaClientes;
    bool encontrado = false;
    if (clonListaJuegosClientes == NULL)
    {
        cout<<"\nNo se han registrado juegos\n"<<endl;
    }
    if (clonListaClientes == NULL)
    {
        cout<<"\nNo se han registrado clientes\n"<<endl;
    }
    else
    {
        cout<<"\n\t\t\tJUEGOS DEL USUARIO"<<usuarioC<<"\n"<<endl;
        cout<<"\tNombre\t\tGenero\t\tId del Juego\n"<<endl;
        while (clonListaClientes != NULL)
        {
            if (clonListaClientes->usuario == usuarioC)
            {
                while (clonListaJuegosClientes != NULL)
                {
                    if (clonListaJuegosClientes->usuario == usuarioC)
                    {
                        encontrado = true;
                        cout<<"\t"<<clonListaJuegosClientes->nombre<<"\t\t"<<clonListaJuegosClientes->genero<<"\t\t"<<clonListaJuegosClientes->idJuego;
                        cout<<"\n";
                    }
                    clonListaJuegosClientes = clonListaJuegosClientes->siguiente;
                }   
            }           
            clonListaClientes = clonListaClientes->siguiente;
        }
        if (encontrado == false)
        {
            cout<<"Usted "<<usuarioC<<" no ha adquirido ningun juego\n"<<endl;
        }
    }
}
bool juegoExistenteLista(juegosCliente *&listaJuegosClientes,NodoJuegos *&listaJuegos, string usuarioC, int idJuegos)
{
    juegosCliente *nuevaListaJuegosClientes = new juegosCliente();
    NodoJuegos *nuevaListaJuegos = new NodoJuegos();
    nuevaListaJuegos = listaJuegos;
    nuevaListaJuegosClientes = listaJuegosClientes;
    bool adquirido = false;
    while (nuevaListaJuegosClientes != NULL)
    {
        if (nuevaListaJuegosClientes->usuario == usuarioC)
        {
            while (nuevaListaJuegos != NULL)
            {
                if ((nuevaListaJuegosClientes->idJuego == idJuegos) && (nuevaListaJuegosClientes->usuario == usuarioC))
                {
                    adquirido = true;
                    break;
                }
                nuevaListaJuegos = nuevaListaJuegos->siguiente;
            }
        }
        nuevaListaJuegosClientes = nuevaListaJuegosClientes->siguiente;
        
    }
    return adquirido;
}
void comprarJuegos(NodoJuegos *&listaJuegos, NodoClientes *&listaClientes, int idJuegos, string usuarioC)
{
    bool encontrado = false, adquirido = false;
    char r;
    NodoJuegos *clonListaJuegos = new NodoJuegos();
    NodoClientes *clonListaClientes = new NodoClientes();
    clonListaJuegos = listaJuegos;
    clonListaClientes = listaClientes;
    while (clonListaJuegos != NULL)
    {
        if (clonListaJuegos->idJuego == idJuegos)
        {
            encontrado = true;
            while (clonListaClientes != NULL)
            {
                if (clonListaClientes->usuario == usuarioC)
                {
                    cout<<"\nEl juego de "<<clonListaJuegos->nombreJuego<<" se ha seleccionado\n"<<endl;
                    cout<<"Desea comprarlo (s/n): ";cin >> r;
                    adquirido = juegoExistenteLista(listajuegosClientes,listaJuegos, usuarioC, idJuegos);
                    if (adquirido == true)
                    {
                        system("COLOR 9");
                        cout<<"\n\n\n\n\t\t\t\t**********************************************"<<endl;
                        cout<<"\t\t\t\t*      YA USTED HA ADQUIRIDO ESTE JUEGO      *"<<endl;
                        cout<<"\t\t\t\t**********************************************\n\n"<<endl;
                    }
                    else
                    {                    
                        if (((r == 's') || (r == 'S')) && ((clonListaClientes->saldo >= clonListaJuegos->precio)) && ((clonListaJuegos->stock > 0)))
                        {
                            cout<<"\nUsted "<<clonListaClientes->usuario<<" ha adquirido el juego "<<clonListaJuegos->nombreJuego<<" y ";
                            listaJuegosClientes(listajuegosClientes, clonListaJuegos, clonListaJuegos->nombreJuego, usuarioC);
                            clonListaJuegos->stock -= 1;
                            clonListaClientes->saldo -= clonListaJuegos->precio;
                            break;
                        }
                        if ((r == 's') || (r == 'S') && (clonListaJuegos->stock == 0))
                        {
                            system("COLOR 4");
                            cout<<"\t\t\t\t*********************************"<<endl;
                            cout<<"\t\t\t\t*      JUEGO NO DISPONIBLE      *"<<endl;
                            cout<<"\t\t\t\t*********************************\n\n"<<endl;
                            break;
                        }
                        else
                        {
                            cout<<"\nNO TIENE SUFICIENTES FONDOS PARA ADQUIRIR ESTE JUEGO\n"<<endl;
                            break;
                        }
                        if ((r != 's') || (r != 'S'))
                        {
                            break;
                        }
                    }
                }
                clonListaClientes = clonListaClientes->siguiente;
            }
        }
        clonListaJuegos = clonListaJuegos->siguiente;
    }
    if (encontrado == false)
    {
        cout<<"\nNo se ha econtrado en el catalogo de juegos\n"<<endl;
    }
}
// TODO CLIENTES --------------------------------------------------
void registroCliente(NodoClientes *&listaClientes, string usuario, string password, float saldo, int idCliente)
{
    NodoClientes *nuevoCliente = new NodoClientes();
    nuevoCliente->usuario = usuario;
    nuevoCliente->password = password;
    nuevoCliente->saldo = saldo;
    nuevoCliente->idCliente = idCliente;
    NodoClientes *clonLista = listaClientes, *clonLista2;
    while (clonLista != NULL)
    {
        clonLista2 = clonLista;
        clonLista = clonLista->siguiente;
    }
    if (listaClientes == clonLista)
    {
        listaClientes = nuevoCliente;
        nuevoCliente->siguiente = clonLista;
    }
    else
    {
        clonLista2->siguiente = nuevoCliente;
        nuevoCliente->siguiente = clonLista;
    }
    cout<<"\nSe registro el usuario "<<usuario<<" correctamente\n"<<endl;
}
void mostrarClientes(NodoClientes *&listaClientes)
{
    NodoClientes *clonLista = new NodoClientes();
    clonLista = listaClientes;
    if (clonLista == NULL)
    {
        cout<<"\nNo se han registrado clientes\n"<<endl;
    }
    else
    {
        cout<<"\n\t\t\tCLIENTES\n"<<endl;
        cout<<"Nombre de usuario\tPassword\tSaldo\tId del Cliente\n"<<endl;
        while (clonLista != NULL)
        {
            cout<<"\t"<<clonLista->usuario<<"\t";
            cout<<"\t"<<clonLista->password<<"\t";
            cout<<"\t"<<clonLista->saldo<<"$\t";
            cout<<"\t"<<clonLista->idCliente<<"\t\n";
            clonLista = clonLista->siguiente;
        }
    }
}
bool validacionUsuario(NodoClientes *&listaClientes, string usuario, string password)
{
    NodoClientes *clonListaClientes = new NodoClientes();
    clonListaClientes = listaClientes;
    bool acceso = false, pass = false;
    while ((clonListaClientes != NULL))
    {
        if ((clonListaClientes->usuario == usuario) && (clonListaClientes->password == password))
        {
            acceso = true;
            break;
        }
        else if ((clonListaClientes->usuario == usuario) && (clonListaClientes->password != password))
        {
            pass = true;
        }
        clonListaClientes = clonListaClientes->siguiente;
    }
    if (acceso == false)
    {
        cout<<"Usuario o clave incorrecta\n"<<endl;
    }
    if (pass == true)
    {
        cout<<"\nEl usuario existe pero la clave es incorrecta\n"<<endl;
    }
    return acceso;
}
bool validarUsuarioExistente(NodoClientes *&listaClientes, string usuarioC)
{
    bool encontrado = false;
    NodoClientes *clonListaClientes = new NodoClientes();
    clonListaClientes = listaClientes;
    while (clonListaClientes != NULL)
    {
        if (clonListaClientes->usuario == usuarioC)
        {
            encontrado = true;
            break;
        }
        clonListaClientes = clonListaClientes->siguiente;
    }
    return encontrado;
}
void aumentarSaldoCliente(NodoClientes *&listaClientes, string usuarioC)
{
    NodoClientes *clonListaClientes = new NodoClientes();
    clonListaClientes = listaClientes;
    char r;
    float saldo;
    int opc;
    while (clonListaClientes != NULL)
    {
        if (clonListaClientes->usuario == usuarioC)
        {
            cout<<"\n\t\t\t\t\t\tUsuario: "<<clonListaClientes->usuario<<endl;
            cout<<"\nSaldo actual: "<<clonListaClientes->saldo<<endl;
            saldo = clonListaClientes->saldo;
            cout<<"\n 1. Desea depositar mas saldo a su cuenta ?\n"<<endl;
            cout<<" 2. Desea retirar saldo de su cuenta ?\n"<<endl;
            cout<<" 3. Salir\n"<<endl;
            cout<<"Ingrese una opcion: ";cin >> opc;
            if (opc == 1)
            {
                cout<<"\nIngrese el saldo que desea agregar: ";cin >> clonListaClientes->saldo;
                clonListaClientes->saldo += saldo;
                cout<<"\nSu saldo actual ahora es de: "<<clonListaClientes->saldo<<"\n"<<endl;
            }
            if (opc == 2)
            {
                cout<<"\nIngrese el saldo que desea retirar: ";cin >> clonListaClientes->saldo;
                if (clonListaClientes->saldo > saldo)
                {
                    cout<<"\nNo tiene los fondos suficientes retirar esta cantidad de dinero"<<endl;
                    system("pause");
                    system("cls");
                }
                else
                {
                    clonListaClientes->saldo = saldo - clonListaClientes->saldo;
                    cout<<"\nSu saldo actual ahora es de: "<<clonListaClientes->saldo<<"\n"<<endl;
                }
            }
            if (opc == 3)
            {
                break;
            }
        }
        clonListaClientes = clonListaClientes->siguiente;
    }
}
// TODO MENUS --------------------------------------------------
void menuAdmin()
{
    string nombreJuego, genero, usuarioA, passwordA;
    float precio;
    int stock, opc, buscar;
    bool salir = false;
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\t\t\t\t*****************************"<<endl;
        cout<<"\t\t\t\t*      MENU DEL ADMIN       *"<<endl;
        cout<<"\t\t\t\t*****************************\n\n"<<endl;
        cout<<" 1. INGRESAR UN JUEGO\n"<<endl;
        cout<<" 2. MOSTRAR CATALOGO DE JUEGOS\n"<<endl;
        cout<<" 3. ELIMINAR UN JUEGO DEL CATALOGO\n"<<endl;
        cout<<" 4. BUSCAR UN JUEGO\n"<<endl;
        cout<<" 5. MODIFICAR UN JUEGO\n"<<endl;
        cout<<" 6. MOSTRAR CLIENTES REGISTRADOS\n"<<endl;
        cout<<" 7. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin >> opc;
        system("cls");
        if ((opc < 1) || (opc > 7))
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
            bool diferente = true;
            if (cont == 0)
            {
                fflush(stdin);
                cout<<"Ingrese el Nombre del juego: ";getline(cin, nombreJuego, '\n');
                nombreJuego = Minusculas(nombreJuego);
                cout<<"Ingrese la genero del juego: ";getline(cin, genero, '\n');
                cout<<"Ingrese el precio en $: ";
                while(!(cin>>precio))
                {
                	cin.clear();
                	cin.ignore(1000,'\n');
                	cout<<"Ingrese el precio en $: ";
                }
                cout<<"Ingrese el stock: ";
                while (!(cin>>stock))
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"\nIngrese un dato de tipo numerico\n"<<endl;
                    cout<<"Ingrese el stock en $: ";
                }
                insertarJuego(listaJuegos, nombreJuego, genero, precio, stock, idJuegos);
                cont++;
                system("pause");
            }
            else
            {
                fflush(stdin);
                cout<<"Ingrese el Nombre del juego: ";getline(cin, nombreJuego, '\n');
                diferente = validarJuegoExistente(listaJuegos, nombreJuego);
                if (diferente == false)
                {
                    cout<<"Ingrese la genero del juego: ";
                    getline(cin, genero, '\n');
                    cout<<"Ingrese el precio en $: ";
                    while(!(cin>>precio))
                    {
                        cin.clear();
                        cin.ignore(1000,'\n');
                        cout<<"Ingrese el precio en $: ";
                    }
                    cout<<"Ingrese el stock: ";
                    while (!(cin>>stock))
                    {
                        cin.clear();
                        cin.ignore(1000,'\n');
                        cout<<"\nIngrese un dato de tipo numerico\n"<<endl;
                        cout<<"Ingrese el stock en $: ";
                    }
                    idJuegos++;
                    insertarJuego(listaJuegos, nombreJuego, genero, precio, stock, idJuegos);
                    system("pause");
                }
                else
                {
                    system("COLOR 4");
                    cout<<"\n\n\n\n\n\n\n\n\n\n";
                    cout<<"\t\t\t\t***********************************************************\n";
                    cout<<"\t\t\t\t*                     YA EXISTE EL JUEGO                  *\n";
                    cout<<"\t\t\t\t***********************************************************\n";
                    cout<<"\n\n\n\n\n\n";
                    system("pause");
                    break;
                }
            }
        }
        break;
        case 2:
        {
            if (listaJuegos == NULL)
            {
                cout<<"\nNo se han registrado juegos\n"<<endl;
            }
            else
            {
                mostrarJuegos(listaJuegos);
            }
            system("pause");
        }
        break;
        case 3:
        {
            if (listaJuegos == NULL)
            {
                cout<<"\nNo se han registrado juegos\n"<<endl;
            }
            else
            {
                mostrarJuegos(listaJuegos);
                cout<<"Ingrese el ID del juego que quiere borrar: ";cin >> buscar;
                eliminarJuegos(listaJuegos, buscar);
            }
            system("pause");
        }
        break;
        case 4:
        {
            if (listaJuegos == NULL)
            {
                cout<<"\nNo se han registrado juegos\n"<<endl;
            }
            else
            {
                mostrarJuegos(listaJuegos);
                cout<<"Ingrese el ID del juego que quiere buscar: ";cin >> buscar;
                buscarJuego(listaJuegos, buscar);
            }
            system("pause");
        }
        break;
        case 5:
        {
            if (listaJuegos == NULL)
            {
                cout<<"\nNo se han registrado juegos\n"<<endl;
            }
            else
            {
                mostrarJuegos(listaJuegos);
                cout<<"Ingrese el ID del juego que quiere modificar: ";cin >> buscar;
                modificarJuego(listaJuegos, buscar);
            }
            system("pause");
        }
        break;
        case 6:
        {
            mostrarClientes(listaClientes);
            system("pause");
        }
        break;
        case 7:
        {
            salir = true;
        }
        break;
        }
    } while (salir != true);
    salir = false;
    cont = 0;
}
void menuCliente(string usuarioC)
{
    bool salir = false;
    int opc, idJuegos;
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\n\t\t\t\t\tBienvenido "<<usuarioC<<"\n\n\n"<<endl;
        cout<<"\t\t\t\t***************************"<<endl;
        cout<<"\t\t\t\t*      MENU CLIENTE       *"<<endl;
        cout<<"\t\t\t\t***************************\n\n"<<endl;
        cout<<" 1. COMPRAR UN JUEGO\n"<<endl;
        cout<<" 2. MOSTRAR CATALOGO DE JUEGOS\n"<<endl;
        cout<<" 3. BUSCAR UN JUEGO\n"<<endl;
        cout<<" 4. MOSTRAR JUEGOS COMPRADOS\n"<<endl;
        cout<<" 5. ACTUALIZAR SALDO\n"<<endl;
        cout<<" 6. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin >> opc;
        system("cls");
        if ((opc < 1) || (opc > 6))
        {
            system("cls");
            system("COLOR 4");
            cout<<"\n\n\n\t\t\t\t\t********************"<<endl;
            cout<<"\t\t\t\t\t* OPCION INVALIDA. *"<<endl;
            cout<<"\t\t\t\t\t********************\n\b"<<endl;
            system("pause");
        }
        switch (opc)
        {
            case 1:
            {
                if (listaJuegos == NULL)
                {
                    cout<<"\nNo se han registrado juegos\n"<<endl;
                }
                else
                {
                    mostrarJuegos(listaJuegos);
                    cout<<"\nIngrese el codigo del juego que desea comprar: ";cin >> idJuegos;
                    comprarJuegos(listaJuegos, listaClientes, idJuegos, usuarioC);
                }
                system("pause");
            }
            break;
            case 2:
            {
                if (listaJuegos == NULL)
                {
                    cout<<"\nNo se han registrado juegos\n"<<endl;
                }
                else
                {
                    mostrarJuegos(listaJuegos);
                }
                system("pause");
            }
            break;
            case 3:
            {
                if (listaJuegos == NULL)
                {
                    cout<<"\nNo se han registrado juegos\n"<<endl;
                }
                else
                {
                    cout<<"Ingrese el ID del juego que quiere buscar: ";cin >> idJuegos;
                    buscarJuego(listaJuegos, idJuegos);
                }
                system("pause");
            }break;
            case 4:
            {
                if (listajuegosClientes == NULL)
                {
                    cout<<"\nNo se han comprado juegos\n"<<endl;
                }
                else
                {
                    mostrarListaJuegosClientes(listajuegosClientes, listaClientes, usuarioC);
                }
                system("pause");
            }break;
            case 5:
            {
                aumentarSaldoCliente(listaClientes, usuarioC);
                system("pause");
            }break;            
            case 6:
            {
                salir = true;
            }break;
        }
    } while (salir != true);
    salir = false;
}
void logInCliente()
{
    bool salir = false, acceso;
    int opc;
    float saldo;
    string passwordC, usuarioC;
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\t\t\t\t********************************"<<endl;
        cout<<"\t\t\t\t*      LOGIN DEL CLIENTE       *"<<endl;
        cout<<"\t\t\t\t********************************\n\n"<<endl;
        cout<<" 1. REGISTRARSE\n"<<endl;
        cout<<" 2. INICIAR SESION\n"<<endl;
        cout<<" 3. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin >> opc;
        system("cls");
        if ((opc < 1) || (opc > 3))
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
            bool diferente;
            cout<<"\t\t\t\t***********************************"<<endl;
            cout<<"\t\t\t\t*      REGISTRO DEL CLIENTE       *"<<endl;
            cout<<"\t\t\t\t***********************************\n\n"<<endl;
            fflush(stdin);
            if (listaClientes == NULL)
            {
                cout<<"Ingrese el usuario: ";
                getline(cin, usuarioC, '\n');
                cout<<"Clave: ";
                getline(cin, passwordC, '\n');
                cout<<"Saldo en $: ";
                while (!(cin>>saldo))
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"\nIngrese un dato de tipo numerico\n"<<endl;
                    cout<<"Ingrese el saldo en $: ";
                }
                registroCliente(listaClientes, usuarioC, passwordC, saldo, idCliente);
                system("pause");
            }
            else
            {
                cout<<"Ingrese el usuario: ";
                getline(cin, usuarioC, '\n');
                diferente = validarUsuarioExistente(listaClientes, usuarioC);
                if (diferente == false)
                {
                    cout<<"Clave: ";
                    getline(cin, passwordC, '\n');
                    cout<<"Saldo en $: ";cin >> saldo;
                    idCliente++;
                    registroCliente(listaClientes, usuarioC, passwordC, saldo, idCliente);
                    system("pause");
                }
                if (diferente == true)
                {
                    system("COLOR 4");
                    cout<<"\n\n\n\n\n\n\n\n\n\n";
                    cout<<"\t\t\t\t*************************************************************\n";
                    cout<<"\t\t\t\t*                     YA EXISTE EL USUARIO                  *\n";
                    cout<<"\t\t\t\t*************************************************************\n";
                    cout<<"\n\n\n\n\n\n";
                    system("pause");
                    system("cls");
                    break;
                }
            }
        }
        break;
        case 2:
        {
            cout<<"\t\t\t\t*******************************"<<endl;
            cout<<"\t\t\t\t*      INICIO DE SESION       *"<<endl;
            cout<<"\t\t\t\t*******************************\n\n"<<endl;
            fflush(stdin);
            cout<<"Ingrese su usuario: ";
            getline(cin, usuarioC, '\n');
            cout<<"Clave: ";
            getline(cin, passwordC, '\n');
            acceso = validacionUsuario(listaClientes, usuarioC, passwordC);
            if (acceso == true)
            {
                cout<<"\n\n\n\n\n\n\n\n\n\n";
                cout<<"\t\t\t\t*********************************************************\n";
                cout<<"\t\t\t\t*                     ACCESO CONCEDIDO                  *\n";
                cout<<"\t\t\t\t*********************************************************\n";
                cout<<"\n\n\n\n\n\n";
                system("pause");
                menuCliente(usuarioC);
            }
            system("pause");
        }
        break;
        case 3:
        {
            salir = true;
        }
        break;
        }
    } while (salir != true);
    salir = false;
}
void menuPrincipal()
{
    bool salir = false;
    int opc, contAdmin = 0;
    system("COLOR 3");
    do
    {
        system("COLOR 9");
        system("cls");
        cout<<"\t\t\t\t*******************************"<<endl;
        cout<<"\t\t\t\t*      MENU DEL PROGRMA       *"<<endl;
        cout<<"\t\t\t\t*******************************\n\n"<<endl;
        cout<<" COMO DESEA INGRESAR ?\n"<<endl;
        cout<<" 1. COMO ADMIN\n"<<endl;
        cout<<" 2. COMO CLIENTE\n"<<endl;
        cout<<" 3. SALIR\n"<<endl;
        cout<<"INGRESE UNA OPCION: ";cin >> opc;
        system("cls");
        if ((opc < 1) || (opc > 3))
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
            string usuario, password;
            cout<<"INGRESE EL USUARIO Y PASSWORD\n"<<endl;
            fflush(stdin);
            cout<<"USUARIO: ";
            getline(cin, usuario, '\n');
            cout<<"PASSWORD: ";
            getline(cin, password, '\n');
            if ((usuario == "root") && (password == "root"))
            {
                cout<<"\n\n\n\t\t\t\t******************************"<<endl;
                cout<<"\t\t\t\t*      ACCESO CONCEDIDO      *"<<endl;
                cout<<"\t\t\t\t******************************\n\n"<<endl;
                system("pause");
                menuAdmin();
            }
            else
            {
                system("COLOR 4");
                cout<<"\n\n\n\n\n\n\n\n\n\n";
                cout<<"\t\t\t\t********************************************************\n";
                cout<<"\t\t\t\t*                     ACCESO DENEGADO                  *\n";
                cout<<"\t\t\t\t********************************************************\n";
                cout<<"\n\n\n\n\n\n";
                system("pause");
                system("cls");
            }
        }
        break;
        case 2:
        {
            logInCliente();
        }
        break;
        case 3:
        {
            salir = true;
        }
        break;
        }
    } while (salir != true);
    system("pause");
}
int main()
{
    setlocale(LC_CTYPE, "Spanish");
    menuPrincipal();
    system("COLOR 9");
    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t*******************************************************\n";
    cout<<"\t\t\t\t******      PROGRAMA CREADO POR ANIBAL LOPEZ     ******\n";
    cout<<"\t\t\t\t*******************************************************\n";
    cout<<"\n\n\n\n\n\n";
    system("pause");
    system("cls");
}
