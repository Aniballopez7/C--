#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
void reordenar(int n, char *x[]);
int main()
{
int i, n=0;
char *x[10];
cout<<"Introducir debajo cada cadena en una linea "<<endl<<endl;
cout<<"Escribir FIN para terminar "<<endl<<endl;
//leer la lista de cadenas de caracteres
    do{
    //reservar memoria
    x[n]=(char *) malloc(12 * sizeof(char));
    cout<<" cadena "<<n+1<<": ";
    cin>>x[n];
    }while(strcmp(x[n++],"FIN"));

//reordenar la lista de cadenas de caracteres
reordenar(--n,x);

//escribir la lista reordenada de cadenas de caracteres
cout<<endl<<endl<<"la lista reordenada de cadenas: "<<endl<<endl;
for(i=0;i<n;++i)
cout<<" cadena "<<i+1<<" "<<x[i]<<endl;
system("pause");
}

//procedimiento para reordenar la lista de cadenas
void reordenar(int n, char *x[])
{
char *temp;
int i, elem;
for(elem=0;elem<n-1;++elem)

//encontrar la menor de las cadenas restantes
for(i=elem;i<n;++i)
if(strcmp(x[elem],x[i])>0)
{
//intercambiar las dos cadenas
temp=x[elem];
x[elem]=x[i];
x[i]=temp;
}
return;
}