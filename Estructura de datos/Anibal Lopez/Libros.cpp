/*Una persona desea almancenar informacion de la cantidad de �ibros que tiene en su biblioteca. Para ello deve realizar
un struct para guardar la cota del libro, nombre autor, tituilo del libro, fecha y a� de edicion, se dese ingresar, buscar y actualizar
libros*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Fecha
{
	string dia, mes, ano;
	string edicion;
};
struct Fecha fechaDMA;

struct Libros
{
	string cotaLibro, nombreAutor, tituloLibro;
	Fecha fechaDMA;
};
Libros libro;

void ingresarDatos()
{
	cout << "Ingrese el Titulo del libro: ";
	getline(cin, libro.tituloLibro);
	cout << "Ingrese el nombre del  autor: ";
	getline(cin, libro.nombreAutor);
	cout << "Ingrese el cota del libro: ";
	getline(cin, libro.cotaLibro);
	cout << "Ingrese el dia de publicacion: ";
	getline(cin, libro.fechaDMA.dia);
	cout << "Ingrese el mes de publicacion: ";
	getline(cin, libro.fechaDMA.mes);
	cout << "Ingrese el anio de publicacion: ";
	getline(cin, libro.fechaDMA.ano);
	cout << "Ingrese la edicion del libro: ";
	getline(cin, libro.fechaDMA.edicion);
}
void buscarLibros()
{
	string numero;
	cout << "Ingrese la cota del libro: ";
	cin >> numero;
	if (numero == libro.cotaLibro)
	{
		cout << "El libro fue encontrado y se llama: " << libro.tituloLibro << endl;
	}
	else
	{
		cout << "El libro no esta registrado" << endl;
	}
}
void mostrar()
{
	cout << "Titulo: " << libro.tituloLibro << endl;
	cout << "Nombre: " << libro.nombreAutor << endl;
	cout << "Cota: " << libro.cotaLibro << endl;
	cout << "Fecha: " << libro.fechaDMA.dia << "/";
	cout << libro.fechaDMA.mes << "/";
	cout << libro.fechaDMA.ano << endl;
	cout << "Fecha edicion: " << libro.fechaDMA.edicion << endl;
}
void menu()
{
	bool salir = false;
	int opc;
	do
	{
		system("cls");
		cout << "1. Ingresar libros" << endl;
		cout << "2. Buscar libros" << endl;
		cout << "3. Mostrar Libros" << endl;
		cout << "4. Salir" << endl
			 << endl;
		cout << "Ingrese una opcion: ";
		cin >> opc;
		cout << endl;
		if (opc < 0 || opc > 4)
		{
			cout << "Opcion no valida" << endl;
			system("pause");
		}
		fflush(stdin);
		switch (opc)
		{
		case 1:
		{
			ingresarDatos();
			break;
		}
		case 2:
		{
			buscarLibros();
			break;
		}
		case 3:
		{
			mostrar();
			break;
		}
		}
		cout << endl;
		system("pause");
	} while (salir != true);
}
int main()
{
	menu();
	system("pause");
}
