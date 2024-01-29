#include<iostream>
using namespace std; 
void cambio(int&,int&);
void cambio1(int&,int&);
int main()
{
    int n1,n2;
    cout<<"Ingresa el valor de n1: ";cin>>n1;
    cout<<"Ingresa el valor de n1: ";cin>>n2;
    cout<<"\nValores ingresados:\n"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<"\nValores cambiados:\n"<<endl;
    cambio(n1,n2);
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<"\nValores cambiados manualmente:\n"<<endl;
    cambio1(n1,n2);
    cout<<n1<<endl;
    cout<<n2<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void cambio1(int& n1,int& n2){
    n1 = 60;
    n2 = 30;
}
void cambio(int& n1,int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}