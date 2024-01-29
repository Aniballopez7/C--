/* Ejercicio9 Escribí un programa que solicite al usuario que ingrese cuántos 
shows musicales ha visto en el último año y almacene ese número en una variable. 
A continuación mostrar en pantalla un valor de verdad (True o False) que indique 
si el usuario ha visto más de 3 shows*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

    int main(){
    int show, n=3;
    
    cout<<"Ingrese cuantos shows a visto este año: ";cin>>show;
    
    bool valor = show > n ;
    
    cout<<valor<<endl;
    

    getch ();
    return 0;
}

