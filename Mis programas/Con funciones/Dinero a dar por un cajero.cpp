#include<iostream>
using namespace std; 
void Entregar(int,int& quinientos,int& docientos,int& cien,int& cincuenta,int& veinte,int& diez, int& cinco, int& uno);
int main()
{
    int dinero,quinientos,doscientos,cien,cincuenta,veinte,diez,cinco,uno;
    cout<<"Ingrese cuanto dinero necesita: ";cin>>dinero;
    Entregar(dinero,quinientos=0,doscientos=0,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0);
    system("\nread -p '\nPresiona Enter para continuar...' var");
    system("clear");
    cout<<"**********************"<<endl;
    cout<<"* MENSAJE DEL CAJERO *"<<endl;
    cout<<"**********************\n"<<endl;
    if (quinientos==1)
    {
        cout<<"Te dare un billete de 500.000BsS"<<endl;
    }
    else if(quinientos>1)
    {
        cout<<"Te dare "<<quinientos<<" billetes de 500.000BsS"<<endl;
    }
    //Docientos
    if (doscientos==1)
    {
        cout<<"Te dare un billete de 200.000BsS"<<endl;
    }
    else if(doscientos>1)
    {
        cout<<"Te dare "<<doscientos<<" billetes de 200.000BsS"<<endl;
    }
    //Cien
    if (cien==1)
    {
        cout<<"Te dare un billete de 100.000BsS"<<endl;
    }
    else if(cien>1)
    {
        cout<<"Te dare "<<cien<<" billetes de 100.000BsS"<<endl;
    }
    //Cincuenta
    if (cincuenta==1)
    {
        cout<<"Te dare un billete de 50.000BsS"<<endl;
    }
    else if(cincuenta>1)
    {
        cout<<"Te dare "<<cincuenta<<" billetes de 50.000BsS"<<endl;
    }
    //Veinte
    if (veinte==1)
    {
        cout<<"Te dare un billete de 20.000BsS"<<endl;
    }
    else if(veinte>1)
    {
        cout<<"Te dare "<<veinte<<" billetes de 20.000BsS"<<endl;
    }
    //Diez
    if (diez==1)
    {
        cout<<"Te dare un billete de 10.000BsS"<<endl;
            }
    else if(diez>1)
    {
        cout<<"Te dare "<<diez<<" billetes de 10.000BsS"<<endl;
    }
    //Cinco
    if (cinco==1)
    {
        cout<<"Te dare un billete de 5.000BsS"<<endl;
    }
    else if(cinco>1)
    {
        cout<<"Te dare "<<cinco<<" billetes de 5.000BsS"<<endl;
    }
    //Uno
    if (uno==1)
    {
        cout<<"Te dare un billete de 1.000BsS"<<endl;
    }
    else if(uno>1)
    {
        cout<<"Te dare "<<uno<<" billetes de 1.000BsS"<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void Entregar(int dinero,int& quinientos,int& docientos,int& cien,int& cincuenta,int& veinte,int& diez, int& cinco, int& uno){
    quinientos = dinero / 500;
    dinero %= 500;
    
    docientos = dinero / 200;
    dinero %= 200;

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