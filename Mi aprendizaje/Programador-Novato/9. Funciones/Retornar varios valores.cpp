#include <iostream>
using namespace std;
int *calculaRetorno(int,int);
int main()
{
    int num1,num2,suma = 0,multiplicacion = 0;
    cout<<"Ingresa dos numeros\n";
    cout<<"Numero 1: ";cin>>num1;
    cout<<"Numero 2: ";cin>>num2;
    int *resultado = calculaRetorno(num1,num2);
    suma = resultado[0];
    multiplicacion = resultado[1];
    cout<<"El resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la nultiplicacion es: "<<multiplicacion<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}

int *calculaRetorno(int num1,int num2)
{
    int suma = num1 + num2;
    int multiplicacion = num1 * num2;
    int *resultado;
    resultado[0] = suma;
    resultado[1] = multiplicacion;
    return resultado;
} 