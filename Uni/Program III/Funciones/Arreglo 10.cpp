/*
Llene un arreglo con 10 números , calcule el promedio de los elementos y cuantos elementos 
están por encima del promedio. Realice la mismas operación para el Vector B = 

muestre el promedio de A y de B, indique cual es el mayor de los promedios. Ordene con el 
método de la burbuja el vector a y muéstrelo.
*/
#include<iostream>
using namespace std; 
void insertarVec(int vecA[],int vecB[],int& sumaA,int& sumaB);
void promedio(int sumaA,int sumaB,float& promedioA, float& promedioB);
void promedioMayor(int vecA[],int vecB[],float promedioA, float promedioB);
void mostrarVec(int vecA[]);
void ordenarVec(int vecA[]);
int main()
{
    int vecA[10],vecB[10],sumaA=0,sumaB=0;
    float promedioA,promedioB;
    insertarVec(vecA,vecB,sumaA,sumaB);
    promedio(sumaA,sumaB,promedioA,promedioB);
    promedioMayor(vecA,vecB,promedioA,promedioB);
    mostrarVec(vecA);
    ordenarVec(vecA);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarVec(int vecA[],int vecB[],int& sumaA,int& sumaB)
{
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecA[i];
        sumaA += vecA[i];
        
    }
    cout<<"\nVector B:\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecB[i];
        sumaB += vecB[i];
    }
    cout<<"\n";
}
void promedio(int sumaA,int sumaB,float& promedioA, float& promedioB)
{
    promedioA = sumaA / 10;
    promedioB = sumaB / 10;
    cout<<"Promedio A: "<<promedioA<<endl;
    cout<<"Promedio B: "<<promedioB<<endl;
    cout<<"\n";
}
void promedioMayor(int vecA[],int vecB[],float promedioA, float promedioB)
{
    int encima_promedioA=0,encima_promedioB=0;
    //Contando elementos por encima del promedio
    for (int i = 0; i < 10; i++)
    {
        if (vecA[i]>promedioA)
        {
            cout<<vecA[i]<<",";
            encima_promedioA++;
        }
    }
    if (encima_promedioA==1)
    {
        cout<<" -> este elemento esta por encima del promedio del vector A"<<endl;
    }
    else
    {
        cout<<" -> estos "<<encima_promedioA<<" elementos estan por encima del promedio del vector A"<<endl;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (vecB[i]>promedioB)
        {
            cout<<vecB[i]<<",";
            encima_promedioB++;
        }
    }
    if (encima_promedioB==1)
    {
        cout<<" -> este elemento esta por encima del promedio del vector B"<<endl;
    }
    else
    {
        cout<<" -> estos "<<encima_promedioB<<" elementos estan por encima del promedio del vector B"<<endl;
    }
    if (promedioA>promedioB)
    {
        cout<<"\nEl promedio del vector A es mayor al promedio del vector B"<<endl;
    }
    else
    {
        cout<<"\nEl promedio del vector B es mayor al promedio del vector A"<<endl;
    }
}
void mostrarVec(int vecA[])
{
    cout<<"\nVector A sin ordenar:\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vecA[i]<<endl;
    }
}
void ordenarVec(int vecA[])
{
    int auxA;
    bool ordenado=false;
    for (int i = 0; i < 10 && ordenado == false; i++)
    {
        ordenado = true;
        for (int j = 0; j < 10; j++)
        {
            if (vecA[j]>vecA[j+1])
            {
                ordenado = false;
                auxA = vecA[j];
                vecA[j] = vecA[j+1];
                vecA[j+1] = auxA;
            }
        }
    }
    cout<<"\nVector A ordenado:\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vecA[i]<<endl;
    }
}