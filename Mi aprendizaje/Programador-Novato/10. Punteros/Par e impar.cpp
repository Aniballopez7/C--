#include<iostream>
using namespace std; 
int main()
{
    int n,*p;
    cout<<"Ingrese un numero par: ";cin>>n;
    cout<<"\n";
    p = &n;
    if (*p % 2 == 0)
    {
        cout<<"El numero "<<*p<<" es par"<<endl;
    }
    else{
        cout<<"El numero "<<*p<<" es impar"<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}