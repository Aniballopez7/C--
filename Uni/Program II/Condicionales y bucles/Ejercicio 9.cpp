/* Ejercicio9 Escrib� un programa que solicite al usuario que ingrese cu�ntos 
shows musicales ha visto en el �ltimo a�o y almacene ese n�mero en una variable. 
A continuaci�n mostrar en pantalla un valor de verdad (True o False) que indique 
si el usuario ha visto m�s de 3 shows*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

    int main(){
    int show, n=3;
    
    cout<<"Ingrese cuantos shows a visto este a�o: ";cin>>show;
    
    bool valor = show > n ;
    
    cout<<valor<<endl;
    

    getch ();
    return 0;
}

