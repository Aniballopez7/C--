// TODO UN PROGRAMA QUE CARGUE UNA MATRIZ NxM CARACTERES. MOSTRAR UN MENU QUE HAGA:
//  TODO 1.PASAR MAYUSCULAS TODOS LOS DATOS
//  TODO 2.PASAR A MINUSCULA TODOS LOS DATOS
//  TODO 3.CONTAR LA CANTIDAD DE VECES EN QUE SE ENCUENTRA UN CARACTER EN LA MATRIZ
//  TODO EN CASO DE QUE NO ENCUENTRE QUE SE MUESTRE QUE NO SE ENCONTRO

// Este inicio viene con el inicio en español de una vez
#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <random>
#include <cctype>
using namespace std;

// TODO LLENAR MATRIZ
char **llenarMatriz(int &filas, int &columnas)
{
    // Inicializar el generador de números aleatorios
    random_device rd;  // Generador de números aleatorios no determinísticos
    mt19937 gen(rd()); // Semilla para el generador Mersenne Twister

    // Generar un número aleatorio entre 0 y 1 para decidir si es mayúscula o minúscula
    uniform_int_distribution<> mayuscula_or_minuscula(0, 1);

    cout << "Ingresa cuantas filas tendra tu matriz: ";
    cin >> filas;
    cout << "Ingresa cuantas columnas tendra tu matriz: ";
    cin >> columnas;
    char **matriz = new char *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new char[columnas];
    }
    // INSERTANDO CARACTERES ALEATORIOS
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (mayuscula_or_minuscula(gen) == 0)
            {
                // Mayúscula
                uniform_int_distribution<> dis(65, 90); // Distribución uniforme para números entre 65 y 90 (A-Z)
                matriz[i][j] = static_cast<char>(dis(gen));
            }
            else
            {
                // Minúscula
                uniform_int_distribution<> dis(97, 122); // Distribución uniforme para números entre 97 y 122 (a-z)
                matriz[i][j] = static_cast<char>(dis(gen));
            }
        }
    }
    return matriz;
}
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
// FUNCION PARA MAYUSCULAS
void matrizMayuscula(char **matriz, int filas, int columnas)
{
    mostrarMatriz(matriz,filas,columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = toupper(matriz[i][j]);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
// FUNCION PARA MINUSCULAS
void matrizMinuscula(char **matriz, int filas, int columnas)
{
    mostrarMatriz(matriz,filas,columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = tolower(matriz[i][j]);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
// FUNCION PARA CONTAR
void contarCaracteres(char **matriz, int &filas, int &columnas)
{
    int contador = 0;
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
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
        cout << "\nNo se encontro la letra\n"
             << endl;
    }
    else
    {
        cout << "\nLa letra " << letra << " se repite " << contador << " veces\n"
             << endl;
    }
}
void menu()
{
    int opc, filas, columnas;
    char r;
    bool salir = false;
    char **matriz;
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
        cout << "6. Salir\n"
             << endl;
        cout << "Ingresar una opcion: ";
        cin >> opc;
        cout << "\n";
        if ((opc < 1) || (opc > 6))
        {
            cout << "Ingrese una opcion valida" << endl;
            system("pause");
        }
        // system("cls"); //si quieres que se limpie la pantalla o no
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
            matrizMayuscula(matriz, filas, columnas);
            system("pause");
        }
        break;
        case 4:
        {
            matrizMinuscula(matriz, filas, columnas);
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
    setlocale(LC_CTYPE, "Spanish");
    menu();
    cout << "\n";
    system("pause");
}
