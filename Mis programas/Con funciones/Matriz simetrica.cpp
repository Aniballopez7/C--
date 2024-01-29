#include<iostream>
using namespace std; 
const int f=3,c=3;
void pedirDatos(int m[][c]);
void mostarOriginal(int m[][c]);
void mostrarTranspuesta(int m[][c]);
bool simetria(int m[][c]);
int main()
{
    int m[f][c];
    pedirDatos(m);
    cout<<"\nEsta es la matriz original\n"<<endl;
    mostarOriginal(m);
    bool simetrica = simetria(m);
    cout<<"\nEsta es la matriz transpuesta\n"<<endl;
    mostrarTranspuesta(m);
    if (simetrica == true)
    {
        cout<<"\nLa matriz es simetrica"<<endl;
    }
    else{
        cout<<"\nLa matriz no es simetrica"<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(int m[][c]){
    cout<<"Ingresa los datos de la matriz simetrica:\n"<<endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"Ingrese la matriz ["<<i+1<<"]["<<j+1<<"]: ";cin>>m[i][j];
        }
    }
}
void mostarOriginal(int m[][c]){
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void mostrarTranspuesta(int m[][c]){
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<m[j][i]<<" ";
        }
        cout<<"\n";
    }
}
bool simetria(int m[][c]){
    bool simetria=true;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j]!=m[j][i])
            {
                simetria=false;
            }
        }
    }
    return simetria;
}