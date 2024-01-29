/*
Desarrolle un programa que realice la siguiente operación. Se tienen dos vectores de 5 
elementos numéricos cada uno, realizar la resta del Vector A menos el Vector B y almacenar 
el resultado en un Vector C (C = A -B), determinar y muestre el promedio de la suma de los 
elementos del Vector C (prom_C). ordene con el método la burbuja el vector C y muéstrelo…

Continuando el ejercicio anterior, multiplique los valores que se encuentren en las posiciones 
impares del vector A (mult_impar_A), realice lo mismo para el vector B (mult_ipar_B), determine 
cual de los 2 valores es mayor.
*/
#include<iostream>
using namespace std; 
void insertarVec(int vecA[],int vecB[],int vecC[]);
void mostrarVec(int vecC[]);
void ordenarVec(int vecC[]);
void multiVec(int vecA[],int VecB[]);
int main()
{
    int vecA[5],vecB[5],vecC[5];
    insertarVec(vecA,vecB,vecC);
    cout<<"\nVector C sin ordenar:\n"<<endl;
    mostrarVec(vecC);
    ordenarVec(vecC);
    cout<<"\nVector C ordenado:\n"<<endl;
    mostrarVec(vecC);
    cout<<"\nContinuando con el programa:\n"<<endl;
    multiVec(vecA,vecB);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}

void insertarVec(int vecA[],int vecB[],int vecC[])
{
    int suma=0,promedio;
    cout<<"Vector A:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Elemento ["<<i+1<<"] del vector : ";cin>>vecA[i];
    }
    cout<<"\nVector B:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Elemento ["<<i+1<<"] del vector : ";cin>>vecB[i];
    }
    for (int i = 0; i < 5; i++)
    {
        vecC[i] = vecA[i]-vecB[i];
        suma += vecC[i];
    }
    cout<<"\nLa suma del vector C: "<<suma<<endl;
    promedio = suma/5;
    cout<<"El promedio es: "<<promedio<<endl;
}
void mostrarVec(int vecC[])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<vecC[i]<<endl;
    }
}
void ordenarVec(int vecC[])
{
    int aux;
    bool ordenado = false;
    for (int i = 0; i < 5 && ordenado == false; i++)
    {
        ordenado = true;
        for (int j = 0; j < 5; j++)
        {
            if (vecC[j]>vecC[j+1])
            {
                ordenado = false;
                aux = vecC[j];
                vecC[j] = vecC[j+1];
                vecC[j+1] = aux;
            }
        }
    }
}
void multiVec(int vecA[],int VecB[])
{
    int mul=1,mul2=1;
    //Multiplicando datos impares del vec 1
    for (int i = 0; i < 5; i+=2)
    {
        mul *= vecA[i];
    }

    //Multiplicando datos impares del vec 2
    for (int i = 0; i < 5; i+=2)
    {
        mul2 *= VecB[i];
    }
    
    cout<<"Resultado de la multiplicacion del vec 1: "<<mul<<endl;
    cout<<"Resultado de la multiplicacion del vec 2: "<<mul2<<endl;
    if (mul > mul2)
    {
        cout<<"\nEl mayor es: "<<mul<<endl;
    }
    else
    {
        cout<<"\nEl mayor es: "<<mul2<<endl;
    }
}