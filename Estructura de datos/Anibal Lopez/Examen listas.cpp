#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

struct Nodo
{
    char nombre[30], sexo;
    int edad;
    Nodo *sig;
};

void insertarDatos(Nodo *&lista, char nombre[], char sexo, int edad)
{
    Nodo *nuevoNodo = new Nodo();
    strcpy(nuevoNodo->nombre,nombre);
    nuevoNodo->sexo = sexo;
    nuevoNodo->edad = edad;
    Nodo *aux = lista, *aux2;
    while (aux != NULL)
    {
        aux2 = aux;
        aux = aux->sig;
    }
    if (lista == aux)
    {
        lista = nuevoNodo;
        nuevoNodo->sig = aux;
    }
    else
    {
        aux2->sig = nuevoNodo;
        nuevoNodo->sig = aux;
    }
    cout<<"\nSe registro el profesor correcatemente\n"<<endl;
}
void mostrarProfesores(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    if (clon == NULL)
    {
        cout<<"\nNo se han registrado profesores\n"<<endl;
    }
    else
    {
        cout<<"Profesores:\n"<<endl;
        while (clon != NULL)
        {
            cout<<"Nombre: "<<clon->nombre<<endl;
            cout<<"Edad: "<<clon->edad<<endl;
            cout<<"Sexo: "<<clon->sexo<<endl;
            cout<<"\n";
            clon = clon->sig;
        }
    }
}
void eliminarProfesor(Nodo *&lista, char nombre[30])
{
    bool encontrado = false;
    if (lista == NULL)
    {
        cout<<"\nNo se a registrado ningun profesor\n"<<endl;
    }
    else
    {
        Nodo *aux = lista, *anterior = NULL;
        while ((aux != NULL) || (aux->nombre != nombre))
        {
            anterior = aux;
            aux = aux->sig;
        }
        if (aux == NULL)
        {
            encontrado = false;
        }
        else if (anterior == NULL)
        {
            lista = lista->sig;
            delete aux;
            encontrado = true;
        }
        else
        {
            anterior->sig = aux->sig;
            delete aux;
            encontrado = true;
        }
    }
    if (encontrado == true)
    {
        cout<<"\nEl profesor se elimino de la lista\n"<<endl;
    }
    else
    {
        cout<<"\nEl profesor no se encuentra en la lista\n"<<endl;
    }
}
void edadPromedio(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    int cont = 0;
    float promedio = 0, suma = 0;
    while (clon != NULL)
    {
        suma += clon->edad;
        cont++;
        clon = clon->sig;
    }
    if (clon == NULL)
    {
        promedio = suma / cont;
        cout<<"El promedio de edades es de: "<<promedio<<endl;
    }
}
void profesorJoven(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    int menor = 999;
    string nombre;
    while ((clon != NULL))
    {
        if (clon->edad < menor)
        {
            menor = clon->edad;
            nombre = clon->nombre;
        }
        clon = clon->sig;  
    }
    cout<<"El nombre del profesor mas joven es: "<<nombre<<endl;
}
void mayorPromedioMujeres(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    float promedio = 0;
    int suma = 0,contFemenino = 0;
    while (clon != NULL)
    {
        if ((clon->sexo == 'F') || (clon->sexo == 'f'))
        {
            suma += clon->edad;
            contFemenino++;
        }
        clon = clon->sig;
    }
    promedio = suma / contFemenino;
    while (clon != NULL)
    {
        if ((clon->sexo == 'F') || (clon->sexo == 'f'))
        {
            if (clon->edad > promedio)
            {
                contFemenino++;
            }
        }
        clon = clon->sig;
    }
    cout<<"\nEl numero de profesoras que tienen una edad mayor a la del promedio son: "<<contFemenino;
}
void profesoresEdadMenorPromedio(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    float promedio = 0;
    int suma = 0,contMasculino = 0;
    while (clon != NULL)
    {
        if ((clon->sexo == 'M') || (clon->sexo == 'm'))
        {
            suma += clon->edad;
            contMasculino++;
        }
        clon = clon->sig;
    }
    promedio = suma / contMasculino;
    while (clon!= NULL)
    {
        if ((clon->sexo == 'M') || (clon->sexo == 'm'))
        {
            if (clon->edad < promedio)
            {
                contMasculino++;
            }
        }
        clon = clon->sig;
    }
    cout<<"\nEl numero de profesores que tienen una edad mayor a la del promedio son: "<<contMasculino;
}
void nombreProfesorMayorEdad(Nodo *&lista)
{
    Nodo *clon = new Nodo();
    clon = lista;
    int mayorM = -999, mayorF = -999;
    string nombreM, nombreF;
    while (clon != NULL)
    {
        if ((clon->sexo == 'M') || (clon->sexo == 'm'))
        {
            if (clon->edad > mayorM)
            {
                mayorM = clon->edad;
                nombreM = clon->nombre;
            }
        }
        if ((clon->sexo == 'F') || (clon->sexo == 'f'))
        {
            if (clon->edad > mayorF)
            {
                mayorF = clon->edad;
                nombreF = clon->nombre;
            }
        }
        clon = clon->sig;  
    }
    cout<<"El nombre del profesor mas viejo es: "<<nombreM<<" Su edad: "<<mayorM<<endl;
    cout<<"El nombre del profesora mas vieja es: "<<nombreF<<" Su edad: "<<mayorF<<endl;
}
void menu()
{
    Nodo *lista = NULL;
	int opc,edad;
    bool salir = false;
    char nombre[30], sexo,r;

    do
    {
        system("cls");
        cout<<"*********************"<<endl;
        cout<<"* PEELUQUERIA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Insertar profesor"<<endl;
        cout<<"2. Mostrar profesores"<<endl;
        cout<<"3. Eliminar profesor"<<endl;
        cout<<"4. Edad promedio del grupo de profesores"<<endl;
        cout<<"5. Mostrar profesor mas joven"<<endl;
        cout<<"6. Profesoras femeninas con mayor edad al promedio"<<endl;
        cout<<"7. Profesores con edad menor al promedio"<<endl;
        cout<<"8. Nombre del profesor con mas edad de ambos sexos"<<endl;
        cout<<"9. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        fflush(stdin);
        if ((opc < 1)||(opc > 8))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("pause");
        }
        switch (opc)
        {
            case 1:
                {
                    fflush(stdin);
                    cout<<"Ingrese el nombre del profesor: ";cin.getline(nombre,30,'\n');
                    cout<<"Ingrese la edad del profesor: ";cin>>edad;
                    cout<<"Ingrese el sexo del profesor (F/M): ";cin>>sexo;
                    insertarDatos(lista,nombre,sexo,edad);

                    do
                    {
                        cout<<"Desea agregar otro profesor: (s/n): ";cin>>r;
                        if ((r == 's') || (r == 'S'))
                        {                    
                            fflush(stdin);
                            cout<<"\nIngrese el nombre del profesor: ";cin.getline(nombre,30,'\n');
                            cout<<"Ingrese la edad del profesor: ";cin>>edad;
                            cout<<"Ingrese el sexo del profesor (F/M): ";cin>>sexo;
                            insertarDatos(lista,nombre,sexo,edad);
                        }
                    } while ((r == 's') || (r == 'S'));
                    
                }break;
            case 2:
                {
                    mostrarProfesores(lista);
                }break;
            case 3:
                {
                    cout<<"Ingrese el nombre del profesor que desea eliminar: ";cin.getline(nombre,30,'\n');
                    eliminarProfesor(lista,nombre);
                } 
            case 4:
                {
                    edadPromedio(lista);
                }break;
            case 5:
                {
                    profesorJoven(lista);
                }break;
            case 6:
                {
                    mayorPromedioMujeres(lista);
                }break;
            case 7:
                {
                    profesoresEdadMenorPromedio(lista);
                }break;
            case 8:
                {
                    nombreProfesorMayorEdad(lista);
                }break;
            case 9:
                {
                    salir = true;
                }break;
        }
        system("pause");
    } while (salir != true);
}
int main()
{
    menu();
}