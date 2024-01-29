#include <iostream>
#include<string.h>
#include <clocale>
using namespace std;
struct Ciudad
{
    string nombre, zona;
    float vidrio = 0, carton = 0, metal = 0, totalVCM = 0,habitantes;
}Ciudad[5], *punteroCiudad = Ciudad;

void ingresarDatos()
{
    int opc, cont = 0;
    bool salir = false;
    for (int i = 0; i <= 1; i++)
    {
        system("cls");
        cout<<"Ingrese el nombre de la ciudad: ";cin>>(punteroCiudad+i)->nombre;
        cout<<"Ingrese el nombre de la zona de la ciudad: ";cin>>(punteroCiudad+i)->zona;
        do
        {
            system("cls");
            cout<<"Ingrese que tipo de desecho se vierte en la zona:\n"<<endl;
            cout<<"1. Vidrios"<<endl;
            cout<<"2. Plastico / Carton"<<endl;
            cout<<"3. Metal"<<endl;
            cout<<"4. Salir\n"<<endl;
            cout<<"Ingrese una opcion: ";cin>>opc;
            if ((opc < 0) || (opc > 4))
            {
                cout<<"Ingrese una opcion valida\n"<<endl;
                system("cls");
            }
            switch (opc)
            {
                case 1:
                {
                    cout<<"\nIngrese la cantidad de vidrios: ";cin>>(punteroCiudad+i)->vidrio;
                    cont=1;
                    (punteroCiudad+i)->vidrio += (punteroCiudad+i)->vidrio;
                    (punteroCiudad+i)->totalVCM += (punteroCiudad+i)->vidrio;
                    salir = false;
                }break;
                case 2:
                {
                    cout<<"\nIngrese la cantidad de Plastico / Carton: ";cin>>(punteroCiudad+i)->carton;
                    cont=1;
                    (punteroCiudad+i)->carton =+ (punteroCiudad+i)->carton;
                    (punteroCiudad+i)->totalVCM += (punteroCiudad+i)->carton;
                    salir = false;
                }break;
                case 3:
                {
                    cout<<"\nIngrese la cantidad de Metal: ";cin>>(punteroCiudad+i)->metal;
                    cont=1;
                    (punteroCiudad+i)->metal =+ (punteroCiudad+i)->metal;
                    (punteroCiudad+i)->totalVCM += (punteroCiudad+i)->metal;
                    salir = false;
                }break;
                case 4: 
                {
                    if (cont == 0)
                    {
                        cout<<"\nLa zona debe tener al menos algun tipo de desecho\n"<<endl;
                        system("pause");
                    }
                    if((cont > 0) && (opc == 4))
                    {
                        salir = true;
                    } 
                }break;
            }
        } while (salir != true);
        cout<<"\nIngrese la cantidad de habitantes de la zona: ";cin>>(punteroCiudad+i)->habitantes;
    }
    salir = false;
}
void mostrarDatos()
{
    char r;
    float mayor = 0;
    int pos = 0;
    for (int i = 0; i <= 1; i++)
    {
        cout<<"Zona "<<i+1<<"\n"<<endl;
        cout<<"Nombre de la ciudad: "<<(punteroCiudad+i)->nombre<<endl;
        cout<<"Nombre de la zona: "<<(punteroCiudad+i)->zona<<endl;
        cout<<"Cantidad de vidrio: "<<(punteroCiudad+i)->vidrio<<endl;
        cout<<"Cantidad de Carton o Papel: "<<(punteroCiudad+i)->carton<<endl;
        cout<<"Cantidad de Metal: "<<(punteroCiudad+i)->metal<<endl;
        cout<<"Cantidad Total de Desechos: "<<(punteroCiudad+i)->totalVCM<<endl;
        cout<<"\n";
    }
    for (int i = 0; i <= 1; i++)
    {
        if (((punteroCiudad+i)->totalVCM) > mayor)
        {
            mayor = (punteroCiudad+i)->totalVCM;
            pos = i;
        }
    }
    cout<<"Zona con mas desechos:\n"<<endl;
    cout<<"Nombre de la ciudad: "<<(punteroCiudad+pos)->nombre<<endl;
    cout<<"Nombre de la zona: "<<(punteroCiudad+pos)->zona<<endl;
    cout<<"Desecho total: "<<(punteroCiudad+pos)->totalVCM<<endl;
    cout<<endl;
}
void promedioDesechos()
{
    float promedio = 0, suma = 0;
    for (int i = 0; i <= 1; i++)
    {
        suma = ((punteroCiudad+i)->vidrio + (punteroCiudad+i)->carton + (punteroCiudad+i)->metal);
        promedio = suma / 3;
        cout<<"La cantidad promedio diaria de desechos en la zona "<<(punteroCiudad+i)->zona<<" es de: "<<promedio<<endl;
    }
    cout<<endl;
}
void menu()
{
    int opc;
    bool salir = false;
    do
    {
        system("cls");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Ingresar Ciudad"<<endl;
        cout<<"2. Mostrar Estadisticas Generales"<<endl;
        cout<<"3. Promedio de zonas"<<endl;
        cout<<"4. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 4))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("pause");
        }
        //system("clear"); //si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    ingresarDatos();
                }break;
            case 2:
                {
                    mostrarDatos();
                }break;
            case 3:
                {
                    promedioDesechos();
                }break;
            case 4:
                {
                    salir = true;
                }break;
        }
        system("pause");
    } while (salir != true);
}
int main(){
    setlocale(LC_CTYPE,"Spanish");
    menu();
    system("pause");
}
