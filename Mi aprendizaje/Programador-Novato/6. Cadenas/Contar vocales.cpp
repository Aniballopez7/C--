#include <iostream>
using namespace std; 
int main()
{
    char texto[30];
    int la = 0,le = 0,li = 0,lo = 0,lu = 0;
    cout<<"Ingresa una frase con vocales: ";cin.getline(texto,30,'\n');
    for (int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
            case 'a': la++; break;
            case 'A': la++; break;
            case 'e': le++; break;
            case 'E': le++; break;
            case 'i': li++; break;
            case 'I': li++; break;
            case 'o': lo++; break;
            case 'O': lo++; break;
            case 'u': lu++; break;
            case 'U': lu++; break;
        }
    }
    cout<<"Veces que escribites tus pinches vocales:\n"<<endl;
    cout<<"Letra a: "<<la<<endl;
    cout<<"Letra e: "<<le<<endl;
    cout<<"Letra i: "<<li<<endl;
    cout<<"Letra o: "<<lo<<endl;
    cout<<"Letra u: "<<lu<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}