#include<iostream>
using namespace std; 
int main()
{
    int num = 2;
    int *p; 
    p = &num;
    cout<<"Valor: "<<*p<<endl;
    cout<<"Direccion: "<<p<<endl;

    int num1 = 10, num2 = 5;
    int *referencia,*referencia2;

    referencia = &num1;
    referencia2 = &num2;

    cout<<"suma: "<<*referencia + *referencia2<<endl;

    system("pause");
}