
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std; 
int main()
{
    float num,elevacion,result_e,raiz,tiempo_f; //1
    tiempo_f = clock(); //1
    cout<<"Ingrese un numero: ";cin>>num; //1
    cout<<"Ingrese a que numero desea elevalor: ";cin>>elevacion;  //1
    cout<<"\n"; //1
    for (int x = 2; x <= num; x+=2) //n
    {
        result_e = pow(x,elevacion); //n
        raiz = sqrt(result_e); //n
        cout<<x<<" ^ "<<elevacion<<" = "<<result_e<<" y su raiz = "<<raiz<<endl; //n
    }
    tiempo_f = clock() - tiempo_f; //1
    cout<<"\nTiempo de ejecucion del programa es "<<tiempo_f/CLOCKS_PER_SEC<<" segundos"<<endl; //1
    system("\nread -p '\nPresiona Enter para continuar...' var");//1
}
//llevandolo a la notacion big O quedaria = 4n + 8 = O(n)
//con la funcion clock se calcula el tiempo de ejecucion del algoritmo completo