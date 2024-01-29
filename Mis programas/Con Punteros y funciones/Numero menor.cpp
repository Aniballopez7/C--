#include<iostream>
using namespace std;
int n,*num; 
void pedirDatos();
void menor();
int main()
{
    pedirDatos();
    menor();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(){
    cout<<"Ingrese la cantidad de elementos que tendra su arreglo: ";cin>>n;
    num = new int[n]; 
    for (int i = 0; i < n; i++)
    {
        cout<<"Numero "<<i+1<<": ";cin>>*(num+i);
    }
    cout<<"\n";
}
void menor(){
    int menor=999999;
    for (int i = 0; i < n; i++)
    {
        if (*(num+i)<menor)
        {
            menor = *(num+i);
        }
    }
    cout<<"Menor es: "<<menor<<endl;
}