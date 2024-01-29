#include <iostream>
using namespace std;
int *calculaRetorno(int,int);
void calcularRef(int,int,int&,int&);
int main()
{
    int n1,n2,suma = 0,mul = 0;
    cout<<"Humano ingresa dos numeros\n";
    cout<<"Numero 1: ";cin>>n1;
    cout<<"Numero 2: ";cin>>n2;
    cout<<"\n";
    calcularRef(n1,n2,suma,mul);
    cout<<"El resultado de la suma es: "<<suma<<"\n";
    cout<<"El resultado de la multiplicacion es: "<<mul<<"\n";
    system("pause");
    return 0;
}
void calcularRef(int n1,int n2,int& suma,int& mul)
{
    suma = n1 + n2;
    mul= n1 * n2;
}
int *calculaRetorno(int n1,int n2)
{
    int suma = n1 + n2;
    int mul = n1 * n2;
    int *resultado;
    resultado[0] = suma;
    resultado[1] = mul;
    return resultado;
} 