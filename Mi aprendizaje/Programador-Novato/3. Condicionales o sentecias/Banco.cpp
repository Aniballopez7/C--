#include <iostream>
using namespace std;
int main()
{
    int opcion;
    float total = 1000, ingreso, egreso;
    do
    {
        system("clear");
        cout<<"Bienvenido al banco\n"<<endl;
        cout<<"1.- Ingreso de dinero"<<endl;
        cout<<"2.- Retirar dinero"<<endl;
        cout<<"3.- Salir\n"<<endl;
        cout<<"Por favor digita una opcion: ";cin>>opcion;
        system("clear");
        switch (opcion)
        {
        case 1:
            cout<<"Cuanto dinero vas a ingresar? ";cin>>ingreso;
            total += ingreso;
            cout<<"\nTienes en el bancon $"<<total<<"\n";
            system("\nread -p '\nPresiona Enter para continuar...' var");
            break;
        case 2:
            cout<<"Cuanto dinero deseas sacar: ";cin>>egreso;
            if(egreso > total)
            {
                cout<<"\nNo tienes tanto dinero, tienes "<<total<<"\n";
            }
            else
            {
                total -= egreso;
                cout<<"\nTe queda en el banco $"<<total<<"\n";
            }
            system("\nread -p '\nPresiona Enter para continuar...' var");
            break;
        }
    } while (opcion != 3);
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}