#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
float costo = 0;
int f1,f2,f3,f4;
int tecnico1 = 0, tecnico2 = 0;
struct Fecha
{
	int dia, mes, ano;
};struct Fecha fechaIngreso, fechaSalida;

struct Fallas
{
	int virus = 0, lentitud = 0, internet = 0, windows = 0;
}; struct Fallas falla;
struct Tecnico
{
	int tecnico1 = 0, tecnico2 = 0;
}; Tecnico tecnicos;
struct Equipo
{
	int serialEquipo;
	string diagnostico;
	float costoReparacion, porcentaje = 0.16;
	Fallas falla;
	Fecha fechaIngreso, fechaSalida;
	Tecnico tecnicos;
}; Equipo equipos[2];
void ingresarDatos()
{
	for(int x=0;x <= 1;x++)
	{
		int falla;
		cout<<"Equipo "<<x+1<<endl;
		cout<<"Ingrese el serial del equipo: ";cin>>equipos[x].serialEquipo;
		cout<<"Fallas:"<<endl<<endl;
		cout<<"1. Virus"<<endl;
		cout<<"2. Lentitud"<<endl;
		cout<<"3. Fallas con el windows con algun programa"<<endl;
		cout<<"4. No tiene acceso a internet"<<endl<<endl;
		cout<<"Ingrese falla del equipo: ";cin>>falla;
		if(falla == 1)
		{
			equipos[x].falla.virus++;
			equipos[x].tecnicos.tecnico1++;
			tecnico1 += equipos[x].tecnicos.tecnico1;
			f1 = equipos[x].falla.virus;
			cout<<"El diagnostico del tecnico 1 es: "<<endl<<endl;
			cout<<"Se recomienda instalar un antivirus. en caso de que ya este instalado, borrar el mismo y/o actualizarlo"<<endl;
		}
		if(falla == 2)
		{
	        equipos[x].falla.lentitud++;
			equipos[x].tecnicos.tecnico1++;
			tecnico1 = equipos[x].tecnicos.tecnico1;
			f2 = equipos[x].falla.lentitud;
			cout<<"El diagnostico del tecnico 1 es: "<<endl<<endl;
			cout<<"Se recomienda hacer una  limpieza del disco duro. puede iniciar el administrador de tareas para ver que aplicaciones estan ocupando la mayor parte de los recursos"<<endl;
		}
		if(falla == 3)
		{
			equipos[x].falla.windows++;
			equipos[x].tecnicos.tecnico2++;
			f3 = equipos[x].falla.windows;
			tecnico2 = equipos[x].tecnicos.tecnico2;
			cout<<"El diagnostico del tecnico 2 es: "<<endl<<endl;
			cout<<"Se recomienda hacer una limpieza del software, optimizacion del sistema y/o reinstalar programas"<<endl;
		}
		if(falla == 4)
		{
			equipos[x].falla.internet++;
			equipos[x].tecnicos.tecnico2++;
			f4 = equipos[x].falla.internet;
			tecnico2 = equipos[x].tecnicos.tecnico2;
			cout<<"El diagnostico del tecnico 2 es: "<<endl<<endl;
			cout<<"Se recomienda eliminar el historial de navegacion, datos en cache y las cookies. En dado caso reiniciar el modem de internet"<<endl<<endl;
		}
		cout<<"Ingrese la fecha de ingreso del equipo: "<<endl<<endl;
		cout<<"Dia: ";cin>>equipos[x].fechaIngreso.dia;
		cout<<"Mes: ";cin>>equipos[x].fechaIngreso.mes;
		cout<<"Año: ";cin>>equipos[x].fechaIngreso.ano;
		cout<<endl;
		cout<<endl<<"Ingrese la fecha de salida del quipo: "<<endl;
		cout<<"Dia: ";cin>>equipos[x].fechaSalida.dia;
		cout<<"Mes: ";cin>>equipos[x].fechaSalida.mes;
		cout<<"Año: ";cin>>equipos[x].fechaSalida.ano;
		cout<<"Ingrese el costo de la reparacion: ";cin>>equipos[x].costoReparacion;
		equipos[x].porcentaje = equipos[x].costoReparacion * 0,16;
		equipos[x].costoReparacion += equipos[x].porcentaje;
		costo += equipos[x].costoReparacion;
		cout<<endl;
	}
}
void busqueda()
{
	if(tecnico1 > tecnico2)
	{
		cout<<"El tecnico 1 reparo mas equipos"<<endl;
	}
	else
	{
		cout<<"El tecnico 2 reparo mas equipos"<<endl;
	}
	system("pause");
}
void fallaFrecuente()
{
	if((f1 > f2 )&& (f1 > f3 )&& f1 && f4)
	{
		cout<<"La falla mas frecuente es un virus"<<endl;
	}
	else if((f2 > f1 )&& (f2 > f3 )&& (f2 > f4))
	{
		cout<<"La falla mas frecuente es que el equipo es lento"<<endl;
	}
	else if((f3 > f1 )&& (f3 > f2 )&& (f3> f4))
	{
		cout<<"La falla mas frecuente es errores o problemas con un programa o el windows"<<endl;
	}
	else
	{
		cout<<"La falla mas comun es con el internet"<<endl;
	}
}
void mostrar()
{
	for( int x = 0; x<3; x++)
	{
		cout<<"Equipos: "<<x+1<<endl<<endl;
		cout<<"Serial: "<<equipos[x].serialEquipo<<endl;
		cout<<"Falla: "<<endl;
		cout<<"Fecha entrada: "<<equipos[x].fechaIngreso.dia<<"/"<<equipos[x].fechaIngreso.mes<<"/"<<equipos[x].fechaIngreso.ano<<endl;
		cout<<"Fecha salida: "<<equipos[x].fechaSalida.dia<<"/"<<equipos[x].fechaSalida.mes<<"/"<<equipos[x].fechaSalida.ano<<endl;
		cout<<"Costo de la reparacion: "<<costo<<endl;
	}
}
void ganancias()
{
	cout<<"Ganancias totales: "<<costo<<endl;
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
        cout<<"1. Ingresar informacion"<<endl;
        cout<<"2. Buscar el tecnico que mas equipos repare"<<endl;
        cout<<"3. Buscar la falla mas frecuente"<<endl;
        cout<<"4. Mostrar informacion de todo el equipo"<<endl;
        cout<<"5. Monto de ganancias"<<endl;
        cout<<"6. Salir\n"<<endl;
        cout<<"Programa de Mauricio Inojosa y Anibal Lopez"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        system("cls");
        if ((opc < 1)||(opc > 6))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("pause");
        }
        switch (opc)
        {
            case 1:
                {
                    ingresarDatos();
                }break;
            case 2:
                {
                    busqueda();
                }break;
            case 3:
                {
                    fallaFrecuente();
                }break;
            case 4:
                {
                    mostrar();
                }break;
            case 5:
            {
                ganancias();
            }break;
            case 6:
                {
                    salir = true;
                }break;
        }
        system("pause");
    } while (salir != true);
}
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    menu();
}
