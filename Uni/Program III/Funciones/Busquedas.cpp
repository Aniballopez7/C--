#include <iostream>
#include <clocale>
using namespace std;
void menor(int numeros[],int menorn,int &n);
void mayor(int numeros[],int mayorn,int &n);
void elementoEspecifico(int numeros[],int element,int &n);
void anteriores(int numeros[],int menorn,int element,int mayorn,int &n);
int main(){
    setlocale(LC_CTYPE,"Spanish");
    int numeros[20],n,opc,menorn, mayorn,element;
    cout<<"Ingrese el numero de elementos de su arreglo: ";cin>>n;
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Numero: ["<<i+1<<"]: ";cin>>numeros[i];
    }
    cout<<"\n";
    do
    {
        cout<<"*************************************************"<<endl;
        cout<<"* ¿ Que desea hacer con su arreglo insertado ? *"<<endl;
        cout<<"*************************************************\n"<<endl;
        cout<<"1. Buscar al menor"<<endl;
        cout<<"2. Buscar al mayor"<<endl;
        cout<<"3. Buscar un elemento especifico"<<endl;
        cout<<"4. Las 3 anteriores"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>5))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        } 
        switch (opc){
            case 1:{
                int menorn=99999;
                menor(numeros,menorn,n);
                }break;
            case 2:{
                int mayorn=-999999;
                mayor(numeros,mayorn,n);
                }break;
            case 3:{
                elementoEspecifico(numeros,element,n);
                }break;
            case 4:{
                int mayorn=-999999;
                int menorn=99999;
                anteriores(numeros,menorn,element,mayorn,n);
            }break;
            case 5:{
                return 0;
            }break;
        }
    } while ((opc>=1)||(opc<6));
}
void menor(int numeros[],int menorn,int& n){
    for (int i = 0; i < n; i++)
    {
        if(numeros[i]<menorn)
        {
            menorn = numeros[i];
        }
    }
    cout<<"El numero menor del arreglo es: "<<menorn<<endl;
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}   
void mayor(int numeros[],int mayorn,int &n){
    for (int i = 0; i < n; i++)
    {
        if (numeros[i]>mayorn)
        {
            mayorn = numeros[i];
        }
    }
    cout<<"El numero mayor del arreglo es: "<<mayorn<<endl;
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
void elementoEspecifico(int numeros[],int element,int &n){
    cout<<"Ingresa el elemento especifico que desea buscar en el arreglo: ";cin>>element;
    cout<<"\n";
    int cont;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i]==element)
        {
            cout<<"Se encontro el elemento "<<element<<" en el arreglo en la pocision: "<<cont<<endl;
        }
        else{
            cout<<"No se encontro el elemento"<<endl;
            return;
        }
        cont++;
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
void anteriores(int numeros[],int menorn,int element,int mayorn,int &n){
    int cont=0;
    cout<<"Ingresa el elemento especifico que desea buscar en el arreglo: ";cin>>element;
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        if(numeros[i]<menorn)
        {
            menorn = numeros[i];
        }
    }
    cout<<"El numero menor del arreglo es: "<<menorn<<endl;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i]>mayorn)
        {
            mayorn = numeros[i];
        }
    }
    cout<<"El numero mayor del arreglo es: "<<mayorn<<endl;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i]==element)
        {
            cout<<"Se encontro el elemento "<<element<<" en el arreglo"<<endl;
            cout<<"\n";
            return;
        }
        else{
            cout<<"No se encontro el elemento"<<endl;
            cout<<"\n";
            return;
        }
    }
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
    system("clear");
}