#include<iostream>
using namespace std;
void pedirDatos(float& num,float& num2);
void mostrarDatos(float num, float num2);
void intercambio(float *num, float *num2); 
int main()
{
    float num,num2;
    pedirDatos(num,num2);
    cout<<"\nNumeros Originales"<<endl;
    mostrarDatos(num,num2);
    intercambio(&num,&num2);
    cout<<"Numeros Intercambiado"<<endl;
    mostrarDatos(num,num2);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
//TODO: los parametros por referencia crean un vinculo directo con la variable
// & pasar parametros por referencia
// * pasar punteros
void pedirDatos(float& num,float& num2){
    cout<<"Ingresa un numero: ";cin>>num;
    cout<<"Ingresa otro numero: ";cin>>num2;
}
void mostrarDatos(float num, float num2){
    cout<<"\nNumero 1: "<<num<<" Direccion de memoria "<<&num<<endl;
    cout<<"Numero 2: "<<num2<<" Direccion de memoria "<<&num2<<endl;
    cout<<"\n";
}
void intercambio(float *num, float *num2){
    float aux;
    aux = *num;
    *num = *num2;
    *num2 = aux;
}