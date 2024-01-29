#include<iostream>
using namespace std; 
void Entregar(int,int& quinientos,int& docientos,int& cien,int& cincuenta,int& veinte,int& diez, int& cinco, int& uno);
int main()
{
    int dinero,quinientos,doscientos,cien,cincuenta,veinte,diez,cinco,uno;
    cout<<"Ingrese cuanto dinero necesita: ";cin>>dinero;
    Entregar(dinero,quinientos=0,doscientos=0,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0);
    cout<<"\nAqui esta tu dinero:\n"<<endl;
    cout<<"Quinientos: "<<quinientos<<endl;
    cout<<"Doscientos: "<<doscientos<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void Entregar(int dinero,int& quinientos,int& docientos,int& cien,int& cincuenta,int& veinte,int& diez, int& cinco, int& uno)
{
    cien = dinero / 100;
    dinero %= 100;

    cincuenta = dinero / 50;
    dinero %= 50;

    veinte = dinero / 20;
    dinero %= 20;

    diez = dinero / 10;
    dinero %= 10;

    cinco = dinero / 5;
    dinero %= 5;

    uno = dinero;
}