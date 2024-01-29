/* Ejercicio 17 Escribir un programa que, dado un 
n�mero por el usuario, muestre todos sus divisores positivos. 
Recuerda que un divisor es aquel que divide al n�mero de forma 
exacta (con resto 0).*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingresa un numero: ";cin>>n;
    cout << "los numeros divisores de "<<n<<" son:\n"<<endl;
    for (int x=1;x<=n;x++)
    {
    if (n%x == 0){
    cout<<x<<endl;
    }
    }                              
    return 0;
}
