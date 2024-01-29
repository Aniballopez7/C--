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
int main()
{
    int vec[5],vec2[5],vec3[5],aux, suma = 0, promedio = 0;
    int mul=1 ,mul2=1;
    bool orden = false;

    cout<<"A continuacion insertara 10 numeros para un arreglo:\n"<<endl;
    cout<<"Vector 1:\n"<<endl;

    //Vector 1
    for (int i = 0; i < 5; i++)
    {
        cout<<"Elemento ["<<i+1<<"] del vector : ";cin>>vec[i];
    }
    
    //Vector 2
    cout<<"\nVector 2:\n"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Elemento ["<<i+1<<"] del vector 2: ";cin>>vec2[i];
    }

    //Vector 3 resta de vector 1 y 2
    for (int i = 0; i < 5; i++)
    {
        vec3[i]= vec[i] - vec2[i];
        suma += vec3[i];
    }
    promedio = suma / 5;
    cout<<"\n";

    //Mostrar vector 3 sin ordenado
    cout<<"Elementos sin ordenar:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<vec3[i]<<endl;
    }

    //Ordenar el vector 3
    for (int i = 0; i < 5 && orden == false; i++)
    {
        orden = true;
        for (int j = 0; j < 5; j++)
        {
            if (vec3[j]>vec3[j+1])
            {
                orden = false;
                aux = vec3[j];
                vec3[j] = vec3[j+1];
                vec3[j+1] = aux;
            }
        }
    }

    cout<<"\n";
    cout<<"Elementos ordenados:\n"<<endl;
    //Mostrar vector 3 ordenado
    for (int i = 0; i < 5; i++)
    {
        cout<<vec3[i]<<endl;
    }
    cout<<"\nPromedio: "<<suma<<endl;
    cout<<"\nSegunda parte del programa:\n"<<endl;

    //Multiplicando datos impares del vec 1
    for (int i = 0; i < 5; i+=2)
    {
        mul *= vec[i];
    }

    //Multiplicando datos impares del vec 2
    for (int i = 0; i < 5; i+=2)
    {
        mul2 *= vec2[i];
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
    system("\nread -p '\nPresiona Enter para continuar...' var");
}