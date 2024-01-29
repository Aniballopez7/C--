/*
Pedir al humano que ingrese el tamaño de la matrizA y la matrizB.
Pedir al humano que ingrese los datos de la matrizA y la matrizB.
Comprobar si la matrizA es simétrica con la matrizB.
Mostrar si las matrices son simétricas a no.
*/
#include <iostream>
using namespace std;
int main()
{
    int filMatrizA,colMatrizA,filMatrizB,colMatrizB;
    inicio:
    cout<<"Ingresa las medidas filas de la matriz A: ";cin>>filMatrizA;
    cout<<"Ingresa las medidas columas de la matriz A: ";cin>>colMatrizA;
    cout<<"Ingresa las medidas filas de la matriz B: ";cin>>filMatrizB;
    cout<<"Ingresa las medidas columas de la matriz B: ";cin>>colMatrizB;
    if(filMatrizA==colMatrizA && filMatrizB==colMatrizB && filMatrizA==filMatrizB){
        int matrizA[filMatrizA][colMatrizA],matrizB[filMatrizB][colMatrizB];
        llenarDenuvoMatriz:
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                cout<<"Ingresa los datos de la matriz A en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
                cin>>matrizA[i][j];
            }
            
        }
        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                cout<<"Ingresa los datos de la matriz B en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
                cin>>matrizB[i][j];
            }
        }
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                if(matrizA[i][j]!=matrizB[j][i]){
                    cout<<"Tu matriz A y B no son simetricas intenta de nuevo \n";
                    goto llenarDenuvoMatriz;
                }
            }
        }
    }
    else{
        cout<<"Tu matriz A y B no son cuadradas intenta de nuevo \n";
        goto inicio;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}