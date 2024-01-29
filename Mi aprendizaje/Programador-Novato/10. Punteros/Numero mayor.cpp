#include<iostream>
using namespace std; 
int mayor(int *num,int nelementos);
int mayorAlternativo(int *numeros,int nElementos);
int main()
{
    int nelementos = 5;
    int num[nelementos]={1,2,3,5,9};
    int max = mayor(num,nelementos);
    cout<<"Numero mayor del arreglo es: "<<max<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int mayor(int *num,int nelementos)
{
    int max=0;
    for (int i = 0; i < nelementos; i++)
    {
        if(*num > max){
            max =* num;
        }
        num++; // asi se aumentan los punteros
    }
}
int mayorAlternativo(int *num,int nelementos){
    int max = 0;
    for (int i = 0; i < nelementos; i++)
    {
        if(*(num + i) > max){
            max = *(num + i);
        }
    }
} 