// TODO UN PROGRAMA QUE CARGUE UNA MATRIZ NxM CARACTERES. MOSTRAR UN MENU QUE HAGA:
//  TODO 1.PASAR MAYUSCULAS TODOS LOS DATOS
//  TODO 2.PASAR A MINUSCULA TODOS LOS DATOS
//  TODO 3.CONTAR LA CANTIDAD DE VECES EN QUE SE ENCUENTRA UN CARACTER EN LA MATRIZ
//  TODO EN CASO DE QUE NO ENCUENTRE QUE SE MUESTRE QUE NO SE ENCONTRO

#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <cctype>
using namespace std;

// TODO LLENAR MATRIZ
char **llenarMatriz(int &filas, int &columnas)
{
    cout << "Ingresa cuantas filas tendra tu matriz: ";cin >> filas;
    cout << "Ingresa cuantas columnas tendra tu matriz: ";cin >> columnas;
    //? Crear la matriz
    char **matriz = new char *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new char[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "\nIngrese una letra: ";cin >> matriz[i][j];
        }
    }
    return matriz;
}
// TODO FUNCION PARA MOSTRAR MATRIZ
void mostrarMatriz(char **matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
//TODO FUNCION PARA CREAR COPIA DE MATRIZ ORIGINAL

char **matrizCopia(char **matriz, int filas, int columnas)
{
    char **matriz2 = new char *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz2[i] = new char[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = matriz[i][j];
        }
    }
    return matriz2;
}
//TODO FUNCION PARA MAYUSCULAS
void matrizMayuscula(char **matriz, int filas, int columnas, char **matriz2)
{
    matriz2 = matrizCopia(matriz,filas,columnas);
    cout << "Matriz original:\n"<< endl;
    mostrarMatriz(matriz, filas, columnas);
    cout << "\nMatriz transformada:\n"<< endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = toupper(matriz2[i][j]);
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
}
//TODO FUNCION PARA MINUSCULAS
void matrizMinuscula(char **matriz, int filas, int columnas, char **matriz2){
    matriz2 = matrizCopia(matriz,filas,columnas);
    cout << "Matriz original:\n" << endl;
    mostrarMatriz(matriz, filas, columnas);
    cout << "\nMatriz transformada:\n" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = tolower(matriz2[i][j]);
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
}

//TODO FUNCION PARA CONTAR
void contarCaracteres(char **matriz, int filas, int columnas)
{
    int contador = 0;
    char letra;
    cout << "Ingrese una letra: ";cin >> letra;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (matriz[i][j] == letra)
            {
                contador++;
            }
        }
    }
    if (contador == 0)
    {
        cout << "\nNo se encontro la letra\n"<< endl;
    }
    else
    {
        cout << "\nLa letra " << letra << " se repite " << contador << " veces\n"<< endl;
    }
}
// TODO FUNCION DE MENU
void menu()
{
    int opc, filas, columnas;
    char r;
    bool salir = false;
    char **matriz, **matriz2;
    do
    {
        system("cls");
        cout << "*********************" << endl;
        cout << "* MENU DEL PROGRAMA *" << endl;
        cout << "*********************\n"
             << endl;
        cout << "1. LLENAR MATRIZ CON CARACTERES" << endl;
        cout << "2. MOSTRAR LA MATRIZ" << endl;
        cout << "3. PASAR MAYUSCULAS TODOS LOS DATOS" << endl;
        cout << "4. PASAR A MINUSCULA TODOS LOS DATOS" << endl;
        cout << "5. CONTAR LA CANTIDAD DE VECES EN QUE SE ENCUENTRA UN CARACTER EN LA MATRIZ" << endl;
        cout << "6. Salir\n"<< endl;
        cout << "Ingresar una opcion: ";cin >> opc;
        cout << "\n";
        if ((opc < 1) || (opc > 6))
        {
            cout << "Ingrese una opcion valida" << endl;
            system("pause");
        }
        switch (opc)
        {
        case 1:
        {
            matriz = llenarMatriz(filas, columnas);
            system("pause");
        }
        break;
        case 2:
        {
            mostrarMatriz(matriz, filas, columnas);
            system("pause");
        }
        break;
        case 3:
        {
            matrizMayuscula(matriz, filas, columnas, matriz2);
            system("pause");
        }
        break;
        case 4:
        {
            matrizMinuscula(matriz, filas, columnas, matriz2);
            system("pause");
        }
        break;
        case 5:
        {
            contarCaracteres(matriz, filas, columnas);
            system("pause");
        }
        break;
        case 6:
        {
            salir = true;
        }
        break;
            cout << "\n";
        }
    } while (salir != true);
}
int main()
{
    menu();
    cout << "\n";
    system("pause");
}
