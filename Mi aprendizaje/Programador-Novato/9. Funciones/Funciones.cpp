#include<iostream>
using namespace std; 
int suma(int a, int b);

void resta(){
    int n = 5, n2 = 345;
    cout<<"resta: "<<n-n2<<endl;
    system("pause");
}

int main()
{
    // int resultado,valorA,valorB;
    // cout<<"Ingresa el valor de A: ";cin>>valorA;
    // cout<<"Ingrese el valor de B: ";cin>>valorB;
    // resultado = suma(valorA,valorB);
    // cout<<"Resultado: "<<resultado<<endl;
    resta();
    system("pause");
}
int suma(int valA, int valB)
{
    int resultado;
    resultado = valA +valB;
    return resultado;
}

