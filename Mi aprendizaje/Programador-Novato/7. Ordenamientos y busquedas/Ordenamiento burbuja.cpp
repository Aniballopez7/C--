#include<iostream>
using namespace std; 
int main()
{
    int vec[5],aux = 0,ciclos = 0;
    cout<<"A continuacion ingresara 5 numeros en el oden que quiera:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese un numero ["<<i+1<<"]: ";cin>>vec[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vec[j] > vec[j+1])
            {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
            ciclos++;
        }
    }
    cout<<"Numeros ordenados de manera ascendente:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<vec[i]<<endl;;
    }
    cout<<"\n"<<endl;
    cout<<"Numeros ordenados de manera descendente:\n"<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<vec[i]<<endl;;
    }
    cout<<"\nLos numeros se arreglaron en "<<ciclos<<" ciclos"<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}