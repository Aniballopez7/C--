/*
 	EN UNA COLA DE BANCO SE DESEA SABER EL NOMBRE DE TODAS LAS PERSONAS QUE SON MAYORES DE 20 AÑOS DE SEXO
 	MASCULINO Y LAS MUJERES MENORES DE 40 AÑOS.
 	
 	*USAR LISTAS Y COLAS*
 	
 	DATOS DEL CLIENTE:	NOMBRE, EDAD Y SEXO;
*/


#include<iostream>
#include<string.h.>
using namespace std; 
struct Nodo
{
    int dato;
    char sex;
	string nombre;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front, Nodo *&back,int dato, string nombre, char sex);

void mostrarCola(Nodo *&front);
int main()
{
    Nodo *front = NULL;
    Nodo *back = NULL;
    int dato;
    char r,sex;
	string nombre;
    bool salir = false;
    do
    {
        cout<<"Desea ingresar un numero (s/n): ";cin>>r;
        cout<<"\n";
        system("cls");
        if (r == 's' || r == 'S')
        {
            cout<<"Ingrese un numero: ";cin>>dato;
            cout<<"\n";
            insertarNodo(front,back,dato,nombre,sex);
            cout<<"\n";
            
            cout<<"Ingrese un nombre: ";cin>>nombre;
            cout<<"\n";
            insertarNodo(front,back,dato,nombre,sex);
            cout<<"\n";
            
			cout<<"Ingrese el genero:  (m/f)";cin>>sex;
            cout<<"\n";
            insertarNodo(front,back,dato,nombre,sex);
            cout<<"\n";
            


        }
        else
        {
            salir = true;
        }
    } while (salir != true);
    system("cls");
	
	system("PAUSE");
	return 0;
}
void insertarNodo(Nodo *&front, Nodo *&back,int dato, string nombre, char sex)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front==NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"Se inserto un nodo con los datos:  "<<dato<<" / "<<nombre<<" / "<<sex<<endl;
}


