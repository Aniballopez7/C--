/*
1) Crear 2 arreglos con números aleatorios, cada arreglo tiene 10 elementos
2) Ordenar de mayor a menor los 2 arreglos y guardarlos
3) Llenar 2 estructuras tipo pilas con los 10 números ya ordenados de los 20 elementos 
anteriores. Arreglo1 va a pila1 y arreglo2 va a pila2. y mostrar los resultados obtenidos.
*/
#include<iostream>
using namespace std; 
struct Pila
{
    int dato;
    Pila *siguiente;
};
void numeroAleatorios(int vector[]);
void ordenarVector(int vector[]);
void crearPilas(Pila *&pilas,int numero);
void mostrarPilas(Pila *&pilas);
int main()
{
    Pila *pila=NULL;
    Pila *pila2=NULL;
    Pila *pila3=NULL;
    int vec[10],vec2[10],vec3[20];
    numeroAleatorios(vec);
    numeroAleatorios(vec2);
    ordenarVector(vec);
    ordenarVector(vec2);

    for (int i = 0; i < 10; i++)
    {
        crearPilas(pila,vec[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        crearPilas(pila2,vec2[i]);
    }
    cout<<"Pila 1 compuesta por el vector 1:\n"<<endl;
    mostrarPilas(pila);
    cout<<"\nPila 2 compuesta por el vector 2:\n"<<endl;
    mostrarPilas(pila2);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void numeroAleatorios(int vector[])
{
    for (int i = 0; i < 10; i++)
    {
        vector[i] = rand()%100;
    }
}
void ordenarVector(int vector[])
{
    int pos,aux;
    for (int i = 0; i < 10; i++)
    {
        pos=i;
        for (int j = i+1; j < 10; j++)
        {
            if (vector[pos]>vector[j])
            {
                pos=j;
            }
        }
        aux = vector[i];
        vector[i] = vector[pos];
        vector[pos] = aux;
    }
}
void crearPilas(Pila *&pilas,int numero)
{
    Pila *nuevoNodo = new Pila();
    nuevoNodo->dato = numero;
    nuevoNodo->siguiente = pilas;
    pilas = nuevoNodo;
}
void mostrarPilas(Pila *&pilas)
{
    Pila *aux;
    aux=pilas;
    while (aux!=NULL)
    {
        cout<<aux->dato<<" ";
        aux=aux->siguiente;
    } 
    cout<<"\n";
}