#include <iostream>
using namespace std;
int main()
{
    int numero,millar,centenas,decenas,unidades;
    cout<<"Ingresa un numero: ";cin>>numero;//1234
    unidades = numero  % 10;//=4
    numero = numero / 10;//1234 / 10=123.4
    decenas = numero % 10;//)3
    numero = numero / 10;//123 / 10=12.3
    centenas = numero % 10;//)2
    millar = numero / 10;//12/10=1.2
    //cout<<millar<<"-"<<centenas<<"-"<<decenas<<"-"<<unidades;
    switch (millar)
    {
        case 1:cout<<"M";break;
        case 2:cout<<"MM";break;
        case 3:cout<<"MMM";break;
    }
    switch (centenas)
    {
        case 1:cout<<"C";break;
        case 2:cout<<"CC";break;
        case 3:cout<<"CCC";break;
        case 4:cout<<"CD";break;
        case 5:cout<<"D";break;
        case 6:cout<<"DC";break;
        case 7:cout<<"DCC";break;
        case 8:cout<<"DCCC";break;
        case 9:cout<<"CM";break;
    }
    switch (decenas)
    {
        case 1:cout<<"X";break;
        case 2:cout<<"XX";break;
        case 3:cout<<"XXX";break;
        case 4:cout<<"XL";break;
        case 5:cout<<"L";break;
        case 6:cout<<"LX";break;
        case 7:cout<<"LXX";break;
        case 8:cout<<"LXXX";break;
        case 9:cout<<"XC";break;
    }
    switch (unidades)
    {
        case 1:cout<<"I";break;
        case 2:cout<<"II";break;
        case 3:cout<<"III";break;
        case 4:cout<<"IV";break;
        case 5:cout<<"V";break;
        case 6:cout<<"VI";break;
        case 7:cout<<"VII";break;
        case 8:cout<<"VIII";break;
        case 9:cout<<"IX";break;
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}