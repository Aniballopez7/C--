#include <iostream>
using namespace std;
int main()
{
    char letra;
    do
    {
        cout<<"Preciona la letra a: ";cin>>letra;
    }while (letra == 'a');
    cout<<"Dije que precionaras la letra a\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}